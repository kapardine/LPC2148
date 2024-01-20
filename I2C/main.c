#include <lpc214x.h>
#include "lcd.h"

int main (void) 
{
  set_lcd_port_output();
  delay(100*100);
  lcd_command_write(0x28);     /*   4-bit interface, two line, 5X7 dots.        */
  lcd_clear() ;                /*   LCD clear                                   */
  lcd_command_write(0x02);     /*   cursor home                                 */
  lcd_command_write(0x06);     /*   cursor move direction                       */
  lcd_command_write(0x0C) ;    /*   display on      */
  lcd_gotoxy(0, 0);
  lcd_clear();	
  lcd_putstring(0,"     N G X   ");
  lcd_putstring(1,"  TECHNOLOGIES ");

  while (1)  
  {
  }
}