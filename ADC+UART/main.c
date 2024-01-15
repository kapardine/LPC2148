#include <LPC214X.h>
#include <stdio.h>
#define PLOCK 0x00000400

void Init_PLL(void);
void Init_UART(void);
void setupPLL0(void);
void feedSeq(void);
void connectPLL0(void);
void UART_Tx(unsigned char);

void delay()
{
	int i,j;
		for(i=0;i<100;i++)
		for(j=0;j<100;j++);
}


void Init_UART(void)
{
		U0LCR=0x83;
		U0FDR=0xF1;
		U0DLL=110;
  		U0DLM=0x01;	  // Baud Rate 9600;
		U0LCR =0x03;
}

void Init_PLL(void)
{
	setupPLL0();
	feedSeq(); //sequence for locking PLL to desired freq.
	connectPLL0();
	feedSeq(); //sequence for connecting the PLL as system clock
	//SysClock is now ticking @ 60Mhz!
   	VPBDIV = 0x01; // PCLK is same as CCLK i.e 60Mhz
}
void setupPLL0(void)
{
    PLL0CON = 0x01; // PPLE=1 & PPLC=0 so it will be enabled
                    // but not connected after FEED sequence
    PLL0CFG = 0x24; // set the multipler to 5 (i.e actually 4)
                    // i.e 12x5 = 60 Mhz (M - 1 = 4)!!!
                    // Set P=2 since we want FCCO in range!!!
                    // So , Assign PSEL =01 in PLL0CFG as per the table.
}

void feedSeq(void)
{
	PLL0FEED = 0xAA;
	PLL0FEED = 0x55;
}

void connectPLL0(void)
{
    // check whether PLL has locked on to the  desired freq by reading the lock bit
    // in the PPL0STAT register

    while( !( PLL0STAT & PLOCK ));

	// now enable(again) and connect
	PLL0CON = 0x03;
}

void UART_Tx(unsigned char out)		//Function to transmit 								//string through UART							
{

		while(((U0LSR)&(0x20))!=0x20);
		U0THR=out;
		delay();
}

void UART_string(unsigned char *uart_string)												//Function to send 								//string for transmission
{

	while(*uart_string)
	{
	UART_Tx(*uart_string++);
	}
}

unsigned int ADC_0(int channel)													//Function to configure ADC
{
	unsigned int val;
	AD0CR=AD0CR | (1<<channel);			//Select the channel
	AD0CR=AD0CR | 0x1000000;			//Now START=001

	if(channel==6)				//Select the pin according 								//to the channel		
	{
	PINSEL0=PINSEL0|(3<<8); 															//Selecting AD0_6
	
	}

	if(channel==7)
	{
	  PINSEL0=PINSEL0|(3<<10);															//Selecting AD0_7
	}

	if(channel==3)
	{
	 PINSEL1=(PINSEL1 & ~(3<<28)) | (1<<28); 			 									//Selecting AD0_3
	}

	if(channel==4)
	{
	PINSEL1=(PINSEL1 & ~(3<<18)) | (1<<18);				  								//Selecting AD0_4
	}
	if(channel==1)
	{
	PINSEL1=(PINSEL1 & ~(3<<24)) | (1<<24); 			 									//Selecting AD0_1
	}	
	if(channel==2)
	{
	PINSEL1=(PINSEL1 & ~(3<<26)) | (1<<26);  												//Selecting AD0_2
	}

	while(((AD0GDR)&(80000000))==0);						
	val=((AD0GDR>>6)&(0x3FF)); //10-bit													//Storing ADC 										//converted value

	return val;

}

int main()
{
	float data_f;
	unsigned int data_int,temp,data1;
	unsigned char data;
	unsigned char dataInChar[5];
	
	PINSEL0=0x00001105; //RXD0,TXD0,SCLK0,MOSI0
	
	AD0CR=0x00210608;//Initially START=000
			
	Init_PLL();
	Init_UART();
	

while(1)
{
	
	data1=ADC_0(3);				//Sending the Channel value
    data_f=data1*3.3/1023;
	data_f = data_f*100;
	data_int = (unsigned int) data_f;												//convert float to int

	temp = (unsigned int)data_int/100;
	dataInChar[0] =(unsigned char)(temp);													//convert int to char
	dataInChar[1] = '.';				//Add 30H to send the 								//ASCII value

	data_int = data_int-(100*temp+48);
	temp = (unsigned int)data_int/10;
	dataInChar[2] =(unsigned char)(temp+48);
	data_int = data_int-(10*temp);
	temp = (unsigned int)data_int/1;
	dataInChar[3] =(unsigned char)(temp+48);
	dataInChar[4]='\0';
    
	UART_string(dataInChar);				//Send the 										//stored string
	UART_string("\n\r");

}
}
