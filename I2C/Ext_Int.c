#include <LPC214x.H>                       /* LPC21xx definitions */
#include "Ext_Int.h"
#include "buzzer.h"

#define EXTINT_EINT2_MASK 0x4
#define EXTMODE_EXTMODE2_MASK 0x4
#define EXTPOLAR_EXTPOLAR2_MASK 0x4

// Vector Control Register bit definitions
#define VIC_ENABLE      (1 << 5)

// Convert Channel Number to Bit Value
#define VIC_BIT(chan)   (1 << (chan))
#define VIC_EINT2       16

/**
**************************************************************************

****1111
  Function Name : delay()

  Description :This function suspends the tasks for specified ticks.	

  Input :  ticks:no of ticks in multiple of 1 usec
            task: task to be suspended

  Output : void

  Note :
*******************************************************************************
*/

void delay(int count)
{
  int j=0,i=0;

  for(j=0;j<count;j++)
  {
    /* At 60Mhz, the below loop introduces
    delay of 10 us */
    for(i=0;i<35;i++);
  }
}

/**
********************************************************************************************
  Function Name :	key_init()
  
  Description   :	
  
  Input         :	
  
  Output        :	Void
  
  Note          :
********************************************************************************************
*/
void init_ext_interrupt()
{
  EXTMODE = EXTMODE_EXTMODE2_MASK;
  
  EXTPOLAR &= ~EXTPOLAR_EXTPOLAR2_MASK;

  PINSEL0 = (PINSEL0 & ~(3U << 30)) | (1U << 31);
  
  /* initialize the interrupt vector */
  VICIntSelect &= ~ VIC_BIT(VIC_EINT2);           // EINT0 selected as IRQ
  VICVectAddr5 = (unsigned int)Ext_ISR;        // address of the ISR
  VICVectCntl5 = VIC_ENABLE | VIC_EINT2;
  VICIntEnable = VIC_BIT(VIC_EINT2);              // EINT0 interrupt enabled

  EXTINT &= ~EXTINT_EINT2_MASK;	
}

/**
********************************************************************************************
  Function Name :	keypad_ISR()
  
  Description   :	
  
  Input         :	
  
  Output        :	Void
  
  Note          :
********************************************************************************************
*/
void Ext_ISR(void) __irq
{
	turn_on_buzzer();
	delay(10000);
    turn_off_buzzer();

	EXTINT |= EXTINT_EINT2_MASK;                                 //clear interrupt
	VICVectAddr = 0; 
}

