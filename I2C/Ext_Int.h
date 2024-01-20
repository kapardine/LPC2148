#ifndef _KEYPAD_H
#define _KEYPAD_H
#include <LPC214x.H>                       /* LPC21xx definitions */

#define KEY_NOT_PRESSED 0xFF

#define KEYPAD_DATA_DIR   IODIR1         
#define KEYPAD_DATA       IOPIN1       
#define KEYPAD_COL_SET    IOSET1         
#define KEYPAD_ROW_SET    IOSET1         
#define KEYPAD_COL_CLR    IOCLR1         
#define KEYPAD_ROW_CLR    IOCLR1         

#define COL_MASK (COL0 | COL1 | COL2 | COL3)
#define ROW_MASK (ROW0 | ROW1 | ROW2 | ROW3)

#define COL0              (1 << 21)            
#define COL1              (1 << 22)
#define COL2              (1 << 23)
#define COL3              (1 << 24)  

#define ROW0              (1 << 17)             
#define ROW1              (1 << 18)            
#define ROW2              (1 << 19)            
#define ROW3              (1 << 20)            

void init_ext_interrupt(void);
unsigned char key_hit(unsigned char **key);
void Ext_ISR(void) __irq;
unsigned char read_key(void);

#endif
