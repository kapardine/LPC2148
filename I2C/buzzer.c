#include <LPC214x.H>                       /* LPC21xx definitions */

#define BUZZER (1 << 25)
#define BUZZER_DIR IO1DIR
#define BUZZER_SET IO1SET
#define BUZZER_CLR IO1CLR

/**
********************************************************************************************
  Function Name :	turn_on_buzzer()
  
  Description   :	
  
  Input         :	
  
  Output        :	Void
  
  Note          :
********************************************************************************************
*/
void turn_on_buzzer()
{    
  BUZZER_DIR |= BUZZER;
  BUZZER_CLR |= BUZZER;	
}			 

/**
********************************************************************************************
 Function Name : turn_off_lcd_back_light()

 Description   :	

 Input         :	

 Output        : Void

 Note          :
********************************************************************************************
*/
void turn_off_buzzer(void)
{
   BUZZER_DIR |= BUZZER;
   BUZZER_SET |= BUZZER;
}



