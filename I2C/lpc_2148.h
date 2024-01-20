// Copyright (c) 2007 Rowley Associates Limited.
//
// This file may be distributed under the terms of the License Agreement
// provided with this software.
//
// THIS FILE IS PROVIDED AS IS WITH NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.

#ifndef LPC2148_h
#define LPC2148_h

#define FIO_BASE 0x3FFFC000

#define FIO0DIR (*(volatile unsigned long *)0x3FFFC000)
#define FIO0DIR_OFFSET 0x0

#define FIO0DIR0 (*(volatile unsigned char *)0x3FFFC000)
#define FIO0DIR0_OFFSET 0x0

#define FIO0DIR1 (*(volatile unsigned char *)0x3FFFC001)
#define FIO0DIR1_OFFSET 0x1

#define FIO0DIR2 (*(volatile unsigned char *)0x3FFFC002)
#define FIO0DIR2_OFFSET 0x2

#define FIO0DIR3 (*(volatile unsigned char *)0x3FFFC003)
#define FIO0DIR3_OFFSET 0x3

#define FIO0DIRL (*(volatile unsigned short *)0x3FFFC000)
#define FIO0DIRL_OFFSET 0x0

#define FIO0DIRH (*(volatile unsigned short *)0x3FFFC002)
#define FIO0DIRH_OFFSET 0x2

#define FIO0MASK (*(volatile unsigned long *)0x3FFFC010)
#define FIO0MASK_OFFSET 0x10

#define FIO0MASK0 (*(volatile unsigned char *)0x3FFFC010)
#define FIO0MASK0_OFFSET 0x10

#define FIO0MASK1 (*(volatile unsigned char *)0x3FFFC011)
#define FIO0MASK1_OFFSET 0x11

#define FIO0MASK2 (*(volatile unsigned char *)0x3FFFC012)
#define FIO0MASK2_OFFSET 0x12

#define FIO0MASK3 (*(volatile unsigned char *)0x3FFFC013)
#define FIO0MASK3_OFFSET 0x13

#define FIO0MASKL (*(volatile unsigned short *)0x3FFFC010)
#define FIO0MASKL_OFFSET 0x10

#define FIO0MASKH (*(volatile unsigned short *)0x3FFFC012)
#define FIO0MASKH_OFFSET 0x12

#define FIO0PIN (*(volatile unsigned long *)0x3FFFC014)
#define FIO0PIN_OFFSET 0x14

#define FIO0PIN0 (*(volatile unsigned char *)0x3FFFC014)
#define FIO0PIN0_OFFSET 0x14

#define FIO0PIN1 (*(volatile unsigned char *)0x3FFFC015)
#define FIO0PIN1_OFFSET 0x15

#define FIO0PIN2 (*(volatile unsigned char *)0x3FFFC016)
#define FIO0PIN2_OFFSET 0x16

#define FIO0PIN3 (*(volatile unsigned char *)0x3FFFC017)
#define FIO0PIN3_OFFSET 0x17

#define FIO0PINL (*(volatile unsigned short *)0x3FFFC014)
#define FIO0PINL_OFFSET 0x14

#define FIO0PINH (*(volatile unsigned short *)0x3FFFC016)
#define FIO0PINH_OFFSET 0x16

#define FIO0SET (*(volatile unsigned long *)0x3FFFC018)
#define FIO0SET_OFFSET 0x18

#define FIO0SET0 (*(volatile unsigned char *)0x3FFFC018)
#define FIO0SET0_OFFSET 0x18

#define FIO0SET1 (*(volatile unsigned char *)0x3FFFC019)
#define FIO0SET1_OFFSET 0x19

#define FIO0SET2 (*(volatile unsigned char *)0x3FFFC01A)
#define FIO0SET2_OFFSET 0x1A

#define FIO0SET3 (*(volatile unsigned char *)0x3FFFC01B)
#define FIO0SET3_OFFSET 0x1B

#define FIO0SETL (*(volatile unsigned short *)0x3FFFC018)
#define FIO0SETL_OFFSET 0x18

#define FIO0SETH (*(volatile unsigned short *)0x3FFFC01A)
#define FIO0SETH_OFFSET 0x1A

#define FIO0CLR (*(volatile unsigned long *)0x3FFFC01C)
#define FIO0CLR_OFFSET 0x1C

#define FIO0CLR0 (*(volatile unsigned char *)0x3FFFC01C)
#define FIO0CLR0_OFFSET 0x1C

#define FIO0CLR1 (*(volatile unsigned char *)0x3FFFC01D)
#define FIO0CLR1_OFFSET 0x1D

#define FIO0CLR2 (*(volatile unsigned char *)0x3FFFC01E)
#define FIO0CLR2_OFFSET 0x1E

#define FIO0CLR3 (*(volatile unsigned char *)0x3FFFC01F)
#define FIO0CLR3_OFFSET 0x1F

#define FIO0CLRL (*(volatile unsigned short *)0x3FFFC01C)
#define FIO0CLRL_OFFSET 0x1C

#define FIO0CLRH (*(volatile unsigned short *)0x3FFFC01E)
#define FIO0CLRH_OFFSET 0x1E

#define FIO1DIR (*(volatile unsigned long *)0x3FFFC020)
#define FIO1DIR_OFFSET 0x20

#define FIO1DIR0 (*(volatile unsigned char *)0x3FFFC020)
#define FIO1DIR0_OFFSET 0x20

#define FIO1DIR1 (*(volatile unsigned char *)0x3FFFC021)
#define FIO1DIR1_OFFSET 0x21

#define FIO1DIR2 (*(volatile unsigned char *)0x3FFFC022)
#define FIO1DIR2_OFFSET 0x22

#define FIO1DIR3 (*(volatile unsigned char *)0x3FFFC023)
#define FIO1DIR3_OFFSET 0x23

#define FIO1DIRL (*(volatile unsigned short *)0x3FFFC020)
#define FIO1DIRL_OFFSET 0x20

#define FIO1DIRH (*(volatile unsigned short *)0x3FFFC022)
#define FIO1DIRH_OFFSET 0x22

#define FIO1MASK (*(volatile unsigned long *)0x3FFFC030)
#define FIO1MASK_OFFSET 0x30

#define FIO1MASK0 (*(volatile unsigned char *)0x3FFFC030)
#define FIO1MASK0_OFFSET 0x30

#define FIO1MASK1 (*(volatile unsigned char *)0x3FFFC031)
#define FIO1MASK1_OFFSET 0x31

#define FIO1MASK2 (*(volatile unsigned char *)0x3FFFC032)
#define FIO1MASK2_OFFSET 0x32

#define FIO1MASK3 (*(volatile unsigned char *)0x3FFFC033)
#define FIO1MASK3_OFFSET 0x33

#define FIO1MASKL (*(volatile unsigned short *)0x3FFFC030)
#define FIO1MASKL_OFFSET 0x30

#define FIO1MASKH (*(volatile unsigned short *)0x3FFFC032)
#define FIO1MASKH_OFFSET 0x32

#define FIO1PIN (*(volatile unsigned long *)0x3FFFC034)
#define FIO1PIN_OFFSET 0x34

#define FIO1PIN0 (*(volatile unsigned char *)0x3FFFC034)
#define FIO1PIN0_OFFSET 0x34

#define FIO1PIN1 (*(volatile unsigned char *)0x3FFFC035)
#define FIO1PIN1_OFFSET 0x35

#define FIO1PIN2 (*(volatile unsigned char *)0x3FFFC036)
#define FIO1PIN2_OFFSET 0x36

#define FIO1PIN3 (*(volatile unsigned char *)0x3FFFC037)
#define FIO1PIN3_OFFSET 0x37

#define FIO1PINL (*(volatile unsigned short *)0x3FFFC034)
#define FIO1PINL_OFFSET 0x34

#define FIO1PINH (*(volatile unsigned short *)0x3FFFC036)
#define FIO1PINH_OFFSET 0x36

#define FIO1SET (*(volatile unsigned long *)0x3FFFC038)
#define FIO1SET_OFFSET 0x38

#define FIO1SET0 (*(volatile unsigned char *)0x3FFFC038)
#define FIO1SET0_OFFSET 0x38

#define FIO1SET1 (*(volatile unsigned char *)0x3FFFC039)
#define FIO1SET1_OFFSET 0x39

#define FIO1SET2 (*(volatile unsigned char *)0x3FFFC03A)
#define FIO1SET2_OFFSET 0x3A

#define FIO1SET3 (*(volatile unsigned char *)0x3FFFC03B)
#define FIO1SET3_OFFSET 0x3B

#define FIO1SETL (*(volatile unsigned short *)0x3FFFC038)
#define FIO1SETL_OFFSET 0x38

#define FIO1SETH (*(volatile unsigned short *)0x3FFFC03A)
#define FIO1SETH_OFFSET 0x3A

#define FIO1CLR (*(volatile unsigned long *)0x3FFFC03C)
#define FIO1CLR_OFFSET 0x3C

#define FIO1CLR0 (*(volatile unsigned char *)0x3FFFC03C)
#define FIO1CLR0_OFFSET 0x3C

#define FIO1CLR1 (*(volatile unsigned char *)0x3FFFC03D)
#define FIO1CLR1_OFFSET 0x3D

#define FIO1CLR2 (*(volatile unsigned char *)0x3FFFC03E)
#define FIO1CLR2_OFFSET 0x3E

#define FIO1CLR3 (*(volatile unsigned char *)0x3FFFC03F)
#define FIO1CLR3_OFFSET 0x3F

#define FIO1CLRL (*(volatile unsigned short *)0x3FFFC03C)
#define FIO1CLRL_OFFSET 0x3C

#define FIO1CLRH (*(volatile unsigned short *)0x3FFFC03E)
#define FIO1CLRH_OFFSET 0x3E

#define WDT_BASE 0xE0000000

#define WDMOD (*(volatile unsigned long *)0xE0000000)
#define WDMOD_OFFSET 0x0
#define WDMOD_WDEN_MASK 0x1
#define WDMOD_WDEN 0x1
#define WDMOD_WDEN_BIT 0
#define WDMOD_WDRESET_MASK 0x2
#define WDMOD_WDRESET 0x2
#define WDMOD_WDRESET_BIT 1
#define WDMOD_WDTOF_MASK 0x4
#define WDMOD_WDTOF 0x4
#define WDMOD_WDTOF_BIT 2
#define WDMOD_WDINT_MASK 0x8
#define WDMOD_WDINT 0x8
#define WDMOD_WDINT_BIT 3

#define WDTC (*(volatile unsigned long *)0xE0000004)
#define WDTC_OFFSET 0x4

#define WDFEED (*(volatile unsigned long *)0xE0000008)
#define WDFEED_OFFSET 0x8

#define WDTV (*(volatile unsigned long *)0xE000000C)
#define WDTV_OFFSET 0xC

#define TIMER0_BASE 0xE0004000

#define T0IR (*(volatile unsigned char *)0xE0004000)
#define T0IR_OFFSET 0x0
#define T0IR_MR0_MASK 0x1
#define T0IR_MR0 0x1
#define T0IR_MR0_BIT 0
#define T0IR_MR1_MASK 0x2
#define T0IR_MR1 0x2
#define T0IR_MR1_BIT 1
#define T0IR_MR2_MASK 0x4
#define T0IR_MR2 0x4
#define T0IR_MR2_BIT 2
#define T0IR_MR3_MASK 0x8
#define T0IR_MR3 0x8
#define T0IR_MR3_BIT 3
#define T0IR_CR0_MASK 0x10
#define T0IR_CR0 0x10
#define T0IR_CR0_BIT 4
#define T0IR_CR1_MASK 0x20
#define T0IR_CR1 0x20
#define T0IR_CR1_BIT 5
#define T0IR_CR2_MASK 0x40
#define T0IR_CR2 0x40
#define T0IR_CR2_BIT 6
#define T0IR_CR3_MASK 0x80
#define T0IR_CR3 0x80
#define T0IR_CR3_BIT 7

#define T0TCR (*(volatile unsigned char *)0xE0004004)
#define T0TCR_OFFSET 0x4
#define T0TCR_Counter_Enable_MASK 0x1
#define T0TCR_Counter_Enable 0x1
#define T0TCR_Counter_Enable_BIT 0
#define T0TCR_Counter_Reset_MASK 0x2
#define T0TCR_Counter_Reset 0x2
#define T0TCR_Counter_Reset_BIT 1

#define T0TC (*(volatile unsigned long *)0xE0004008)
#define T0TC_OFFSET 0x8

#define T0PR (*(volatile unsigned long *)0xE000400C)
#define T0PR_OFFSET 0xC

#define T0PC (*(volatile unsigned long *)0xE0004010)
#define T0PC_OFFSET 0x10

#define T0MCR (*(volatile unsigned short *)0xE0004014)
#define T0MCR_OFFSET 0x14
#define T0MCR_MR0I_MASK 0x1
#define T0MCR_MR0I 0x1
#define T0MCR_MR0I_BIT 0
#define T0MCR_MR0R_MASK 0x2
#define T0MCR_MR0R 0x2
#define T0MCR_MR0R_BIT 1
#define T0MCR_MR0S_MASK 0x4
#define T0MCR_MR0S 0x4
#define T0MCR_MR0S_BIT 2
#define T0MCR_MR1I_MASK 0x8
#define T0MCR_MR1I 0x8
#define T0MCR_MR1I_BIT 3
#define T0MCR_MR1R_MASK 0x10
#define T0MCR_MR1R 0x10
#define T0MCR_MR1R_BIT 4
#define T0MCR_MR1S_MASK 0x20
#define T0MCR_MR1S 0x20
#define T0MCR_MR1S_BIT 5
#define T0MCR_MR2I_MASK 0x40
#define T0MCR_MR2I 0x40
#define T0MCR_MR2I_BIT 6
#define T0MCR_MR2R_MASK 0x80
#define T0MCR_MR2R 0x80
#define T0MCR_MR2R_BIT 7
#define T0MCR_MR2S_MASK 0x100
#define T0MCR_MR2S 0x100
#define T0MCR_MR2S_BIT 8
#define T0MCR_MR3I_MASK 0x200
#define T0MCR_MR3I 0x200
#define T0MCR_MR3I_BIT 9
#define T0MCR_MR3R_MASK 0x400
#define T0MCR_MR3R 0x400
#define T0MCR_MR3R_BIT 10
#define T0MCR_MR3S_MASK 0x800
#define T0MCR_MR3S 0x800
#define T0MCR_MR3S_BIT 11

#define T0MR0 (*(volatile unsigned long *)0xE0004018)
#define T0MR0_OFFSET 0x18

#define T0MR1 (*(volatile unsigned long *)0xE000401C)
#define T0MR1_OFFSET 0x1C

#define T0MR2 (*(volatile unsigned long *)0xE0004020)
#define T0MR2_OFFSET 0x20

#define T0MR3 (*(volatile unsigned long *)0xE0004024)
#define T0MR3_OFFSET 0x24

#define T0CCR (*(volatile unsigned short *)0xE0004028)
#define T0CCR_OFFSET 0x28
#define T0CCR_CAP0RE_MASK 0x1
#define T0CCR_CAP0RE 0x1
#define T0CCR_CAP0RE_BIT 0
#define T0CCR_CAP0FE_MASK 0x2
#define T0CCR_CAP0FE 0x2
#define T0CCR_CAP0FE_BIT 1
#define T0CCR_CAP0I_MASK 0x4
#define T0CCR_CAP0I 0x4
#define T0CCR_CAP0I_BIT 2
#define T0CCR_CAP1RE_MASK 0x8
#define T0CCR_CAP1RE 0x8
#define T0CCR_CAP1RE_BIT 3
#define T0CCR_CAP1FE_MASK 0x10
#define T0CCR_CAP1FE 0x10
#define T0CCR_CAP1FE_BIT 4
#define T0CCR_CAP1I_MASK 0x20
#define T0CCR_CAP1I 0x20
#define T0CCR_CAP1I_BIT 5
#define T0CCR_CAP2RE_MASK 0x40
#define T0CCR_CAP2RE 0x40
#define T0CCR_CAP2RE_BIT 6
#define T0CCR_CAP2FE_MASK 0x80
#define T0CCR_CAP2FE 0x80
#define T0CCR_CAP2FE_BIT 7
#define T0CCR_CAP2I_MASK 0x100
#define T0CCR_CAP2I 0x100
#define T0CCR_CAP2I_BIT 8
#define T0CCR_CAP3RE_MASK 0x200
#define T0CCR_CAP3RE 0x200
#define T0CCR_CAP3RE_BIT 9
#define T0CCR_CAP3FE_MASK 0x400
#define T0CCR_CAP3FE 0x400
#define T0CCR_CAP3FE_BIT 10
#define T0CCR_CAP3FI_MASK 0x800
#define T0CCR_CAP3FI 0x800
#define T0CCR_CAP3FI_BIT 11

#define T0CR0 (*(volatile unsigned long *)0xE000402C)
#define T0CR0_OFFSET 0x2C

#define T0CR1 (*(volatile unsigned long *)0xE0004030)
#define T0CR1_OFFSET 0x30

#define T0CR2 (*(volatile unsigned long *)0xE0004034)
#define T0CR2_OFFSET 0x34

#define T0CR3 (*(volatile unsigned long *)0xE0004038)
#define T0CR3_OFFSET 0x38

#define T0EMR (*(volatile unsigned short *)0xE000403C)
#define T0EMR_OFFSET 0x3C
#define T0EMR_EM0_MASK 0x1
#define T0EMR_EM0 0x1
#define T0EMR_EM0_BIT 0
#define T0EMR_EM1_MASK 0x2
#define T0EMR_EM1 0x2
#define T0EMR_EM1_BIT 1
#define T0EMR_EM2_MASK 0x4
#define T0EMR_EM2 0x4
#define T0EMR_EM2_BIT 2
#define T0EMR_EM3_MASK 0x8
#define T0EMR_EM3 0x8
#define T0EMR_EM3_BIT 3
#define T0EMR_EMC0_MASK 0x30
#define T0EMR_EMC0_BIT 4
#define T0EMR_EMC1_MASK 0xC0
#define T0EMR_EMC1_BIT 6
#define T0EMR_EMC2_MASK 0x300
#define T0EMR_EMC2_BIT 8
#define T0EMR_EMC3_MASK 0xC00
#define T0EMR_EMC3_BIT 10

#define T0CTCR (*(volatile unsigned long *)0xE0004070)
#define T0CTCR_OFFSET 0x70
#define T0CTCR_Counter_Timer_Mode_MASK 0x3
#define T0CTCR_Counter_Timer_Mode_BIT 0
#define T0CTCR_Count_Input_Select_MASK 0xC
#define T0CTCR_Count_Input_Select_BIT 2

#define TIMER1_BASE 0xE0008000

#define T1IR (*(volatile unsigned char *)0xE0008000)
#define T1IR_OFFSET 0x0
#define T1IR_MR0_MASK 0x1
#define T1IR_MR0 0x1
#define T1IR_MR0_BIT 0
#define T1IR_MR1_MASK 0x2
#define T1IR_MR1 0x2
#define T1IR_MR1_BIT 1
#define T1IR_MR2_MASK 0x4
#define T1IR_MR2 0x4
#define T1IR_MR2_BIT 2
#define T1IR_MR3_MASK 0x8
#define T1IR_MR3 0x8
#define T1IR_MR3_BIT 3
#define T1IR_CR0_MASK 0x10
#define T1IR_CR0 0x10
#define T1IR_CR0_BIT 4
#define T1IR_CR1_MASK 0x20
#define T1IR_CR1 0x20
#define T1IR_CR1_BIT 5
#define T1IR_CR2_MASK 0x40
#define T1IR_CR2 0x40
#define T1IR_CR2_BIT 6
#define T1IR_CR3_MASK 0x80
#define T1IR_CR3 0x80
#define T1IR_CR3_BIT 7

#define T1TCR (*(volatile unsigned char *)0xE0008004)
#define T1TCR_OFFSET 0x4
#define T1TCR_Counter_Enable_MASK 0x1
#define T1TCR_Counter_Enable 0x1
#define T1TCR_Counter_Enable_BIT 0
#define T1TCR_Counter_Reset_MASK 0x2
#define T1TCR_Counter_Reset 0x2
#define T1TCR_Counter_Reset_BIT 1

#define T1TC (*(volatile unsigned long *)0xE0008008)
#define T1TC_OFFSET 0x8

#define T1PR (*(volatile unsigned long *)0xE000800C)
#define T1PR_OFFSET 0xC

#define T1PC (*(volatile unsigned long *)0xE0008010)
#define T1PC_OFFSET 0x10

#define T1MCR (*(volatile unsigned short *)0xE0008014)
#define T1MCR_OFFSET 0x14
#define T1MCR_MR0I_MASK 0x1
#define T1MCR_MR0I 0x1
#define T1MCR_MR0I_BIT 0
#define T1MCR_MR0R_MASK 0x2
#define T1MCR_MR0R 0x2
#define T1MCR_MR0R_BIT 1
#define T1MCR_MR0S_MASK 0x4
#define T1MCR_MR0S 0x4
#define T1MCR_MR0S_BIT 2
#define T1MCR_MR1I_MASK 0x8
#define T1MCR_MR1I 0x8
#define T1MCR_MR1I_BIT 3
#define T1MCR_MR1R_MASK 0x10
#define T1MCR_MR1R 0x10
#define T1MCR_MR1R_BIT 4
#define T1MCR_MR1S_MASK 0x20
#define T1MCR_MR1S 0x20
#define T1MCR_MR1S_BIT 5
#define T1MCR_MR2I_MASK 0x40
#define T1MCR_MR2I 0x40
#define T1MCR_MR2I_BIT 6
#define T1MCR_MR2R_MASK 0x80
#define T1MCR_MR2R 0x80
#define T1MCR_MR2R_BIT 7
#define T1MCR_MR2S_MASK 0x100
#define T1MCR_MR2S 0x100
#define T1MCR_MR2S_BIT 8
#define T1MCR_MR3I_MASK 0x200
#define T1MCR_MR3I 0x200
#define T1MCR_MR3I_BIT 9
#define T1MCR_MR3R_MASK 0x400
#define T1MCR_MR3R 0x400
#define T1MCR_MR3R_BIT 10
#define T1MCR_MR3S_MASK 0x800
#define T1MCR_MR3S 0x800
#define T1MCR_MR3S_BIT 11

#define T1MR0 (*(volatile unsigned long *)0xE0008018)
#define T1MR0_OFFSET 0x18

#define T1MR1 (*(volatile unsigned long *)0xE000801C)
#define T1MR1_OFFSET 0x1C

#define T1MR2 (*(volatile unsigned long *)0xE0008020)
#define T1MR2_OFFSET 0x20

#define T1MR3 (*(volatile unsigned long *)0xE0008024)
#define T1MR3_OFFSET 0x24

#define T1CCR (*(volatile unsigned short *)0xE0008028)
#define T1CCR_OFFSET 0x28
#define T1CCR_CAP0RE_MASK 0x1
#define T1CCR_CAP0RE 0x1
#define T1CCR_CAP0RE_BIT 0
#define T1CCR_CAP0FE_MASK 0x2
#define T1CCR_CAP0FE 0x2
#define T1CCR_CAP0FE_BIT 1
#define T1CCR_CAP0I_MASK 0x4
#define T1CCR_CAP0I 0x4
#define T1CCR_CAP0I_BIT 2
#define T1CCR_CAP1RE_MASK 0x8
#define T1CCR_CAP1RE 0x8
#define T1CCR_CAP1RE_BIT 3
#define T1CCR_CAP1FE_MASK 0x10
#define T1CCR_CAP1FE 0x10
#define T1CCR_CAP1FE_BIT 4
#define T1CCR_CAP1I_MASK 0x20
#define T1CCR_CAP1I 0x20
#define T1CCR_CAP1I_BIT 5
#define T1CCR_CAP2RE_MASK 0x40
#define T1CCR_CAP2RE 0x40
#define T1CCR_CAP2RE_BIT 6
#define T1CCR_CAP2FE_MASK 0x80
#define T1CCR_CAP2FE 0x80
#define T1CCR_CAP2FE_BIT 7
#define T1CCR_CAP2I_MASK 0x100
#define T1CCR_CAP2I 0x100
#define T1CCR_CAP2I_BIT 8
#define T1CCR_CAP3RE_MASK 0x200
#define T1CCR_CAP3RE 0x200
#define T1CCR_CAP3RE_BIT 9
#define T1CCR_CAP3FE_MASK 0x400
#define T1CCR_CAP3FE 0x400
#define T1CCR_CAP3FE_BIT 10
#define T1CCR_CAP3FI_MASK 0x800
#define T1CCR_CAP3FI 0x800
#define T1CCR_CAP3FI_BIT 11

#define T1CR0 (*(volatile unsigned long *)0xE000802C)
#define T1CR0_OFFSET 0x2C

#define T1CR1 (*(volatile unsigned long *)0xE0008030)
#define T1CR1_OFFSET 0x30

#define T1CR2 (*(volatile unsigned long *)0xE0008034)
#define T1CR2_OFFSET 0x34

#define T1CR3 (*(volatile unsigned long *)0xE0008038)
#define T1CR3_OFFSET 0x38

#define T1EMR (*(volatile unsigned short *)0xE000803C)
#define T1EMR_OFFSET 0x3C
#define T1EMR_EM0_MASK 0x1
#define T1EMR_EM0 0x1
#define T1EMR_EM0_BIT 0
#define T1EMR_EM1_MASK 0x2
#define T1EMR_EM1 0x2
#define T1EMR_EM1_BIT 1
#define T1EMR_EM2_MASK 0x4
#define T1EMR_EM2 0x4
#define T1EMR_EM2_BIT 2
#define T1EMR_EM3_MASK 0x8
#define T1EMR_EM3 0x8
#define T1EMR_EM3_BIT 3
#define T1EMR_EMC0_MASK 0x30
#define T1EMR_EMC0_BIT 4
#define T1EMR_EMC1_MASK 0xC0
#define T1EMR_EMC1_BIT 6
#define T1EMR_EMC2_MASK 0x300
#define T1EMR_EMC2_BIT 8
#define T1EMR_EMC3_MASK 0xC00
#define T1EMR_EMC3_BIT 10

#define T1CTCR (*(volatile unsigned long *)0xE0008070)
#define T1CTCR_OFFSET 0x70
#define T1CTCR_Counter_Timer_Mode_MASK 0x3
#define T1CTCR_Counter_Timer_Mode_BIT 0
#define T1CTCR_Count_Input_Select_MASK 0xC
#define T1CTCR_Count_Input_Select_BIT 2

#define UART0_BASE 0xE000C000

#define U0RBR (*(volatile unsigned char *)0xE000C000)
#define U0RBR_OFFSET 0x0

#define U0THR (*(volatile unsigned char *)0xE000C000)
#define U0THR_OFFSET 0x0

#define U0DLL (*(volatile unsigned char *)0xE000C000)
#define U0DLL_OFFSET 0x0

#define U0DLM (*(volatile unsigned char *)0xE000C004)
#define U0DLM_OFFSET 0x4

#define U0IER (*(volatile unsigned long *)0xE000C004)
#define U0IER_OFFSET 0x4
#define U0IER_RBR_Interrupt_Enable_MASK 0x1
#define U0IER_RBR_Interrupt_Enable 0x1
#define U0IER_RBR_Interrupt_Enable_BIT 0
#define U0IER_THRE_Interrupt_Enable_MASK 0x2
#define U0IER_THRE_Interrupt_Enable 0x2
#define U0IER_THRE_Interrupt_Enable_BIT 1
#define U0IER_Rx_Line_Status_Interrupt_Enable_MASK 0x4
#define U0IER_Rx_Line_Status_Interrupt_Enable 0x4
#define U0IER_Rx_Line_Status_Interrupt_Enable_BIT 2
#define U0IER_ABTOIntEn_MASK 0x100
#define U0IER_ABTOIntEn 0x100
#define U0IER_ABTOIntEn_BIT 8
#define U0IER_ABEOIntEn_MASK 0x200
#define U0IER_ABEOIntEn 0x200
#define U0IER_ABEOIntEn_BIT 9

#define U0IIR (*(volatile unsigned long *)0xE000C008)
#define U0IIR_OFFSET 0x8
#define U0IIR_Interrupt_Pending_MASK 0x1
#define U0IIR_Interrupt_Pending 0x1
#define U0IIR_Interrupt_Pending_BIT 0
#define U0IIR_Interrupt_Identification_MASK 0xE
#define U0IIR_Interrupt_Identification_BIT 1
#define U0IIR_FIFO_Enable_MASK 0xC0
#define U0IIR_FIFO_Enable_BIT 6
#define U0IIR_ABTOInt_MASK 0x100
#define U0IIR_ABTOInt 0x100
#define U0IIR_ABTOInt_BIT 8
#define U0IIR_ABEOInt_MASK 0x200
#define U0IIR_ABEOInt 0x200
#define U0IIR_ABEOInt_BIT 9

#define U0FCR (*(volatile unsigned char *)0xE000C008)
#define U0FCR_OFFSET 0x8
#define U0FCR_FIFO_Enable_MASK 0x1
#define U0FCR_FIFO_Enable 0x1
#define U0FCR_FIFO_Enable_BIT 0
#define U0FCR_Rx_FIFO_Reset_MASK 0x2
#define U0FCR_Rx_FIFO_Reset 0x2
#define U0FCR_Rx_FIFO_Reset_BIT 1
#define U0FCR_Tx_FIFO_Reset_MASK 0x4
#define U0FCR_Tx_FIFO_Reset 0x4
#define U0FCR_Tx_FIFO_Reset_BIT 2
#define U0FCR_Rx_Trigger_Level_Select_MASK 0xC0
#define U0FCR_Rx_Trigger_Level_Select_BIT 6

#define U0LCR (*(volatile unsigned char *)0xE000C00C)
#define U0LCR_OFFSET 0xC
#define U0LCR_Word_Length_Select_MASK 0x3
#define U0LCR_Word_Length_Select_BIT 0
#define U0LCR_Stop_Bit_Select_MASK 0x4
#define U0LCR_Stop_Bit_Select 0x4
#define U0LCR_Stop_Bit_Select_BIT 2
#define U0LCR_Parity_Enable_MASK 0x8
#define U0LCR_Parity_Enable 0x8
#define U0LCR_Parity_Enable_BIT 3
#define U0LCR_Parity_Select_MASK 0x30
#define U0LCR_Parity_Select_BIT 4
#define U0LCR_Break_Control_MASK 0x40
#define U0LCR_Break_Control 0x40
#define U0LCR_Break_Control_BIT 6
#define U0LCR_Divisor_Latch_Access_Bit_MASK 0x80
#define U0LCR_Divisor_Latch_Access_Bit 0x80
#define U0LCR_Divisor_Latch_Access_Bit_BIT 7

#define U0LSR (*(volatile unsigned char *)0xE000C014)
#define U0LSR_OFFSET 0x14
#define U0LSR_RDR_MASK 0x1
#define U0LSR_RDR 0x1
#define U0LSR_RDR_BIT 0
#define U0LSR_OE_MASK 0x2
#define U0LSR_OE 0x2
#define U0LSR_OE_BIT 1
#define U0LSR_PE_MASK 0x4
#define U0LSR_PE 0x4
#define U0LSR_PE_BIT 2
#define U0LSR_FE_MASK 0x8
#define U0LSR_FE 0x8
#define U0LSR_FE_BIT 3
#define U0LSR_BI_MASK 0x10
#define U0LSR_BI 0x10
#define U0LSR_BI_BIT 4
#define U0LSR_THRE_MASK 0x20
#define U0LSR_THRE 0x20
#define U0LSR_THRE_BIT 5
#define U0LSR_TEMT_MASK 0x40
#define U0LSR_TEMT 0x40
#define U0LSR_TEMT_BIT 6
#define U0LSR_RXFE_MASK 0x80
#define U0LSR_RXFE 0x80
#define U0LSR_RXFE_BIT 7

#define U0SCR (*(volatile unsigned char *)0xE000C01C)
#define U0SCR_OFFSET 0x1C

#define U0ACR (*(volatile unsigned long *)0xE000C020)
#define U0ACR_OFFSET 0x20
#define U0ACR_Start_MASK 0x1
#define U0ACR_Start 0x1
#define U0ACR_Start_BIT 0
#define U0ACR_Mode_MASK 0x2
#define U0ACR_Mode 0x2
#define U0ACR_Mode_BIT 1
#define U0ACR_AutoRestart_MASK 0x4
#define U0ACR_AutoRestart 0x4
#define U0ACR_AutoRestart_BIT 2
#define U0ACR_ABEOIntClr_MASK 0x100
#define U0ACR_ABEOIntClr 0x100
#define U0ACR_ABEOIntClr_BIT 8
#define U0ACR_ABTOIntClr_MASK 0x200
#define U0ACR_ABTOIntClr 0x200
#define U0ACR_ABTOIntClr_BIT 9

#define U0FDR (*(volatile unsigned long *)0xE000C028)
#define U0FDR_OFFSET 0x28
#define U0FDR_DIVADDVAL_MASK 0xF
#define U0FDR_DIVADDVAL_BIT 0
#define U0FDR_MULVAL_MASK 0xF0
#define U0FDR_MULVAL_BIT 4

#define U0TER (*(volatile unsigned char *)0xE000C030)
#define U0TER_OFFSET 0x30
#define U0TER_TXEN_MASK 0x80
#define U0TER_TXEN 0x80
#define U0TER_TXEN_BIT 7

#define UART1_BASE 0xE0010000

#define U1RBR (*(volatile unsigned char *)0xE0010000)
#define U1RBR_OFFSET 0x0

#define U1THR (*(volatile unsigned char *)0xE0010000)
#define U1THR_OFFSET 0x0

#define U1DLL (*(volatile unsigned char *)0xE0010000)
#define U1DLL_OFFSET 0x0

#define U1DLM (*(volatile unsigned char *)0xE0010004)
#define U1DLM_OFFSET 0x4

#define U1IER (*(volatile unsigned long *)0xE0010004)
#define U1IER_OFFSET 0x4
#define U1IER_RBR_Interrupt_Enable_MASK 0x1
#define U1IER_RBR_Interrupt_Enable 0x1
#define U1IER_RBR_Interrupt_Enable_BIT 0
#define U1IER_THRE_Interrupt_Enable_MASK 0x2
#define U1IER_THRE_Interrupt_Enable 0x2
#define U1IER_THRE_Interrupt_Enable_BIT 1
#define U1IER_Rx_Line_Status_Interrupt_Enable_MASK 0x4
#define U1IER_Rx_Line_Status_Interrupt_Enable 0x4
#define U1IER_Rx_Line_Status_Interrupt_Enable_BIT 2
#define U1IER_Modem_Status_Interrupt_Enable_MASK 0x8
#define U1IER_Modem_Status_Interrupt_Enable 0x8
#define U1IER_Modem_Status_Interrupt_Enable_BIT 3
#define U1IER_CTS_Interrupt_Enable_MASK 0x80
#define U1IER_CTS_Interrupt_Enable 0x80
#define U1IER_CTS_Interrupt_Enable_BIT 7
#define U1IER_ABTOIntEn_MASK 0x100
#define U1IER_ABTOIntEn 0x100
#define U1IER_ABTOIntEn_BIT 8
#define U1IER_ABEOIntEn_MASK 0x200
#define U1IER_ABEOIntEn 0x200
#define U1IER_ABEOIntEn_BIT 9

#define U1IIR (*(volatile unsigned long *)0xE0010008)
#define U1IIR_OFFSET 0x8
#define U1IIR_Interrupt_Pending_MASK 0x1
#define U1IIR_Interrupt_Pending 0x1
#define U1IIR_Interrupt_Pending_BIT 0
#define U1IIR_Interrupt_Identification_MASK 0xE
#define U1IIR_Interrupt_Identification_BIT 1
#define U1IIR_FIFO_Enable_MASK 0xC0
#define U1IIR_FIFO_Enable_BIT 6
#define U1IIR_ABTOInt_MASK 0x100
#define U1IIR_ABTOInt 0x100
#define U1IIR_ABTOInt_BIT 8
#define U1IIR_ABEOInt_MASK 0x200
#define U1IIR_ABEOInt 0x200
#define U1IIR_ABEOInt_BIT 9

#define U1FCR (*(volatile unsigned char *)0xE0010008)
#define U1FCR_OFFSET 0x8
#define U1FCR_FIFO_Enable_MASK 0x1
#define U1FCR_FIFO_Enable 0x1
#define U1FCR_FIFO_Enable_BIT 0
#define U1FCR_Rx_FIFO_Reset_MASK 0x2
#define U1FCR_Rx_FIFO_Reset 0x2
#define U1FCR_Rx_FIFO_Reset_BIT 1
#define U1FCR_Tx_FIFO_Reset_MASK 0x4
#define U1FCR_Tx_FIFO_Reset 0x4
#define U1FCR_Tx_FIFO_Reset_BIT 2
#define U1FCR_Rx_Trigger_Level_Select_MASK 0xC0
#define U1FCR_Rx_Trigger_Level_Select_BIT 6

#define U1LCR (*(volatile unsigned char *)0xE001000C)
#define U1LCR_OFFSET 0xC
#define U1LCR_Word_Length_Select_MASK 0x3
#define U1LCR_Word_Length_Select_BIT 0
#define U1LCR_Stop_Bit_Select_MASK 0x4
#define U1LCR_Stop_Bit_Select 0x4
#define U1LCR_Stop_Bit_Select_BIT 2
#define U1LCR_Parity_Enable_MASK 0x8
#define U1LCR_Parity_Enable 0x8
#define U1LCR_Parity_Enable_BIT 3
#define U1LCR_Parity_Select_MASK 0x30
#define U1LCR_Parity_Select_BIT 4
#define U1LCR_Break_Control_MASK 0x40
#define U1LCR_Break_Control 0x40
#define U1LCR_Break_Control_BIT 6
#define U1LCR_Divisor_Latch_Access_Bit_MASK 0x80
#define U1LCR_Divisor_Latch_Access_Bit 0x80
#define U1LCR_Divisor_Latch_Access_Bit_BIT 7

#define U1MCR (*(volatile unsigned char *)0xE0010010)
#define U1MCR_OFFSET 0x10
#define U1MCR_DTR_Control_MASK 0x1
#define U1MCR_DTR_Control 0x1
#define U1MCR_DTR_Control_BIT 0
#define U1MCR_RTS_Control_MASK 0x2
#define U1MCR_RTS_Control 0x2
#define U1MCR_RTS_Control_BIT 1
#define U1MCR_Loopback_Mode_Select_MASK 0x10
#define U1MCR_Loopback_Mode_Select 0x10
#define U1MCR_Loopback_Mode_Select_BIT 4
#define U1MCR_RTSen_MASK 0x40
#define U1MCR_RTSen 0x40
#define U1MCR_RTSen_BIT 6
#define U1MCR_CTSen_MASK 0x80
#define U1MCR_CTSen 0x80
#define U1MCR_CTSen_BIT 7

#define U1LSR (*(volatile unsigned char *)0xE0010014)
#define U1LSR_OFFSET 0x14
#define U1LSR_RDR_MASK 0x1
#define U1LSR_RDR 0x1
#define U1LSR_RDR_BIT 0
#define U1LSR_OE_MASK 0x2
#define U1LSR_OE 0x2
#define U1LSR_OE_BIT 1
#define U1LSR_PE_MASK 0x4
#define U1LSR_PE 0x4
#define U1LSR_PE_BIT 2
#define U1LSR_FE_MASK 0x8
#define U1LSR_FE 0x8
#define U1LSR_FE_BIT 3
#define U1LSR_BI_MASK 0x10
#define U1LSR_BI 0x10
#define U1LSR_BI_BIT 4
#define U1LSR_THRE_MASK 0x20
#define U1LSR_THRE 0x20
#define U1LSR_THRE_BIT 5
#define U1LSR_TEMT_MASK 0x40
#define U1LSR_TEMT 0x40
#define U1LSR_TEMT_BIT 6
#define U1LSR_RXFE_MASK 0x80
#define U1LSR_RXFE 0x80
#define U1LSR_RXFE_BIT 7

#define U1MSR (*(volatile unsigned char *)0xE0010018)
#define U1MSR_OFFSET 0x18
#define U1MSR_Delta_CTS_MASK 0x1
#define U1MSR_Delta_CTS 0x1
#define U1MSR_Delta_CTS_BIT 0
#define U1MSR_Delta_DSR_MASK 0x2
#define U1MSR_Delta_DSR 0x2
#define U1MSR_Delta_DSR_BIT 1
#define U1MSR_Trailing_Edge_RI_MASK 0x4
#define U1MSR_Trailing_Edge_RI 0x4
#define U1MSR_Trailing_Edge_RI_BIT 2
#define U1MSR_Delta_DCD_MASK 0x8
#define U1MSR_Delta_DCD 0x8
#define U1MSR_Delta_DCD_BIT 3
#define U1MSR_CTS_MASK 0x10
#define U1MSR_CTS 0x10
#define U1MSR_CTS_BIT 4
#define U1MSR_DSR_MASK 0x20
#define U1MSR_DSR 0x20
#define U1MSR_DSR_BIT 5
#define U1MSR_RI_MASK 0x40
#define U1MSR_RI 0x40
#define U1MSR_RI_BIT 6
#define U1MSR_DCD_MASK 0x80
#define U1MSR_DCD 0x80
#define U1MSR_DCD_BIT 7

#define U1SCR (*(volatile unsigned char *)0xE001001C)
#define U1SCR_OFFSET 0x1C

#define U1ACR (*(volatile unsigned long *)0xE001C020)
#define U1ACR_OFFSET 0xC020
#define U1ACR_Start_MASK 0x1
#define U1ACR_Start 0x1
#define U1ACR_Start_BIT 0
#define U1ACR_Mode_MASK 0x2
#define U1ACR_Mode 0x2
#define U1ACR_Mode_BIT 1
#define U1ACR_AutoRestart_MASK 0x4
#define U1ACR_AutoRestart 0x4
#define U1ACR_AutoRestart_BIT 2
#define U1ACR_ABEOIntClr_MASK 0x100
#define U1ACR_ABEOIntClr 0x100
#define U1ACR_ABEOIntClr_BIT 8
#define U1ACR_ABTOIntClr_MASK 0x200
#define U1ACR_ABTOIntClr 0x200
#define U1ACR_ABTOIntClr_BIT 9

#define U1FDR (*(volatile unsigned long *)0xE001C028)
#define U1FDR_OFFSET 0xC028
#define U1FDR_DIVADDVAL_MASK 0xF
#define U1FDR_DIVADDVAL_BIT 0
#define U1FDR_MULVAL_MASK 0xF0
#define U1FDR_MULVAL_BIT 4

#define U1TER (*(volatile unsigned char *)0xE0010030)
#define U1TER_OFFSET 0x30
#define U1TER_TXEN_MASK 0x80
#define U1TER_TXEN 0x80
#define U1TER_TXEN_BIT 7

#define PWM_BASE 0xE0014000

#define PWMIR (*(volatile unsigned long *)0xE0014000)
#define PWMIR_OFFSET 0x0
#define PWMIR_PWMMR0_Interrupt_MASK 0x1
#define PWMIR_PWMMR0_Interrupt 0x1
#define PWMIR_PWMMR0_Interrupt_BIT 0
#define PWMIR_PWMMR1_Interrupt_MASK 0x2
#define PWMIR_PWMMR1_Interrupt 0x2
#define PWMIR_PWMMR1_Interrupt_BIT 1
#define PWMIR_PWMMR2_Interrupt_MASK 0x4
#define PWMIR_PWMMR2_Interrupt 0x4
#define PWMIR_PWMMR2_Interrupt_BIT 2
#define PWMIR_PWMMR3_Interrupt_MASK 0x8
#define PWMIR_PWMMR3_Interrupt 0x8
#define PWMIR_PWMMR3_Interrupt_BIT 3
#define PWMIR_PWMMR4_Interrupt_MASK 0x100
#define PWMIR_PWMMR4_Interrupt 0x100
#define PWMIR_PWMMR4_Interrupt_BIT 8
#define PWMIR_PWMMR5_Interrupt_MASK 0x200
#define PWMIR_PWMMR5_Interrupt 0x200
#define PWMIR_PWMMR5_Interrupt_BIT 9
#define PWMIR_PWMMR6_Interrupt_MASK 0x400
#define PWMIR_PWMMR6_Interrupt 0x400
#define PWMIR_PWMMR6_Interrupt_BIT 10

#define PWMTCR (*(volatile unsigned long *)0xE0014004)
#define PWMTCR_OFFSET 0x4
#define PWMTCR_Counter_Enable_MASK 0x1
#define PWMTCR_Counter_Enable 0x1
#define PWMTCR_Counter_Enable_BIT 0
#define PWMTCR_Counter_Reset_MASK 0x2
#define PWMTCR_Counter_Reset 0x2
#define PWMTCR_Counter_Reset_BIT 1
#define PWMTCR_PWM_Enable_MASK 0x8
#define PWMTCR_PWM_Enable 0x8
#define PWMTCR_PWM_Enable_BIT 3

#define PWMTC (*(volatile unsigned long *)0xE0014008)
#define PWMTC_OFFSET 0x8

#define PWMPR (*(volatile unsigned long *)0xE001400C)
#define PWMPR_OFFSET 0xC

#define PWMPC (*(volatile unsigned long *)0xE0014010)
#define PWMPC_OFFSET 0x10

#define PWMMCR (*(volatile unsigned long *)0xE0014014)
#define PWMMCR_OFFSET 0x14
#define PWMMCR_PWMMR0I_MASK 0x1
#define PWMMCR_PWMMR0I 0x1
#define PWMMCR_PWMMR0I_BIT 0
#define PWMMCR_PWMMR0R_MASK 0x2
#define PWMMCR_PWMMR0R 0x2
#define PWMMCR_PWMMR0R_BIT 1
#define PWMMCR_PWMMR0S_MASK 0x4
#define PWMMCR_PWMMR0S 0x4
#define PWMMCR_PWMMR0S_BIT 2
#define PWMMCR_PWMMR1I_MASK 0x8
#define PWMMCR_PWMMR1I 0x8
#define PWMMCR_PWMMR1I_BIT 3
#define PWMMCR_PWMMR1R_MASK 0x10
#define PWMMCR_PWMMR1R 0x10
#define PWMMCR_PWMMR1R_BIT 4
#define PWMMCR_PWMMR1S_MASK 0x20
#define PWMMCR_PWMMR1S 0x20
#define PWMMCR_PWMMR1S_BIT 5
#define PWMMCR_PWMMR2I_MASK 0x40
#define PWMMCR_PWMMR2I 0x40
#define PWMMCR_PWMMR2I_BIT 6
#define PWMMCR_PWMMR2R_MASK 0x80
#define PWMMCR_PWMMR2R 0x80
#define PWMMCR_PWMMR2R_BIT 7
#define PWMMCR_PWMMR2S_MASK 0x100
#define PWMMCR_PWMMR2S 0x100
#define PWMMCR_PWMMR2S_BIT 8
#define PWMMCR_PWMMR3I_MASK 0x200
#define PWMMCR_PWMMR3I 0x200
#define PWMMCR_PWMMR3I_BIT 9
#define PWMMCR_PWMMR3R_MASK 0x400
#define PWMMCR_PWMMR3R 0x400
#define PWMMCR_PWMMR3R_BIT 10
#define PWMMCR_PWMMR3S_MASK 0x800
#define PWMMCR_PWMMR3S 0x800
#define PWMMCR_PWMMR3S_BIT 11
#define PWMMCR_PWMMR4I_MASK 0x1000
#define PWMMCR_PWMMR4I 0x1000
#define PWMMCR_PWMMR4I_BIT 12
#define PWMMCR_PWMMR4R_MASK 0x2000
#define PWMMCR_PWMMR4R 0x2000
#define PWMMCR_PWMMR4R_BIT 13
#define PWMMCR_PWMMR4S_MASK 0x4000
#define PWMMCR_PWMMR4S 0x4000
#define PWMMCR_PWMMR4S_BIT 14
#define PWMMCR_PWMMR5I_MASK 0x8000
#define PWMMCR_PWMMR5I 0x8000
#define PWMMCR_PWMMR5I_BIT 15
#define PWMMCR_PWMMR5R_MASK 0x10000
#define PWMMCR_PWMMR5R 0x10000
#define PWMMCR_PWMMR5R_BIT 16
#define PWMMCR_PWMMR5S_MASK 0x20000
#define PWMMCR_PWMMR5S 0x20000
#define PWMMCR_PWMMR5S_BIT 17
#define PWMMCR_PWMMR6I_MASK 0x40000
#define PWMMCR_PWMMR6I 0x40000
#define PWMMCR_PWMMR6I_BIT 18
#define PWMMCR_PWMMR6R_MASK 0x80000
#define PWMMCR_PWMMR6R 0x80000
#define PWMMCR_PWMMR6R_BIT 19
#define PWMMCR_PWMMR6S_MASK 0x100000
#define PWMMCR_PWMMR6S 0x100000
#define PWMMCR_PWMMR6S_BIT 20

#define PWMMR0 (*(volatile unsigned long *)0xE0014018)
#define PWMMR0_OFFSET 0x18

#define PWMMR1 (*(volatile unsigned long *)0xE001401C)
#define PWMMR1_OFFSET 0x1C

#define PWMMR2 (*(volatile unsigned long *)0xE0014020)
#define PWMMR2_OFFSET 0x20

#define PWMMR3 (*(volatile unsigned long *)0xE0014024)
#define PWMMR3_OFFSET 0x24

#define PWMMR4 (*(volatile unsigned long *)0xE0014040)
#define PWMMR4_OFFSET 0x40

#define PWMMR5 (*(volatile unsigned long *)0xE0014044)
#define PWMMR5_OFFSET 0x44

#define PWMMR6 (*(volatile unsigned long *)0xE0014048)
#define PWMMR6_OFFSET 0x48

#define PWMPCR (*(volatile unsigned long *)0xE001404C)
#define PWMPCR_OFFSET 0x4C
#define PWMPCR_PWMSEL2_MASK 0x4
#define PWMPCR_PWMSEL2 0x4
#define PWMPCR_PWMSEL2_BIT 2
#define PWMPCR_PWMSEL3_MASK 0x8
#define PWMPCR_PWMSEL3 0x8
#define PWMPCR_PWMSEL3_BIT 3
#define PWMPCR_PWMSEL4_MASK 0x10
#define PWMPCR_PWMSEL4 0x10
#define PWMPCR_PWMSEL4_BIT 4
#define PWMPCR_PWMSEL5_MASK 0x20
#define PWMPCR_PWMSEL5 0x20
#define PWMPCR_PWMSEL5_BIT 5
#define PWMPCR_PWMSEL6_MASK 0x40
#define PWMPCR_PWMSEL6 0x40
#define PWMPCR_PWMSEL6_BIT 6
#define PWMPCR_PWMENA1_MASK 0x200
#define PWMPCR_PWMENA1 0x200
#define PWMPCR_PWMENA1_BIT 9
#define PWMPCR_PWMENA2_MASK 0x400
#define PWMPCR_PWMENA2 0x400
#define PWMPCR_PWMENA2_BIT 10
#define PWMPCR_PWMENA3_MASK 0x800
#define PWMPCR_PWMENA3 0x800
#define PWMPCR_PWMENA3_BIT 11
#define PWMPCR_PWMENA4_MASK 0x1000
#define PWMPCR_PWMENA4 0x1000
#define PWMPCR_PWMENA4_BIT 12
#define PWMPCR_PWMENA5_MASK 0x2000
#define PWMPCR_PWMENA5 0x2000
#define PWMPCR_PWMENA5_BIT 13
#define PWMPCR_PWMENA6_MASK 0x4000
#define PWMPCR_PWMENA6 0x4000
#define PWMPCR_PWMENA6_BIT 14

#define PWMLER (*(volatile unsigned long *)0xE0014050)
#define PWMLER_OFFSET 0x50
#define PWMLER_Enable_PWM_Match_0_Latch_MASK 0x1
#define PWMLER_Enable_PWM_Match_0_Latch 0x1
#define PWMLER_Enable_PWM_Match_0_Latch_BIT 0
#define PWMLER_Enable_PWM_Match_1_Latch_MASK 0x2
#define PWMLER_Enable_PWM_Match_1_Latch 0x2
#define PWMLER_Enable_PWM_Match_1_Latch_BIT 1
#define PWMLER_Enable_PWM_Match_2_Latch_MASK 0x4
#define PWMLER_Enable_PWM_Match_2_Latch 0x4
#define PWMLER_Enable_PWM_Match_2_Latch_BIT 2
#define PWMLER_Enable_PWM_Match_3_Latch_MASK 0x8
#define PWMLER_Enable_PWM_Match_3_Latch 0x8
#define PWMLER_Enable_PWM_Match_3_Latch_BIT 3
#define PWMLER_Enable_PWM_Match_4_Latch_MASK 0x10
#define PWMLER_Enable_PWM_Match_4_Latch 0x10
#define PWMLER_Enable_PWM_Match_4_Latch_BIT 4
#define PWMLER_Enable_PWM_Match_5_Latch_MASK 0x20
#define PWMLER_Enable_PWM_Match_5_Latch 0x20
#define PWMLER_Enable_PWM_Match_5_Latch_BIT 5
#define PWMLER_Enable_PWM_Match_6_Latch_MASK 0x40
#define PWMLER_Enable_PWM_Match_6_Latch 0x40
#define PWMLER_Enable_PWM_Match_6_Latch_BIT 6

#define I2C0_BASE 0xE001C000

#define I2C0CONSET (*(volatile unsigned char *)0xE001C000)
#define I2C0CONSET_OFFSET 0x0
#define I2C0CONSET_AA_MASK 0x4
#define I2C0CONSET_AA 0x4
#define I2C0CONSET_AA_BIT 2
#define I2C0CONSET_SI_MASK 0x8
#define I2C0CONSET_SI 0x8
#define I2C0CONSET_SI_BIT 3
#define I2C0CONSET_STO_MASK 0x10
#define I2C0CONSET_STO 0x10
#define I2C0CONSET_STO_BIT 4
#define I2C0CONSET_STA_MASK 0x20
#define I2C0CONSET_STA 0x20
#define I2C0CONSET_STA_BIT 5
#define I2C0CONSET_I2EN_MASK 0x40
#define I2C0CONSET_I2EN 0x40
#define I2C0CONSET_I2EN_BIT 6

#define I2C0STAT (*(volatile unsigned char *)0xE001C004)
#define I2C0STAT_OFFSET 0x4
#define I2C0STAT_Status_MASK 0x7C
#define I2C0STAT_Status_BIT 2

#define I2C0DAT (*(volatile unsigned char *)0xE001C008)
#define I2C0DAT_OFFSET 0x8

#define I2C0ADR (*(volatile unsigned char *)0xE001C00C)
#define I2C0ADR_OFFSET 0xC
#define I2C0ADR_GC_MASK 0x1
#define I2C0ADR_GC 0x1
#define I2C0ADR_GC_BIT 0
#define I2C0ADR_Address_MASK 0x7E
#define I2C0ADR_Address_BIT 1

#define I2C0SCLH (*(volatile unsigned short *)0xE001C010)
#define I2C0SCLH_OFFSET 0x10

#define I2C0SCLL (*(volatile unsigned short *)0xE001C014)
#define I2C0SCLL_OFFSET 0x14

#define I2C0CONCLR (*(volatile unsigned char *)0xE001C018)
#define I2C0CONCLR_OFFSET 0x18
#define I2C0CONCLR_AAC_MASK 0x4
#define I2C0CONCLR_AAC 0x4
#define I2C0CONCLR_AAC_BIT 2
#define I2C0CONCLR_SIC_MASK 0x8
#define I2C0CONCLR_SIC 0x8
#define I2C0CONCLR_SIC_BIT 3
#define I2C0CONCLR_STAC_MASK 0x20
#define I2C0CONCLR_STAC 0x20
#define I2C0CONCLR_STAC_BIT 5
#define I2C0CONCLR_I2ENC_MASK 0x40
#define I2C0CONCLR_I2ENC 0x40
#define I2C0CONCLR_I2ENC_BIT 6

#define SPI0_BASE 0xE0020000

#define S0SPCR (*(volatile unsigned short *)0xE0020000)
#define S0SPCR_OFFSET 0x0
#define S0SPCR_CPHA_MASK 0x8
#define S0SPCR_CPHA 0x8
#define S0SPCR_CPHA_BIT 3
#define S0SPCR_CPOL_MASK 0x10
#define S0SPCR_CPOL 0x10
#define S0SPCR_CPOL_BIT 4
#define S0SPCR_MSTR_MASK 0x20
#define S0SPCR_MSTR 0x20
#define S0SPCR_MSTR_BIT 5
#define S0SPCR_LSBF_MASK 0x40
#define S0SPCR_LSBF 0x40
#define S0SPCR_LSBF_BIT 6
#define S0SPCR_SPIE_MASK 0x80
#define S0SPCR_SPIE 0x80
#define S0SPCR_SPIE_BIT 7

#define S0SPSR (*(volatile unsigned char *)0xE0020004)
#define S0SPSR_OFFSET 0x4
#define S0SPSR_ABRT_MASK 0x8
#define S0SPSR_ABRT 0x8
#define S0SPSR_ABRT_BIT 3
#define S0SPSR_MODF_MASK 0x10
#define S0SPSR_MODF 0x10
#define S0SPSR_MODF_BIT 4
#define S0SPSR_ROVR_MASK 0x20
#define S0SPSR_ROVR 0x20
#define S0SPSR_ROVR_BIT 5
#define S0SPSR_WCOL_MASK 0x40
#define S0SPSR_WCOL 0x40
#define S0SPSR_WCOL_BIT 6
#define S0SPSR_SPIF_MASK 0x80
#define S0SPSR_SPIF 0x80
#define S0SPSR_SPIF_BIT 7

#define S0SPDR (*(volatile unsigned short *)0xE0020008)
#define S0SPDR_OFFSET 0x8

#define S0SPCCR (*(volatile unsigned char *)0xE002000C)
#define S0SPCCR_OFFSET 0xC

#define S0SPINT (*(volatile unsigned char *)0xE002001C)
#define S0SPINT_OFFSET 0x1C

#define RTC_BASE 0xE0024000

#define ILR (*(volatile unsigned long *)0xE0024000)
#define ILR_OFFSET 0x0
#define ILR_RTCCIF_MASK 0x1
#define ILR_RTCCIF 0x1
#define ILR_RTCCIF_BIT 0
#define ILR_RTCALF_MASK 0x2
#define ILR_RTCALF 0x2
#define ILR_RTCALF_BIT 1

#define CTC (*(volatile unsigned long *)0xE0024004)
#define CTC_OFFSET 0x4
#define CTC_Clock_Tick_Counter_MASK 0xFFFE
#define CTC_Clock_Tick_Counter_BIT 1

#define CCR (*(volatile unsigned long *)0xE0024008)
#define CCR_OFFSET 0x8
#define CCR_CLKEN_MASK 0x1
#define CCR_CLKEN 0x1
#define CCR_CLKEN_BIT 0
#define CCR_CTCRST_MASK 0x2
#define CCR_CTCRST 0x2
#define CCR_CTCRST_BIT 1
#define CCR_CTTEST_MASK 0xC
#define CCR_CTTEST_BIT 2
#define CCR_CLKSRC_MASK 0x10
#define CCR_CLKSRC 0x10
#define CCR_CLKSRC_BIT 4

#define CIIR (*(volatile unsigned long *)0xE002400C)
#define CIIR_OFFSET 0xC
#define CIIR_IMSEC_MASK 0x1
#define CIIR_IMSEC 0x1
#define CIIR_IMSEC_BIT 0
#define CIIR_IMMIN_MASK 0x2
#define CIIR_IMMIN 0x2
#define CIIR_IMMIN_BIT 1
#define CIIR_IMHOUR_MASK 0x4
#define CIIR_IMHOUR 0x4
#define CIIR_IMHOUR_BIT 2
#define CIIR_IMDOM_MASK 0x8
#define CIIR_IMDOM 0x8
#define CIIR_IMDOM_BIT 3
#define CIIR_IMDOW_MASK 0x10
#define CIIR_IMDOW 0x10
#define CIIR_IMDOW_BIT 4
#define CIIR_IMDOY_MASK 0x20
#define CIIR_IMDOY 0x20
#define CIIR_IMDOY_BIT 5
#define CIIR_IMMON_MASK 0x40
#define CIIR_IMMON 0x40
#define CIIR_IMMON_BIT 6
#define CIIR_IMYEAR_MASK 0x80
#define CIIR_IMYEAR 0x80
#define CIIR_IMYEAR_BIT 7

#define AMR (*(volatile unsigned long *)0xE0024010)
#define AMR_OFFSET 0x10
#define AMR_AMRSEC_MASK 0x1
#define AMR_AMRSEC 0x1
#define AMR_AMRSEC_BIT 0
#define AMR_AMRMIN_MASK 0x2
#define AMR_AMRMIN 0x2
#define AMR_AMRMIN_BIT 1
#define AMR_AMRHOUR_MASK 0x4
#define AMR_AMRHOUR 0x4
#define AMR_AMRHOUR_BIT 2
#define AMR_AMRDOM_MASK 0x8
#define AMR_AMRDOM 0x8
#define AMR_AMRDOM_BIT 3
#define AMR_AMRDOW_MASK 0x10
#define AMR_AMRDOW 0x10
#define AMR_AMRDOW_BIT 4
#define AMR_AMRDOY_MASK 0x20
#define AMR_AMRDOY 0x20
#define AMR_AMRDOY_BIT 5
#define AMR_AMRMON_MASK 0x40
#define AMR_AMRMON 0x40
#define AMR_AMRMON_BIT 6
#define AMR_AMRYEAR_MASK 0x80
#define AMR_AMRYEAR 0x80
#define AMR_AMRYEAR_BIT 7

#define CTIME0 (*(volatile unsigned long *)0xE0024014)
#define CTIME0_OFFSET 0x14
#define CTIME0_Seconds_MASK 0x3F
#define CTIME0_Seconds_BIT 0
#define CTIME0_Minutes_MASK 0x3F00
#define CTIME0_Minutes_BIT 8
#define CTIME0_Hours_MASK 0x1F0000
#define CTIME0_Hours_BIT 16
#define CTIME0_Day_of_Week_MASK 0xF8000000
#define CTIME0_Day_of_Week_BIT 27

#define CTIME1 (*(volatile unsigned long *)0xE0024018)
#define CTIME1_OFFSET 0x18
#define CTIME1_Day_of_Month_MASK 0x1F
#define CTIME1_Day_of_Month_BIT 0
#define CTIME1_Month_MASK 0xF00
#define CTIME1_Month_BIT 8
#define CTIME1_Year_MASK 0xFFF0000
#define CTIME1_Year_BIT 16

#define CTIME2 (*(volatile unsigned long *)0xE002401C)
#define CTIME2_OFFSET 0x1C
#define CTIME2_Day_of_Year_MASK 0xFFF
#define CTIME2_Day_of_Year_BIT 0

#define SEC (*(volatile unsigned long *)0xE0024020)
#define SEC_OFFSET 0x20

#define MIN (*(volatile unsigned long *)0xE0024024)
#define MIN_OFFSET 0x24

#define HOUR (*(volatile unsigned long *)0xE0024028)
#define HOUR_OFFSET 0x28

#define DOM (*(volatile unsigned long *)0xE002402C)
#define DOM_OFFSET 0x2C

#define DOW (*(volatile unsigned long *)0xE0024030)
#define DOW_OFFSET 0x30

#define DOY (*(volatile unsigned long *)0xE0024034)
#define DOY_OFFSET 0x34

#define MONTH (*(volatile unsigned long *)0xE0024038)
#define MONTH_OFFSET 0x38

#define YEAR (*(volatile unsigned long *)0xE002403C)
#define YEAR_OFFSET 0x3C

#define ALSEC (*(volatile unsigned long *)0xE0024060)
#define ALSEC_OFFSET 0x60

#define ALMIN (*(volatile unsigned long *)0xE0024064)
#define ALMIN_OFFSET 0x64

#define ALHOUR (*(volatile unsigned long *)0xE0024068)
#define ALHOUR_OFFSET 0x68

#define ALDOM (*(volatile unsigned long *)0xE002406C)
#define ALDOM_OFFSET 0x6C

#define ALDOW (*(volatile unsigned long *)0xE0024070)
#define ALDOW_OFFSET 0x70

#define ALDOY (*(volatile unsigned long *)0xE0024074)
#define ALDOY_OFFSET 0x74

#define ALMON (*(volatile unsigned long *)0xE0024078)
#define ALMON_OFFSET 0x78

#define ALYEAR (*(volatile unsigned long *)0xE002407C)
#define ALYEAR_OFFSET 0x7C

#define PREINT (*(volatile unsigned long *)0xE0024080)
#define PREINT_OFFSET 0x80

#define PREFRAC (*(volatile unsigned long *)0xE0024084)
#define PREFRAC_OFFSET 0x84

#define GPIO_BASE 0xE0028000

#define IO0PIN (*(volatile unsigned long *)0xE0028000)
#define IO0PIN_OFFSET 0x0

#define IO0SET (*(volatile unsigned long *)0xE0028004)
#define IO0SET_OFFSET 0x4

#define IO0DIR (*(volatile unsigned long *)0xE0028008)
#define IO0DIR_OFFSET 0x8

#define IO0CLR (*(volatile unsigned long *)0xE002800C)
#define IO0CLR_OFFSET 0xC

#define IO1PIN (*(volatile unsigned long *)0xE0028010)
#define IO1PIN_OFFSET 0x10

#define IO1SET (*(volatile unsigned long *)0xE0028014)
#define IO1SET_OFFSET 0x14

#define IO1DIR (*(volatile unsigned long *)0xE0028018)
#define IO1DIR_OFFSET 0x18

#define IO1CLR (*(volatile unsigned long *)0xE002801C)
#define IO1CLR_OFFSET 0x1C

#define PCB_BASE 0xE002C000

#define PINSEL0 (*(volatile unsigned long *)0xE002C000)
#define PINSEL0_OFFSET 0x0

#define PINSEL1 (*(volatile unsigned long *)0xE002C004)
#define PINSEL1_OFFSET 0x4

#define PINSEL2 (*(volatile unsigned long *)0xE002C014)
#define PINSEL2_OFFSET 0x14

#define AD0_BASE 0xE0034000

#define AD0CR (*(volatile unsigned *)0xE0034000)
#define AD0CR_OFFSET 0x0
#define AD0CR_SEL_MASK 0xFF
#define AD0CR_SEL_BIT 0
#define AD0CR_CLKDIV_MASK 0xFF00
#define AD0CR_CLKDIV_BIT 8
#define AD0CR_BURST_MASK 0x10000
#define AD0CR_BURST 0x10000
#define AD0CR_BURST_BIT 16
#define AD0CR_CLKS_MASK 0xE0000
#define AD0CR_CLKS_BIT 17
#define AD0CR_PDN_MASK 0x200000
#define AD0CR_PDN 0x200000
#define AD0CR_PDN_BIT 21
#define AD0CR_START_MASK 0x7000000
#define AD0CR_START_BIT 24
#define AD0CR_EDGE_MASK 0x8000000
#define AD0CR_EDGE 0x8000000
#define AD0CR_EDGE_BIT 27

#define AD0GDR (*(volatile unsigned *)0xE0034004)
#define AD0GDR_OFFSET 0x4
#define AD0GDR_RESULT_MASK 0xFFC0
#define AD0GDR_RESULT_BIT 6
#define AD0GDR_CHN_MASK 0x7000000
#define AD0GDR_CHN_BIT 24
#define AD0GDR_OVERUN_MASK 0x40000000
#define AD0GDR_OVERUN 0x40000000
#define AD0GDR_OVERUN_BIT 30
#define AD0GDR_DONE_MASK 0x80000000
#define AD0GDR_DONE 0x80000000
#define AD0GDR_DONE_BIT 31

#define ADGSR (*(volatile unsigned *)0xE0034008)
#define ADGSR_OFFSET 0x8
#define ADGSR_BURST_MASK 0x10000
#define ADGSR_BURST 0x10000
#define ADGSR_BURST_BIT 16
#define ADGSR_START_MASK 0x7000000
#define ADGSR_START_BIT 24
#define ADGSR_EDGE_MASK 0x8000000
#define ADGSR_EDGE 0x8000000
#define ADGSR_EDGE_BIT 27

#define AD0INTEN (*(volatile unsigned *)0xE003400C)
#define AD0INTEN_OFFSET 0xC
#define AD0INTEN_ADINTEN0_MASK 0x1
#define AD0INTEN_ADINTEN0 0x1
#define AD0INTEN_ADINTEN0_BIT 0
#define AD0INTEN_ADINTEN1_MASK 0x2
#define AD0INTEN_ADINTEN1 0x2
#define AD0INTEN_ADINTEN1_BIT 1
#define AD0INTEN_ADINTEN2_MASK 0x4
#define AD0INTEN_ADINTEN2 0x4
#define AD0INTEN_ADINTEN2_BIT 2
#define AD0INTEN_ADINTEN3_MASK 0x8
#define AD0INTEN_ADINTEN3 0x8
#define AD0INTEN_ADINTEN3_BIT 3
#define AD0INTEN_ADINTEN4_MASK 0x10
#define AD0INTEN_ADINTEN4 0x10
#define AD0INTEN_ADINTEN4_BIT 4
#define AD0INTEN_ADINTEN5_MASK 0x20
#define AD0INTEN_ADINTEN5 0x20
#define AD0INTEN_ADINTEN5_BIT 5
#define AD0INTEN_ADINTEN6_MASK 0x40
#define AD0INTEN_ADINTEN6 0x40
#define AD0INTEN_ADINTEN6_BIT 6
#define AD0INTEN_ADINTEN7_MASK 0x80
#define AD0INTEN_ADINTEN7 0x80
#define AD0INTEN_ADINTEN7_BIT 7
#define AD0INTEN_ADGINTEN_MASK 0x100
#define AD0INTEN_ADGINTEN 0x100
#define AD0INTEN_ADGINTEN_BIT 8

#define AD0DR0 (*(volatile unsigned *)0xE0034010)
#define AD0DR0_OFFSET 0x10
#define AD0DR0_RESULT_MASK 0xFFC0
#define AD0DR0_RESULT_BIT 6
#define AD0DR0_OVERRUN_MASK 0x40000000
#define AD0DR0_OVERRUN 0x40000000
#define AD0DR0_OVERRUN_BIT 30
#define AD0DR0_DONE_MASK 0x80000000
#define AD0DR0_DONE 0x80000000
#define AD0DR0_DONE_BIT 31

#define AD0DR1 (*(volatile unsigned *)0xE0034014)
#define AD0DR1_OFFSET 0x14
#define AD0DR1_RESULT_MASK 0xFFC0
#define AD0DR1_RESULT_BIT 6
#define AD0DR1_OVERRUN_MASK 0x40000000
#define AD0DR1_OVERRUN 0x40000000
#define AD0DR1_OVERRUN_BIT 30
#define AD0DR1_DONE_MASK 0x80000000
#define AD0DR1_DONE 0x80000000
#define AD0DR1_DONE_BIT 31

#define AD0DR2 (*(volatile unsigned *)0xE0034018)
#define AD0DR2_OFFSET 0x18
#define AD0DR2_RESULT_MASK 0xFFC0
#define AD0DR2_RESULT_BIT 6
#define AD0DR2_OVERRUN_MASK 0x40000000
#define AD0DR2_OVERRUN 0x40000000
#define AD0DR2_OVERRUN_BIT 30
#define AD0DR2_DONE_MASK 0x80000000
#define AD0DR2_DONE 0x80000000
#define AD0DR2_DONE_BIT 31

#define AD0DR3 (*(volatile unsigned *)0xE003401C)
#define AD0DR3_OFFSET 0x1C
#define AD0DR3_RESULT_MASK 0xFFC0
#define AD0DR3_RESULT_BIT 6
#define AD0DR3_OVERRUN_MASK 0x40000000
#define AD0DR3_OVERRUN 0x40000000
#define AD0DR3_OVERRUN_BIT 30
#define AD0DR3_DONE_MASK 0x80000000
#define AD0DR3_DONE 0x80000000
#define AD0DR3_DONE_BIT 31

#define AD0DR4 (*(volatile unsigned *)0xE0034020)
#define AD0DR4_OFFSET 0x20
#define AD0DR4_RESULT_MASK 0xFFC0
#define AD0DR4_RESULT_BIT 6
#define AD0DR4_OVERRUN_MASK 0x40000000
#define AD0DR4_OVERRUN 0x40000000
#define AD0DR4_OVERRUN_BIT 30
#define AD0DR4_DONE_MASK 0x80000000
#define AD0DR4_DONE 0x80000000
#define AD0DR4_DONE_BIT 31

#define AD0DR5 (*(volatile unsigned *)0xE0034024)
#define AD0DR5_OFFSET 0x24
#define AD0DR5_RESULT_MASK 0xFFC0
#define AD0DR5_RESULT_BIT 6
#define AD0DR5_OVERRUN_MASK 0x40000000
#define AD0DR5_OVERRUN 0x40000000
#define AD0DR5_OVERRUN_BIT 30
#define AD0DR5_DONE_MASK 0x80000000
#define AD0DR5_DONE 0x80000000
#define AD0DR5_DONE_BIT 31

#define AD0DR6 (*(volatile unsigned *)0xE0034028)
#define AD0DR6_OFFSET 0x28
#define AD0DR6_RESULT_MASK 0xFFC0
#define AD0DR6_RESULT_BIT 6
#define AD0DR6_OVERRUN_MASK 0x40000000
#define AD0DR6_OVERRUN 0x40000000
#define AD0DR6_OVERRUN_BIT 30
#define AD0DR6_DONE_MASK 0x80000000
#define AD0DR6_DONE 0x80000000
#define AD0DR6_DONE_BIT 31

#define AD0DR7 (*(volatile unsigned *)0xE003402C)
#define AD0DR7_OFFSET 0x2C
#define AD0DR7_RESULT_MASK 0xFFC0
#define AD0DR7_RESULT_BIT 6
#define AD0DR7_OVERRUN_MASK 0x40000000
#define AD0DR7_OVERRUN 0x40000000
#define AD0DR7_OVERRUN_BIT 30
#define AD0DR7_DONE_MASK 0x80000000
#define AD0DR7_DONE 0x80000000
#define AD0DR7_DONE_BIT 31

#define AD0STAT (*(volatile unsigned *)0xE0034030)
#define AD0STAT_OFFSET 0x30
#define AD0STAT_DONE0_MASK 0x1
#define AD0STAT_DONE0 0x1
#define AD0STAT_DONE0_BIT 0
#define AD0STAT_DONE1_MASK 0x2
#define AD0STAT_DONE1 0x2
#define AD0STAT_DONE1_BIT 1
#define AD0STAT_DONE2_MASK 0x4
#define AD0STAT_DONE2 0x4
#define AD0STAT_DONE2_BIT 2
#define AD0STAT_DONE3_MASK 0x8
#define AD0STAT_DONE3 0x8
#define AD0STAT_DONE3_BIT 3
#define AD0STAT_DONE4_MASK 0x10
#define AD0STAT_DONE4 0x10
#define AD0STAT_DONE4_BIT 4
#define AD0STAT_DONE5_MASK 0x20
#define AD0STAT_DONE5 0x20
#define AD0STAT_DONE5_BIT 5
#define AD0STAT_DONE6_MASK 0x40
#define AD0STAT_DONE6 0x40
#define AD0STAT_DONE6_BIT 6
#define AD0STAT_DONE7_MASK 0x80
#define AD0STAT_DONE7 0x80
#define AD0STAT_DONE7_BIT 7
#define AD0STAT_OVERRUN0_MASK 0x100
#define AD0STAT_OVERRUN0 0x100
#define AD0STAT_OVERRUN0_BIT 8
#define AD0STAT_OVERRUN1_MASK 0x200
#define AD0STAT_OVERRUN1 0x200
#define AD0STAT_OVERRUN1_BIT 9
#define AD0STAT_OVERRUN2_MASK 0x400
#define AD0STAT_OVERRUN2 0x400
#define AD0STAT_OVERRUN2_BIT 10
#define AD0STAT_OVERRUN3_MASK 0x800
#define AD0STAT_OVERRUN3 0x800
#define AD0STAT_OVERRUN3_BIT 11
#define AD0STAT_OVERRUN4_MASK 0x1000
#define AD0STAT_OVERRUN4 0x1000
#define AD0STAT_OVERRUN4_BIT 12
#define AD0STAT_OVERRUN5_MASK 0x2000
#define AD0STAT_OVERRUN5 0x2000
#define AD0STAT_OVERRUN5_BIT 13
#define AD0STAT_OVERRUN6_MASK 0x4000
#define AD0STAT_OVERRUN6 0x4000
#define AD0STAT_OVERRUN6_BIT 14
#define AD0STAT_OVERRUN7_MASK 0x8000
#define AD0STAT_OVERRUN7 0x8000
#define AD0STAT_OVERRUN7_BIT 15
#define AD0STAT_ADINT_MASK 0x10000
#define AD0STAT_ADINT 0x10000
#define AD0STAT_ADINT_BIT 16

#define I2C1_BASE 0xE005C000

#define I2C1CONSET (*(volatile unsigned char *)0xE005C000)
#define I2C1CONSET_OFFSET 0x0
#define I2C1CONSET_AA_MASK 0x4
#define I2C1CONSET_AA 0x4
#define I2C1CONSET_AA_BIT 2
#define I2C1CONSET_SI_MASK 0x8
#define I2C1CONSET_SI 0x8
#define I2C1CONSET_SI_BIT 3
#define I2C1CONSET_STO_MASK 0x10
#define I2C1CONSET_STO 0x10
#define I2C1CONSET_STO_BIT 4
#define I2C1CONSET_STA_MASK 0x20
#define I2C1CONSET_STA 0x20
#define I2C1CONSET_STA_BIT 5
#define I2C1CONSET_I2EN_MASK 0x40
#define I2C1CONSET_I2EN 0x40
#define I2C1CONSET_I2EN_BIT 6

#define I2C1STAT (*(volatile unsigned char *)0xE005C004)
#define I2C1STAT_OFFSET 0x4
#define I2C1STAT_Status_MASK 0x7C
#define I2C1STAT_Status_BIT 2

#define I2C1DAT (*(volatile unsigned char *)0xE005C008)
#define I2C1DAT_OFFSET 0x8

#define I2C1ADR (*(volatile unsigned char *)0xE005C00C)
#define I2C1ADR_OFFSET 0xC
#define I2C1ADR_GC_MASK 0x1
#define I2C1ADR_GC 0x1
#define I2C1ADR_GC_BIT 0
#define I2C1ADR_Address_MASK 0x7E
#define I2C1ADR_Address_BIT 1

#define I2C1SCLH (*(volatile unsigned short *)0xE005C010)
#define I2C1SCLH_OFFSET 0x10

#define I2C1SCLL (*(volatile unsigned short *)0xE005C014)
#define I2C1SCLL_OFFSET 0x14

#define I2C1CONCLR (*(volatile unsigned char *)0xE005C018)
#define I2C1CONCLR_OFFSET 0x18
#define I2C1CONCLR_AAC_MASK 0x4
#define I2C1CONCLR_AAC 0x4
#define I2C1CONCLR_AAC_BIT 2
#define I2C1CONCLR_SIC_MASK 0x8
#define I2C1CONCLR_SIC 0x8
#define I2C1CONCLR_SIC_BIT 3
#define I2C1CONCLR_STAC_MASK 0x20
#define I2C1CONCLR_STAC 0x20
#define I2C1CONCLR_STAC_BIT 5
#define I2C1CONCLR_I2ENC_MASK 0x40
#define I2C1CONCLR_I2ENC 0x40
#define I2C1CONCLR_I2ENC_BIT 6

#define AD1_BASE 0xE0060000

#define AD1CR (*(volatile unsigned *)0xE0060000)
#define AD1CR_OFFSET 0x0
#define AD1CR_SEL_MASK 0xFF
#define AD1CR_SEL_BIT 0
#define AD1CR_CLKDIV_MASK 0xFF00
#define AD1CR_CLKDIV_BIT 8
#define AD1CR_BURST_MASK 0x10000
#define AD1CR_BURST 0x10000
#define AD1CR_BURST_BIT 16
#define AD1CR_CLKS_MASK 0xE0000
#define AD1CR_CLKS_BIT 17
#define AD1CR_PDN_MASK 0x200000
#define AD1CR_PDN 0x200000
#define AD1CR_PDN_BIT 21
#define AD1CR_START_MASK 0x7000000
#define AD1CR_START_BIT 24
#define AD1CR_EDGE_MASK 0x8000000
#define AD1CR_EDGE 0x8000000
#define AD1CR_EDGE_BIT 27

#define AD1GDR (*(volatile unsigned *)0xE0060004)
#define AD1GDR_OFFSET 0x4
#define AD1GDR_RESULT_MASK 0xFFC0
#define AD1GDR_RESULT_BIT 6
#define AD1GDR_CHN_MASK 0x7000000
#define AD1GDR_CHN_BIT 24
#define AD1GDR_OVERUN_MASK 0x40000000
#define AD1GDR_OVERUN 0x40000000
#define AD1GDR_OVERUN_BIT 30
#define AD1GDR_DONE_MASK 0x80000000
#define AD1GDR_DONE 0x80000000
#define AD1GDR_DONE_BIT 31

#define AD1INTEN (*(volatile unsigned *)0xE006000C)
#define AD1INTEN_OFFSET 0xC
#define AD1INTEN_ADINTEN0_MASK 0x1
#define AD1INTEN_ADINTEN0 0x1
#define AD1INTEN_ADINTEN0_BIT 0
#define AD1INTEN_ADINTEN1_MASK 0x2
#define AD1INTEN_ADINTEN1 0x2
#define AD1INTEN_ADINTEN1_BIT 1
#define AD1INTEN_ADINTEN2_MASK 0x4
#define AD1INTEN_ADINTEN2 0x4
#define AD1INTEN_ADINTEN2_BIT 2
#define AD1INTEN_ADINTEN3_MASK 0x8
#define AD1INTEN_ADINTEN3 0x8
#define AD1INTEN_ADINTEN3_BIT 3
#define AD1INTEN_ADINTEN4_MASK 0x10
#define AD1INTEN_ADINTEN4 0x10
#define AD1INTEN_ADINTEN4_BIT 4
#define AD1INTEN_ADINTEN5_MASK 0x20
#define AD1INTEN_ADINTEN5 0x20
#define AD1INTEN_ADINTEN5_BIT 5
#define AD1INTEN_ADINTEN6_MASK 0x40
#define AD1INTEN_ADINTEN6 0x40
#define AD1INTEN_ADINTEN6_BIT 6
#define AD1INTEN_ADINTEN7_MASK 0x80
#define AD1INTEN_ADINTEN7 0x80
#define AD1INTEN_ADINTEN7_BIT 7
#define AD1INTEN_ADGINTEN_MASK 0x100
#define AD1INTEN_ADGINTEN 0x100
#define AD1INTEN_ADGINTEN_BIT 8

#define AD1DR0 (*(volatile unsigned *)0xE0060010)
#define AD1DR0_OFFSET 0x10
#define AD1DR0_RESULT_MASK 0xFFC0
#define AD1DR0_RESULT_BIT 6
#define AD1DR0_OVERRUN_MASK 0x40000000
#define AD1DR0_OVERRUN 0x40000000
#define AD1DR0_OVERRUN_BIT 30
#define AD1DR0_DONE_MASK 0x80000000
#define AD1DR0_DONE 0x80000000
#define AD1DR0_DONE_BIT 31

#define AD1DR1 (*(volatile unsigned *)0xE0060014)
#define AD1DR1_OFFSET 0x14
#define AD1DR1_RESULT_MASK 0xFFC0
#define AD1DR1_RESULT_BIT 6
#define AD1DR1_OVERRUN_MASK 0x40000000
#define AD1DR1_OVERRUN 0x40000000
#define AD1DR1_OVERRUN_BIT 30
#define AD1DR1_DONE_MASK 0x80000000
#define AD1DR1_DONE 0x80000000
#define AD1DR1_DONE_BIT 31

#define AD1DR2 (*(volatile unsigned *)0xE0060018)
#define AD1DR2_OFFSET 0x18
#define AD1DR2_RESULT_MASK 0xFFC0
#define AD1DR2_RESULT_BIT 6
#define AD1DR2_OVERRUN_MASK 0x40000000
#define AD1DR2_OVERRUN 0x40000000
#define AD1DR2_OVERRUN_BIT 30
#define AD1DR2_DONE_MASK 0x80000000
#define AD1DR2_DONE 0x80000000
#define AD1DR2_DONE_BIT 31

#define AD1DR3 (*(volatile unsigned *)0xE006001C)
#define AD1DR3_OFFSET 0x1C
#define AD1DR3_RESULT_MASK 0xFFC0
#define AD1DR3_RESULT_BIT 6
#define AD1DR3_OVERRUN_MASK 0x40000000
#define AD1DR3_OVERRUN 0x40000000
#define AD1DR3_OVERRUN_BIT 30
#define AD1DR3_DONE_MASK 0x80000000
#define AD1DR3_DONE 0x80000000
#define AD1DR3_DONE_BIT 31

#define AD1DR4 (*(volatile unsigned *)0xE0060020)
#define AD1DR4_OFFSET 0x20
#define AD1DR4_RESULT_MASK 0xFFC0
#define AD1DR4_RESULT_BIT 6
#define AD1DR4_OVERRUN_MASK 0x40000000
#define AD1DR4_OVERRUN 0x40000000
#define AD1DR4_OVERRUN_BIT 30
#define AD1DR4_DONE_MASK 0x80000000
#define AD1DR4_DONE 0x80000000
#define AD1DR4_DONE_BIT 31

#define AD1DR5 (*(volatile unsigned *)0xE0060024)
#define AD1DR5_OFFSET 0x24
#define AD1DR5_RESULT_MASK 0xFFC0
#define AD1DR5_RESULT_BIT 6
#define AD1DR5_OVERRUN_MASK 0x40000000
#define AD1DR5_OVERRUN 0x40000000
#define AD1DR5_OVERRUN_BIT 30
#define AD1DR5_DONE_MASK 0x80000000
#define AD1DR5_DONE 0x80000000
#define AD1DR5_DONE_BIT 31

#define AD1DR6 (*(volatile unsigned *)0xE0060028)
#define AD1DR6_OFFSET 0x28
#define AD1DR6_RESULT_MASK 0xFFC0
#define AD1DR6_RESULT_BIT 6
#define AD1DR6_OVERRUN_MASK 0x40000000
#define AD1DR6_OVERRUN 0x40000000
#define AD1DR6_OVERRUN_BIT 30
#define AD1DR6_DONE_MASK 0x80000000
#define AD1DR6_DONE 0x80000000
#define AD1DR6_DONE_BIT 31

#define AD1DR7 (*(volatile unsigned *)0xE006002C)
#define AD1DR7_OFFSET 0x2C
#define AD1DR7_RESULT_MASK 0xFFC0
#define AD1DR7_RESULT_BIT 6
#define AD1DR7_OVERRUN_MASK 0x40000000
#define AD1DR7_OVERRUN 0x40000000
#define AD1DR7_OVERRUN_BIT 30
#define AD1DR7_DONE_MASK 0x80000000
#define AD1DR7_DONE 0x80000000
#define AD1DR7_DONE_BIT 31

#define AD1STAT (*(volatile unsigned *)0xE0060030)
#define AD1STAT_OFFSET 0x30
#define AD1STAT_DONE0_MASK 0x1
#define AD1STAT_DONE0 0x1
#define AD1STAT_DONE0_BIT 0
#define AD1STAT_DONE1_MASK 0x2
#define AD1STAT_DONE1 0x2
#define AD1STAT_DONE1_BIT 1
#define AD1STAT_DONE2_MASK 0x4
#define AD1STAT_DONE2 0x4
#define AD1STAT_DONE2_BIT 2
#define AD1STAT_DONE3_MASK 0x8
#define AD1STAT_DONE3 0x8
#define AD1STAT_DONE3_BIT 3
#define AD1STAT_DONE4_MASK 0x10
#define AD1STAT_DONE4 0x10
#define AD1STAT_DONE4_BIT 4
#define AD1STAT_DONE5_MASK 0x20
#define AD1STAT_DONE5 0x20
#define AD1STAT_DONE5_BIT 5
#define AD1STAT_DONE6_MASK 0x40
#define AD1STAT_DONE6 0x40
#define AD1STAT_DONE6_BIT 6
#define AD1STAT_DONE7_MASK 0x80
#define AD1STAT_DONE7 0x80
#define AD1STAT_DONE7_BIT 7
#define AD1STAT_OVERRUN0_MASK 0x100
#define AD1STAT_OVERRUN0 0x100
#define AD1STAT_OVERRUN0_BIT 8
#define AD1STAT_OVERRUN1_MASK 0x200
#define AD1STAT_OVERRUN1 0x200
#define AD1STAT_OVERRUN1_BIT 9
#define AD1STAT_OVERRUN2_MASK 0x400
#define AD1STAT_OVERRUN2 0x400
#define AD1STAT_OVERRUN2_BIT 10
#define AD1STAT_OVERRUN3_MASK 0x800
#define AD1STAT_OVERRUN3 0x800
#define AD1STAT_OVERRUN3_BIT 11
#define AD1STAT_OVERRUN4_MASK 0x1000
#define AD1STAT_OVERRUN4 0x1000
#define AD1STAT_OVERRUN4_BIT 12
#define AD1STAT_OVERRUN5_MASK 0x2000
#define AD1STAT_OVERRUN5 0x2000
#define AD1STAT_OVERRUN5_BIT 13
#define AD1STAT_OVERRUN6_MASK 0x4000
#define AD1STAT_OVERRUN6 0x4000
#define AD1STAT_OVERRUN6_BIT 14
#define AD1STAT_OVERRUN7_MASK 0x8000
#define AD1STAT_OVERRUN7 0x8000
#define AD1STAT_OVERRUN7_BIT 15
#define AD1STAT_ADINT_MASK 0x10000
#define AD1STAT_ADINT 0x10000
#define AD1STAT_ADINT_BIT 16

#define SSP_BASE 0xE0068000

#define SSPCR0 (*(volatile unsigned long *)0xE0068000)
#define SSPCR0_OFFSET 0x0
#define SSPCR0_SCR_MASK 0xFF00
#define SSPCR0_SCR_BIT 8
#define SSPCR0_CPHA_MASK 0x80
#define SSPCR0_CPHA 0x80
#define SSPCR0_CPHA_BIT 7
#define SSPCR0_CPOL_MASK 0x40
#define SSPCR0_CPOL 0x40
#define SSPCR0_CPOL_BIT 6
#define SSPCR0_FRF_MASK 0x30
#define SSPCR0_FRF_BIT 4
#define SSPCR0_DSS_MASK 0xF
#define SSPCR0_DSS_BIT 0

#define SSPCR1 (*(volatile unsigned long *)0xE0068004)
#define SSPCR1_OFFSET 0x4
#define SSPCR1_SOD_MASK 0x8
#define SSPCR1_SOD 0x8
#define SSPCR1_SOD_BIT 3
#define SSPCR1_MS_MASK 0x4
#define SSPCR1_MS 0x4
#define SSPCR1_MS_BIT 2
#define SSPCR1_SSE_MASK 0x2
#define SSPCR1_SSE 0x2
#define SSPCR1_SSE_BIT 1
#define SSPCR1_LBE_MASK 0x1
#define SSPCR1_LBE 0x1
#define SSPCR1_LBE_BIT 0

#define SSPDR (*(volatile unsigned long *)0xE0068008)
#define SSPDR_OFFSET 0x8

#define SSPSR (*(volatile unsigned long *)0xE006800C)
#define SSPSR_OFFSET 0xC
#define SSPSR_BSY_MASK 0x10
#define SSPSR_BSY 0x10
#define SSPSR_BSY_BIT 4
#define SSPSR_RFF_MASK 0x8
#define SSPSR_RFF 0x8
#define SSPSR_RFF_BIT 3
#define SSPSR_RNE_MASK 0x4
#define SSPSR_RNE 0x4
#define SSPSR_RNE_BIT 2
#define SSPSR_TNF_MASK 0x2
#define SSPSR_TNF 0x2
#define SSPSR_TNF_BIT 1
#define SSPSR_TFE_MASK 0x1
#define SSPSR_TFE 0x1
#define SSPSR_TFE_BIT 0

#define SSPCPSR (*(volatile unsigned long *)0xE0068010)
#define SSPCPSR_OFFSET 0x10
#define SSPCPSR_CPSDVSR_MASK 0xFF
#define SSPCPSR_CPSDVSR_BIT 0

#define SSPIMSC (*(volatile unsigned long *)0xE0068014)
#define SSPIMSC_OFFSET 0x14
#define SSPIMSC_TXIM_MASK 0x8
#define SSPIMSC_TXIM 0x8
#define SSPIMSC_TXIM_BIT 3
#define SSPIMSC_RXIM_MASK 0x4
#define SSPIMSC_RXIM 0x4
#define SSPIMSC_RXIM_BIT 2
#define SSPIMSC_RTIM_MASK 0x2
#define SSPIMSC_RTIM 0x2
#define SSPIMSC_RTIM_BIT 1
#define SSPIMSC_RORIM_MASK 0x1
#define SSPIMSC_RORIM 0x1
#define SSPIMSC_RORIM_BIT 0

#define SSPRIS (*(volatile unsigned long *)0xE0068018)
#define SSPRIS_OFFSET 0x18
#define SSPRIS_TXRIS_MASK 0x8
#define SSPRIS_TXRIS 0x8
#define SSPRIS_TXRIS_BIT 3
#define SSPRIS_RXRIS_MASK 0x4
#define SSPRIS_RXRIS 0x4
#define SSPRIS_RXRIS_BIT 2
#define SSPRIS_RTRIS_MASK 0x2
#define SSPRIS_RTRIS 0x2
#define SSPRIS_RTRIS_BIT 1
#define SSPRIS_RORRIS_MASK 0x1
#define SSPRIS_RORRIS 0x1
#define SSPRIS_RORRIS_BIT 0

#define SSPMIS (*(volatile unsigned long *)0xE006801C)
#define SSPMIS_OFFSET 0x1C
#define SSPMIS_TXMIS_MASK 0x8
#define SSPMIS_TXMIS 0x8
#define SSPMIS_TXMIS_BIT 3
#define SSPMIS_RXMIS_MASK 0x4
#define SSPMIS_RXMIS 0x4
#define SSPMIS_RXMIS_BIT 2
#define SSPMIS_RTMIS_MASK 0x2
#define SSPMIS_RTMIS 0x2
#define SSPMIS_RTMIS_BIT 1
#define SSPMIS_RORMIS_MASK 0x1
#define SSPMIS_RORMIS 0x1
#define SSPMIS_RORMIS_BIT 0

#define SSPICR (*(volatile unsigned long *)0xE0068020)
#define SSPICR_OFFSET 0x20
#define SSPICR_RTIC_MASK 0x2
#define SSPICR_RTIC 0x2
#define SSPICR_RTIC_BIT 1
#define SSPICR_RORIC_MASK 0x1
#define SSPICR_RORIC 0x1
#define SSPICR_RORIC_BIT 0

#define DAC_BASE 0xE006C000

#define DACR (*(volatile unsigned long *)0xE006C000)
#define DACR_OFFSET 0x0
#define DACR_VALUE_MASK 0xFFC0
#define DACR_VALUE_BIT 6
#define DACR_BIAS_MASK 0x10000
#define DACR_BIAS 0x10000
#define DACR_BIAS_BIT 16

#define USB_BASE 0xE0090000

#define USBDevIntSt (*(volatile unsigned *)0xE0090000)
#define USBDevIntSt_OFFSET 0x0
#define USBDevIntSt_FRAME_MASK 0x1
#define USBDevIntSt_FRAME 0x1
#define USBDevIntSt_FRAME_BIT 0
#define USBDevIntSt_EP_FAST_MASK 0x2
#define USBDevIntSt_EP_FAST 0x2
#define USBDevIntSt_EP_FAST_BIT 1
#define USBDevIntSt_EP_SLOW_MASK 0x4
#define USBDevIntSt_EP_SLOW 0x4
#define USBDevIntSt_EP_SLOW_BIT 2
#define USBDevIntSt_DEV_STAT_MASK 0x8
#define USBDevIntSt_DEV_STAT 0x8
#define USBDevIntSt_DEV_STAT_BIT 3
#define USBDevIntSt_CCEMTY_MASK 0x10
#define USBDevIntSt_CCEMTY 0x10
#define USBDevIntSt_CCEMTY_BIT 4
#define USBDevIntSt_CDFULL_MASK 0x20
#define USBDevIntSt_CDFULL 0x20
#define USBDevIntSt_CDFULL_BIT 5
#define USBDevIntSt_RxENDPKT_MASK 0x40
#define USBDevIntSt_RxENDPKT 0x40
#define USBDevIntSt_RxENDPKT_BIT 6
#define USBDevIntSt_TxENDPKT_MASK 0x80
#define USBDevIntSt_TxENDPKT 0x80
#define USBDevIntSt_TxENDPKT_BIT 7
#define USBDevIntSt_EP_RLZED_MASK 0x100
#define USBDevIntSt_EP_RLZED 0x100
#define USBDevIntSt_EP_RLZED_BIT 8
#define USBDevIntSt_ERR_INT_MASK 0x200
#define USBDevIntSt_ERR_INT 0x200
#define USBDevIntSt_ERR_INT_BIT 9

#define USBDevIntEn (*(volatile unsigned *)0xE0090004)
#define USBDevIntEn_OFFSET 0x4
#define USBDevIntEn_FRAME_MASK 0x1
#define USBDevIntEn_FRAME 0x1
#define USBDevIntEn_FRAME_BIT 0
#define USBDevIntEn_EP_FAST_MASK 0x2
#define USBDevIntEn_EP_FAST 0x2
#define USBDevIntEn_EP_FAST_BIT 1
#define USBDevIntEn_EP_SLOW_MASK 0x4
#define USBDevIntEn_EP_SLOW 0x4
#define USBDevIntEn_EP_SLOW_BIT 2
#define USBDevIntEn_DEV_STAT_MASK 0x8
#define USBDevIntEn_DEV_STAT 0x8
#define USBDevIntEn_DEV_STAT_BIT 3
#define USBDevIntEn_CCEMTY_MASK 0x10
#define USBDevIntEn_CCEMTY 0x10
#define USBDevIntEn_CCEMTY_BIT 4
#define USBDevIntEn_CDFULL_MASK 0x20
#define USBDevIntEn_CDFULL 0x20
#define USBDevIntEn_CDFULL_BIT 5
#define USBDevIntEn_RxENDPKT_MASK 0x40
#define USBDevIntEn_RxENDPKT 0x40
#define USBDevIntEn_RxENDPKT_BIT 6
#define USBDevIntEn_TxENDPKT_MASK 0x80
#define USBDevIntEn_TxENDPKT 0x80
#define USBDevIntEn_TxENDPKT_BIT 7
#define USBDevIntEn_EP_RLZED_MASK 0x100
#define USBDevIntEn_EP_RLZED 0x100
#define USBDevIntEn_EP_RLZED_BIT 8
#define USBDevIntEn_ERR_INT_MASK 0x200
#define USBDevIntEn_ERR_INT 0x200
#define USBDevIntEn_ERR_INT_BIT 9

#define USBDevIntClr (*(volatile unsigned *)0xE0090008)
#define USBDevIntClr_OFFSET 0x8
#define USBDevIntClr_FRAME_MASK 0x1
#define USBDevIntClr_FRAME 0x1
#define USBDevIntClr_FRAME_BIT 0
#define USBDevIntClr_EP_FAST_MASK 0x2
#define USBDevIntClr_EP_FAST 0x2
#define USBDevIntClr_EP_FAST_BIT 1
#define USBDevIntClr_EP_SLOW_MASK 0x4
#define USBDevIntClr_EP_SLOW 0x4
#define USBDevIntClr_EP_SLOW_BIT 2
#define USBDevIntClr_DEV_STAT_MASK 0x8
#define USBDevIntClr_DEV_STAT 0x8
#define USBDevIntClr_DEV_STAT_BIT 3
#define USBDevIntClr_CCEMTY_MASK 0x10
#define USBDevIntClr_CCEMTY 0x10
#define USBDevIntClr_CCEMTY_BIT 4
#define USBDevIntClr_CDFULL_MASK 0x20
#define USBDevIntClr_CDFULL 0x20
#define USBDevIntClr_CDFULL_BIT 5
#define USBDevIntClr_RxENDPKT_MASK 0x40
#define USBDevIntClr_RxENDPKT 0x40
#define USBDevIntClr_RxENDPKT_BIT 6
#define USBDevIntClr_TxENDPKT_MASK 0x80
#define USBDevIntClr_TxENDPKT 0x80
#define USBDevIntClr_TxENDPKT_BIT 7
#define USBDevIntClr_EP_RLZED_MASK 0x100
#define USBDevIntClr_EP_RLZED 0x100
#define USBDevIntClr_EP_RLZED_BIT 8
#define USBDevIntClr_EPR_INT_MASK 0x200
#define USBDevIntClr_EPR_INT 0x200
#define USBDevIntClr_EPR_INT_BIT 9

#define USBDevIntSet (*(volatile unsigned *)0xE009000C)
#define USBDevIntSet_OFFSET 0xC
#define USBDevIntSet_FRAME_MASK 0x1
#define USBDevIntSet_FRAME 0x1
#define USBDevIntSet_FRAME_BIT 0
#define USBDevIntSet_EP_FAST_MASK 0x2
#define USBDevIntSet_EP_FAST 0x2
#define USBDevIntSet_EP_FAST_BIT 1
#define USBDevIntSet_EP_SLOW_MASK 0x4
#define USBDevIntSet_EP_SLOW 0x4
#define USBDevIntSet_EP_SLOW_BIT 2
#define USBDevIntSet_DEV_STAT_MASK 0x8
#define USBDevIntSet_DEV_STAT 0x8
#define USBDevIntSet_DEV_STAT_BIT 3
#define USBDevIntSet_CCEMTY_MASK 0x10
#define USBDevIntSet_CCEMTY 0x10
#define USBDevIntSet_CCEMTY_BIT 4
#define USBDevIntSet_CDFULL_MASK 0x20
#define USBDevIntSet_CDFULL 0x20
#define USBDevIntSet_CDFULL_BIT 5
#define USBDevIntSet_RxENDPKT_MASK 0x40
#define USBDevIntSet_RxENDPKT 0x40
#define USBDevIntSet_RxENDPKT_BIT 6
#define USBDevIntSet_TxENDPKT_MASK 0x80
#define USBDevIntSet_TxENDPKT 0x80
#define USBDevIntSet_TxENDPKT_BIT 7
#define USBDevIntSet_EP_RLZED_MASK 0x100
#define USBDevIntSet_EP_RLZED 0x100
#define USBDevIntSet_EP_RLZED_BIT 8
#define USBDevIntSet_EPR_INT_MASK 0x200
#define USBDevIntSet_EPR_INT 0x200
#define USBDevIntSet_EPR_INT_BIT 9

#define USBCmdCode (*(volatile unsigned *)0xE0090010)
#define USBCmdCode_OFFSET 0x10
#define USBCmdCode_CMD_PHASE_MASK 0xFF00
#define USBCmdCode_CMD_PHASE_BIT 8
#define USBCmdCode_CMD_CODE_MASK 0x7F0000
#define USBCmdCode_CMD_CODE_BIT 16

#define USBCmdData (*(volatile unsigned *)0xE0090014)
#define USBCmdData_OFFSET 0x14
#define USBCmdData_CommandData_MASK 0xFF
#define USBCmdData_CommandData_BIT 0

#define USBRxData (*(volatile unsigned *)0xE0090018)
#define USBRxData_OFFSET 0x18

#define USBTxData (*(volatile unsigned *)0xE009001C)
#define USBTxData_OFFSET 0x1C

#define USBRxPLen (*(volatile unsigned *)0xE0090020)
#define USBRxPLen_OFFSET 0x20
#define USBRxPLen_PKT_LNGTH_MASK 0x3FF
#define USBRxPLen_PKT_LNGTH_BIT 0
#define USBRxPLen_DV_MASK 0x400
#define USBRxPLen_DV 0x400
#define USBRxPLen_DV_BIT 10
#define USBRxPLen_PKT_RDY_MASK 0x800
#define USBRxPLen_PKT_RDY 0x800
#define USBRxPLen_PKT_RDY_BIT 11

#define USBTxPLen (*(volatile unsigned *)0xE0090024)
#define USBTxPLen_OFFSET 0x24
#define USBTxPLen_PKT_LNGTH_MASK 0x3FF
#define USBTxPLen_PKT_LNGTH_BIT 0

#define USBCtrl (*(volatile unsigned *)0xE0090028)
#define USBCtrl_OFFSET 0x28
#define USBCtrl_RD_EN_MASK 0x1
#define USBCtrl_RD_EN 0x1
#define USBCtrl_RD_EN_BIT 0
#define USBCtrl_WR_EN_MASK 0x2
#define USBCtrl_WR_EN 0x2
#define USBCtrl_WR_EN_BIT 1
#define USBCtrl_LOG_ENDPOINT_MASK 0x3C
#define USBCtrl_LOG_ENDPOINT_BIT 2

#define USBDevIntPri (*(volatile unsigned *)0xE009002C)
#define USBDevIntPri_OFFSET 0x2C

#define USBEpIntSt (*(volatile unsigned *)0xE0090030)
#define USBEpIntSt_OFFSET 0x30
#define USBEpIntSt_EP0RX_MASK 0x1
#define USBEpIntSt_EP0RX 0x1
#define USBEpIntSt_EP0RX_BIT 0
#define USBEpIntSt_EP0TX_MASK 0x2
#define USBEpIntSt_EP0TX 0x2
#define USBEpIntSt_EP0TX_BIT 1
#define USBEpIntSt_EP1RX_MASK 0x4
#define USBEpIntSt_EP1RX 0x4
#define USBEpIntSt_EP1RX_BIT 2
#define USBEpIntSt_EP1TX_MASK 0x8
#define USBEpIntSt_EP1TX 0x8
#define USBEpIntSt_EP1TX_BIT 3
#define USBEpIntSt_EP2RX_MASK 0x10
#define USBEpIntSt_EP2RX 0x10
#define USBEpIntSt_EP2RX_BIT 4
#define USBEpIntSt_EP2TX_MASK 0x20
#define USBEpIntSt_EP2TX 0x20
#define USBEpIntSt_EP2TX_BIT 5
#define USBEpIntSt_EP3RX_MASK 0x40
#define USBEpIntSt_EP3RX 0x40
#define USBEpIntSt_EP3RX_BIT 6
#define USBEpIntSt_EP3TX_MASK 0x80
#define USBEpIntSt_EP3TX 0x80
#define USBEpIntSt_EP3TX_BIT 7
#define USBEpIntSt_EP4RX_MASK 0x100
#define USBEpIntSt_EP4RX 0x100
#define USBEpIntSt_EP4RX_BIT 8
#define USBEpIntSt_EP4TX_MASK 0x200
#define USBEpIntSt_EP4TX 0x200
#define USBEpIntSt_EP4TX_BIT 9
#define USBEpIntSt_EP5RX_MASK 0x400
#define USBEpIntSt_EP5RX 0x400
#define USBEpIntSt_EP5RX_BIT 10
#define USBEpIntSt_EP5TX_MASK 0x800
#define USBEpIntSt_EP5TX 0x800
#define USBEpIntSt_EP5TX_BIT 11
#define USBEpIntSt_EP6RX_MASK 0x1000
#define USBEpIntSt_EP6RX 0x1000
#define USBEpIntSt_EP6RX_BIT 12
#define USBEpIntSt_EP6TX_MASK 0x2000
#define USBEpIntSt_EP6TX 0x2000
#define USBEpIntSt_EP6TX_BIT 13
#define USBEpIntSt_EP7RX_MASK 0x4000
#define USBEpIntSt_EP7RX 0x4000
#define USBEpIntSt_EP7RX_BIT 14
#define USBEpIntSt_EP7TX_MASK 0x8000
#define USBEpIntSt_EP7TX 0x8000
#define USBEpIntSt_EP7TX_BIT 15
#define USBEpIntSt_EP8RX_MASK 0x10000
#define USBEpIntSt_EP8RX 0x10000
#define USBEpIntSt_EP8RX_BIT 16
#define USBEpIntSt_EP8TX_MASK 0x20000
#define USBEpIntSt_EP8TX 0x20000
#define USBEpIntSt_EP8TX_BIT 17
#define USBEpIntSt_EP9RX_MASK 0x40000
#define USBEpIntSt_EP9RX 0x40000
#define USBEpIntSt_EP9RX_BIT 18
#define USBEpIntSt_EP9TX_MASK 0x80000
#define USBEpIntSt_EP9TX 0x80000
#define USBEpIntSt_EP9TX_BIT 19
#define USBEpIntSt_EP10RX_MASK 0x100000
#define USBEpIntSt_EP10RX 0x100000
#define USBEpIntSt_EP10RX_BIT 20
#define USBEpIntSt_EP10TX_MASK 0x200000
#define USBEpIntSt_EP10TX 0x200000
#define USBEpIntSt_EP10TX_BIT 21
#define USBEpIntSt_EP11RX_MASK 0x400000
#define USBEpIntSt_EP11RX 0x400000
#define USBEpIntSt_EP11RX_BIT 22
#define USBEpIntSt_EP11TX_MASK 0x800000
#define USBEpIntSt_EP11TX 0x800000
#define USBEpIntSt_EP11TX_BIT 23
#define USBEpIntSt_EP12RX_MASK 0x1000000
#define USBEpIntSt_EP12RX 0x1000000
#define USBEpIntSt_EP12RX_BIT 24
#define USBEpIntSt_EP12TX_MASK 0x2000000
#define USBEpIntSt_EP12TX 0x2000000
#define USBEpIntSt_EP12TX_BIT 25
#define USBEpIntSt_EP13RX_MASK 0x4000000
#define USBEpIntSt_EP13RX 0x4000000
#define USBEpIntSt_EP13RX_BIT 26
#define USBEpIntSt_EP13TX_MASK 0x8000000
#define USBEpIntSt_EP13TX 0x8000000
#define USBEpIntSt_EP13TX_BIT 27
#define USBEpIntSt_EP14RX_MASK 0x10000000
#define USBEpIntSt_EP14RX 0x10000000
#define USBEpIntSt_EP14RX_BIT 28
#define USBEpIntSt_EP14TX_MASK 0x20000000
#define USBEpIntSt_EP14TX 0x20000000
#define USBEpIntSt_EP14TX_BIT 29
#define USBEpIntSt_EP15RX_MASK 0x40000000
#define USBEpIntSt_EP15RX 0x40000000
#define USBEpIntSt_EP15RX_BIT 30
#define USBEpIntSt_EP15TX_MASK 0x80000000
#define USBEpIntSt_EP15TX 0x80000000
#define USBEpIntSt_EP15TX_BIT 31

#define USBEpIntEn (*(volatile unsigned *)0xE0090034)
#define USBEpIntEn_OFFSET 0x34
#define USBEpIntEn_EP0RX_MASK 0x1
#define USBEpIntEn_EP0RX 0x1
#define USBEpIntEn_EP0RX_BIT 0
#define USBEpIntEn_EP0TX_MASK 0x2
#define USBEpIntEn_EP0TX 0x2
#define USBEpIntEn_EP0TX_BIT 1
#define USBEpIntEn_EP1RX_MASK 0x4
#define USBEpIntEn_EP1RX 0x4
#define USBEpIntEn_EP1RX_BIT 2
#define USBEpIntEn_EP1TX_MASK 0x8
#define USBEpIntEn_EP1TX 0x8
#define USBEpIntEn_EP1TX_BIT 3
#define USBEpIntEn_EP2RX_MASK 0x10
#define USBEpIntEn_EP2RX 0x10
#define USBEpIntEn_EP2RX_BIT 4
#define USBEpIntEn_EP2TX_MASK 0x20
#define USBEpIntEn_EP2TX 0x20
#define USBEpIntEn_EP2TX_BIT 5
#define USBEpIntEn_EP3RX_MASK 0x40
#define USBEpIntEn_EP3RX 0x40
#define USBEpIntEn_EP3RX_BIT 6
#define USBEpIntEn_EP3TX_MASK 0x80
#define USBEpIntEn_EP3TX 0x80
#define USBEpIntEn_EP3TX_BIT 7
#define USBEpIntEn_EP4RX_MASK 0x100
#define USBEpIntEn_EP4RX 0x100
#define USBEpIntEn_EP4RX_BIT 8
#define USBEpIntEn_EP4TX_MASK 0x200
#define USBEpIntEn_EP4TX 0x200
#define USBEpIntEn_EP4TX_BIT 9
#define USBEpIntEn_EP5RX_MASK 0x400
#define USBEpIntEn_EP5RX 0x400
#define USBEpIntEn_EP5RX_BIT 10
#define USBEpIntEn_EP5TX_MASK 0x800
#define USBEpIntEn_EP5TX 0x800
#define USBEpIntEn_EP5TX_BIT 11
#define USBEpIntEn_EP6RX_MASK 0x1000
#define USBEpIntEn_EP6RX 0x1000
#define USBEpIntEn_EP6RX_BIT 12
#define USBEpIntEn_EP6TX_MASK 0x2000
#define USBEpIntEn_EP6TX 0x2000
#define USBEpIntEn_EP6TX_BIT 13
#define USBEpIntEn_EP7RX_MASK 0x4000
#define USBEpIntEn_EP7RX 0x4000
#define USBEpIntEn_EP7RX_BIT 14
#define USBEpIntEn_EP7TX_MASK 0x8000
#define USBEpIntEn_EP7TX 0x8000
#define USBEpIntEn_EP7TX_BIT 15
#define USBEpIntEn_EP8RX_MASK 0x10000
#define USBEpIntEn_EP8RX 0x10000
#define USBEpIntEn_EP8RX_BIT 16
#define USBEpIntEn_EP8TX_MASK 0x20000
#define USBEpIntEn_EP8TX 0x20000
#define USBEpIntEn_EP8TX_BIT 17
#define USBEpIntEn_EP9RX_MASK 0x40000
#define USBEpIntEn_EP9RX 0x40000
#define USBEpIntEn_EP9RX_BIT 18
#define USBEpIntEn_EP9TX_MASK 0x80000
#define USBEpIntEn_EP9TX 0x80000
#define USBEpIntEn_EP9TX_BIT 19
#define USBEpIntEn_EP10RX_MASK 0x100000
#define USBEpIntEn_EP10RX 0x100000
#define USBEpIntEn_EP10RX_BIT 20
#define USBEpIntEn_EP10TX_MASK 0x200000
#define USBEpIntEn_EP10TX 0x200000
#define USBEpIntEn_EP10TX_BIT 21
#define USBEpIntEn_EP11RX_MASK 0x400000
#define USBEpIntEn_EP11RX 0x400000
#define USBEpIntEn_EP11RX_BIT 22
#define USBEpIntEn_EP11TX_MASK 0x800000
#define USBEpIntEn_EP11TX 0x800000
#define USBEpIntEn_EP11TX_BIT 23
#define USBEpIntEn_EP12RX_MASK 0x1000000
#define USBEpIntEn_EP12RX 0x1000000
#define USBEpIntEn_EP12RX_BIT 24
#define USBEpIntEn_EP12TX_MASK 0x2000000
#define USBEpIntEn_EP12TX 0x2000000
#define USBEpIntEn_EP12TX_BIT 25
#define USBEpIntEn_EP13RX_MASK 0x4000000
#define USBEpIntEn_EP13RX 0x4000000
#define USBEpIntEn_EP13RX_BIT 26
#define USBEpIntEn_EP13TX_MASK 0x8000000
#define USBEpIntEn_EP13TX 0x8000000
#define USBEpIntEn_EP13TX_BIT 27
#define USBEpIntEn_EP14RX_MASK 0x10000000
#define USBEpIntEn_EP14RX 0x10000000
#define USBEpIntEn_EP14RX_BIT 28
#define USBEpIntEn_EP14TX_MASK 0x20000000
#define USBEpIntEn_EP14TX 0x20000000
#define USBEpIntEn_EP14TX_BIT 29
#define USBEpIntEn_EP15RX_MASK 0x40000000
#define USBEpIntEn_EP15RX 0x40000000
#define USBEpIntEn_EP15RX_BIT 30
#define USBEpIntEn_EP15TX_MASK 0x80000000
#define USBEpIntEn_EP15TX 0x80000000
#define USBEpIntEn_EP15TX_BIT 31

#define USBEpIntClr (*(volatile unsigned *)0xE0090038)
#define USBEpIntClr_OFFSET 0x38
#define USBEpIntClr_EP0RX_MASK 0x1
#define USBEpIntClr_EP0RX 0x1
#define USBEpIntClr_EP0RX_BIT 0
#define USBEpIntClr_EP0TX_MASK 0x2
#define USBEpIntClr_EP0TX 0x2
#define USBEpIntClr_EP0TX_BIT 1
#define USBEpIntClr_EP1RX_MASK 0x4
#define USBEpIntClr_EP1RX 0x4
#define USBEpIntClr_EP1RX_BIT 2
#define USBEpIntClr_EP1TX_MASK 0x8
#define USBEpIntClr_EP1TX 0x8
#define USBEpIntClr_EP1TX_BIT 3
#define USBEpIntClr_EP2RX_MASK 0x10
#define USBEpIntClr_EP2RX 0x10
#define USBEpIntClr_EP2RX_BIT 4
#define USBEpIntClr_EP2TX_MASK 0x20
#define USBEpIntClr_EP2TX 0x20
#define USBEpIntClr_EP2TX_BIT 5
#define USBEpIntClr_EP3RX_MASK 0x40
#define USBEpIntClr_EP3RX 0x40
#define USBEpIntClr_EP3RX_BIT 6
#define USBEpIntClr_EP3TX_MASK 0x80
#define USBEpIntClr_EP3TX 0x80
#define USBEpIntClr_EP3TX_BIT 7
#define USBEpIntClr_EP4RX_MASK 0x100
#define USBEpIntClr_EP4RX 0x100
#define USBEpIntClr_EP4RX_BIT 8
#define USBEpIntClr_EP4TX_MASK 0x200
#define USBEpIntClr_EP4TX 0x200
#define USBEpIntClr_EP4TX_BIT 9
#define USBEpIntClr_EP5RX_MASK 0x400
#define USBEpIntClr_EP5RX 0x400
#define USBEpIntClr_EP5RX_BIT 10
#define USBEpIntClr_EP5TX_MASK 0x800
#define USBEpIntClr_EP5TX 0x800
#define USBEpIntClr_EP5TX_BIT 11
#define USBEpIntClr_EP6RX_MASK 0x1000
#define USBEpIntClr_EP6RX 0x1000
#define USBEpIntClr_EP6RX_BIT 12
#define USBEpIntClr_EP6TX_MASK 0x2000
#define USBEpIntClr_EP6TX 0x2000
#define USBEpIntClr_EP6TX_BIT 13
#define USBEpIntClr_EP7RX_MASK 0x4000
#define USBEpIntClr_EP7RX 0x4000
#define USBEpIntClr_EP7RX_BIT 14
#define USBEpIntClr_EP7TX_MASK 0x8000
#define USBEpIntClr_EP7TX 0x8000
#define USBEpIntClr_EP7TX_BIT 15
#define USBEpIntClr_EP8RX_MASK 0x10000
#define USBEpIntClr_EP8RX 0x10000
#define USBEpIntClr_EP8RX_BIT 16
#define USBEpIntClr_EP8TX_MASK 0x20000
#define USBEpIntClr_EP8TX 0x20000
#define USBEpIntClr_EP8TX_BIT 17
#define USBEpIntClr_EP9RX_MASK 0x40000
#define USBEpIntClr_EP9RX 0x40000
#define USBEpIntClr_EP9RX_BIT 18
#define USBEpIntClr_EP9TX_MASK 0x80000
#define USBEpIntClr_EP9TX 0x80000
#define USBEpIntClr_EP9TX_BIT 19
#define USBEpIntClr_EP10RX_MASK 0x100000
#define USBEpIntClr_EP10RX 0x100000
#define USBEpIntClr_EP10RX_BIT 20
#define USBEpIntClr_EP10TX_MASK 0x200000
#define USBEpIntClr_EP10TX 0x200000
#define USBEpIntClr_EP10TX_BIT 21
#define USBEpIntClr_EP11RX_MASK 0x400000
#define USBEpIntClr_EP11RX 0x400000
#define USBEpIntClr_EP11RX_BIT 22
#define USBEpIntClr_EP11TX_MASK 0x800000
#define USBEpIntClr_EP11TX 0x800000
#define USBEpIntClr_EP11TX_BIT 23
#define USBEpIntClr_EP12RX_MASK 0x1000000
#define USBEpIntClr_EP12RX 0x1000000
#define USBEpIntClr_EP12RX_BIT 24
#define USBEpIntClr_EP12TX_MASK 0x2000000
#define USBEpIntClr_EP12TX 0x2000000
#define USBEpIntClr_EP12TX_BIT 25
#define USBEpIntClr_EP13RX_MASK 0x4000000
#define USBEpIntClr_EP13RX 0x4000000
#define USBEpIntClr_EP13RX_BIT 26
#define USBEpIntClr_EP13TX_MASK 0x8000000
#define USBEpIntClr_EP13TX 0x8000000
#define USBEpIntClr_EP13TX_BIT 27
#define USBEpIntClr_EP14RX_MASK 0x10000000
#define USBEpIntClr_EP14RX 0x10000000
#define USBEpIntClr_EP14RX_BIT 28
#define USBEpIntClr_EP14TX_MASK 0x20000000
#define USBEpIntClr_EP14TX 0x20000000
#define USBEpIntClr_EP14TX_BIT 29
#define USBEpIntClr_EP15RX_MASK 0x40000000
#define USBEpIntClr_EP15RX 0x40000000
#define USBEpIntClr_EP15RX_BIT 30
#define USBEpIntClr_EP15TX_MASK 0x80000000
#define USBEpIntClr_EP15TX 0x80000000
#define USBEpIntClr_EP15TX_BIT 31

#define USBEpIntSet (*(volatile unsigned *)0xE009003C)
#define USBEpIntSet_OFFSET 0x3C
#define USBEpIntSet_EP0RX_MASK 0x1
#define USBEpIntSet_EP0RX 0x1
#define USBEpIntSet_EP0RX_BIT 0
#define USBEpIntSet_EP0TX_MASK 0x2
#define USBEpIntSet_EP0TX 0x2
#define USBEpIntSet_EP0TX_BIT 1
#define USBEpIntSet_EP1RX_MASK 0x4
#define USBEpIntSet_EP1RX 0x4
#define USBEpIntSet_EP1RX_BIT 2
#define USBEpIntSet_EP1TX_MASK 0x8
#define USBEpIntSet_EP1TX 0x8
#define USBEpIntSet_EP1TX_BIT 3
#define USBEpIntSet_EP2RX_MASK 0x10
#define USBEpIntSet_EP2RX 0x10
#define USBEpIntSet_EP2RX_BIT 4
#define USBEpIntSet_EP2TX_MASK 0x20
#define USBEpIntSet_EP2TX 0x20
#define USBEpIntSet_EP2TX_BIT 5
#define USBEpIntSet_EP3RX_MASK 0x40
#define USBEpIntSet_EP3RX 0x40
#define USBEpIntSet_EP3RX_BIT 6
#define USBEpIntSet_EP3TX_MASK 0x80
#define USBEpIntSet_EP3TX 0x80
#define USBEpIntSet_EP3TX_BIT 7
#define USBEpIntSet_EP4RX_MASK 0x100
#define USBEpIntSet_EP4RX 0x100
#define USBEpIntSet_EP4RX_BIT 8
#define USBEpIntSet_EP4TX_MASK 0x200
#define USBEpIntSet_EP4TX 0x200
#define USBEpIntSet_EP4TX_BIT 9
#define USBEpIntSet_EP5RX_MASK 0x400
#define USBEpIntSet_EP5RX 0x400
#define USBEpIntSet_EP5RX_BIT 10
#define USBEpIntSet_EP5TX_MASK 0x800
#define USBEpIntSet_EP5TX 0x800
#define USBEpIntSet_EP5TX_BIT 11
#define USBEpIntSet_EP6RX_MASK 0x1000
#define USBEpIntSet_EP6RX 0x1000
#define USBEpIntSet_EP6RX_BIT 12
#define USBEpIntSet_EP6TX_MASK 0x2000
#define USBEpIntSet_EP6TX 0x2000
#define USBEpIntSet_EP6TX_BIT 13
#define USBEpIntSet_EP7RX_MASK 0x4000
#define USBEpIntSet_EP7RX 0x4000
#define USBEpIntSet_EP7RX_BIT 14
#define USBEpIntSet_EP7TX_MASK 0x8000
#define USBEpIntSet_EP7TX 0x8000
#define USBEpIntSet_EP7TX_BIT 15
#define USBEpIntSet_EP8RX_MASK 0x10000
#define USBEpIntSet_EP8RX 0x10000
#define USBEpIntSet_EP8RX_BIT 16
#define USBEpIntSet_EP8TX_MASK 0x20000
#define USBEpIntSet_EP8TX 0x20000
#define USBEpIntSet_EP8TX_BIT 17
#define USBEpIntSet_EP9RX_MASK 0x40000
#define USBEpIntSet_EP9RX 0x40000
#define USBEpIntSet_EP9RX_BIT 18
#define USBEpIntSet_EP9TX_MASK 0x80000
#define USBEpIntSet_EP9TX 0x80000
#define USBEpIntSet_EP9TX_BIT 19
#define USBEpIntSet_EP10RX_MASK 0x100000
#define USBEpIntSet_EP10RX 0x100000
#define USBEpIntSet_EP10RX_BIT 20
#define USBEpIntSet_EP10TX_MASK 0x200000
#define USBEpIntSet_EP10TX 0x200000
#define USBEpIntSet_EP10TX_BIT 21
#define USBEpIntSet_EP11RX_MASK 0x400000
#define USBEpIntSet_EP11RX 0x400000
#define USBEpIntSet_EP11RX_BIT 22
#define USBEpIntSet_EP11TX_MASK 0x800000
#define USBEpIntSet_EP11TX 0x800000
#define USBEpIntSet_EP11TX_BIT 23
#define USBEpIntSet_EP12RX_MASK 0x1000000
#define USBEpIntSet_EP12RX 0x1000000
#define USBEpIntSet_EP12RX_BIT 24
#define USBEpIntSet_EP12TX_MASK 0x2000000
#define USBEpIntSet_EP12TX 0x2000000
#define USBEpIntSet_EP12TX_BIT 25
#define USBEpIntSet_EP13RX_MASK 0x4000000
#define USBEpIntSet_EP13RX 0x4000000
#define USBEpIntSet_EP13RX_BIT 26
#define USBEpIntSet_EP13TX_MASK 0x8000000
#define USBEpIntSet_EP13TX 0x8000000
#define USBEpIntSet_EP13TX_BIT 27
#define USBEpIntSet_EP14RX_MASK 0x10000000
#define USBEpIntSet_EP14RX 0x10000000
#define USBEpIntSet_EP14RX_BIT 28
#define USBEpIntSet_EP14TX_MASK 0x20000000
#define USBEpIntSet_EP14TX 0x20000000
#define USBEpIntSet_EP14TX_BIT 29
#define USBEpIntSet_EP15RX_MASK 0x40000000
#define USBEpIntSet_EP15RX 0x40000000
#define USBEpIntSet_EP15RX_BIT 30
#define USBEpIntSet_EP15TX_MASK 0x80000000
#define USBEpIntSet_EP15TX 0x80000000
#define USBEpIntSet_EP15TX_BIT 31

#define USBEpIntPri (*(volatile unsigned *)0xE0090040)
#define USBEpIntPri_OFFSET 0x40
#define USBEpIntPri_EP0RX_MASK 0x1
#define USBEpIntPri_EP0RX 0x1
#define USBEpIntPri_EP0RX_BIT 0
#define USBEpIntPri_EP0TX_MASK 0x2
#define USBEpIntPri_EP0TX 0x2
#define USBEpIntPri_EP0TX_BIT 1
#define USBEpIntPri_EP1RX_MASK 0x4
#define USBEpIntPri_EP1RX 0x4
#define USBEpIntPri_EP1RX_BIT 2
#define USBEpIntPri_EP1TX_MASK 0x8
#define USBEpIntPri_EP1TX 0x8
#define USBEpIntPri_EP1TX_BIT 3
#define USBEpIntPri_EP2RX_MASK 0x10
#define USBEpIntPri_EP2RX 0x10
#define USBEpIntPri_EP2RX_BIT 4
#define USBEpIntPri_EP2TX_MASK 0x20
#define USBEpIntPri_EP2TX 0x20
#define USBEpIntPri_EP2TX_BIT 5
#define USBEpIntPri_EP3RX_MASK 0x40
#define USBEpIntPri_EP3RX 0x40
#define USBEpIntPri_EP3RX_BIT 6
#define USBEpIntPri_EP3TX_MASK 0x80
#define USBEpIntPri_EP3TX 0x80
#define USBEpIntPri_EP3TX_BIT 7
#define USBEpIntPri_EP4RX_MASK 0x100
#define USBEpIntPri_EP4RX 0x100
#define USBEpIntPri_EP4RX_BIT 8
#define USBEpIntPri_EP4TX_MASK 0x200
#define USBEpIntPri_EP4TX 0x200
#define USBEpIntPri_EP4TX_BIT 9
#define USBEpIntPri_EP5RX_MASK 0x400
#define USBEpIntPri_EP5RX 0x400
#define USBEpIntPri_EP5RX_BIT 10
#define USBEpIntPri_EP5TX_MASK 0x800
#define USBEpIntPri_EP5TX 0x800
#define USBEpIntPri_EP5TX_BIT 11
#define USBEpIntPri_EP6RX_MASK 0x1000
#define USBEpIntPri_EP6RX 0x1000
#define USBEpIntPri_EP6RX_BIT 12
#define USBEpIntPri_EP6TX_MASK 0x2000
#define USBEpIntPri_EP6TX 0x2000
#define USBEpIntPri_EP6TX_BIT 13
#define USBEpIntPri_EP7RX_MASK 0x4000
#define USBEpIntPri_EP7RX 0x4000
#define USBEpIntPri_EP7RX_BIT 14
#define USBEpIntPri_EP7TX_MASK 0x8000
#define USBEpIntPri_EP7TX 0x8000
#define USBEpIntPri_EP7TX_BIT 15
#define USBEpIntPri_EP8RX_MASK 0x10000
#define USBEpIntPri_EP8RX 0x10000
#define USBEpIntPri_EP8RX_BIT 16
#define USBEpIntPri_EP8TX_MASK 0x20000
#define USBEpIntPri_EP8TX 0x20000
#define USBEpIntPri_EP8TX_BIT 17
#define USBEpIntPri_EP9RX_MASK 0x40000
#define USBEpIntPri_EP9RX 0x40000
#define USBEpIntPri_EP9RX_BIT 18
#define USBEpIntPri_EP9TX_MASK 0x80000
#define USBEpIntPri_EP9TX 0x80000
#define USBEpIntPri_EP9TX_BIT 19
#define USBEpIntPri_EP10RX_MASK 0x100000
#define USBEpIntPri_EP10RX 0x100000
#define USBEpIntPri_EP10RX_BIT 20
#define USBEpIntPri_EP10TX_MASK 0x200000
#define USBEpIntPri_EP10TX 0x200000
#define USBEpIntPri_EP10TX_BIT 21
#define USBEpIntPri_EP11RX_MASK 0x400000
#define USBEpIntPri_EP11RX 0x400000
#define USBEpIntPri_EP11RX_BIT 22
#define USBEpIntPri_EP11TX_MASK 0x800000
#define USBEpIntPri_EP11TX 0x800000
#define USBEpIntPri_EP11TX_BIT 23
#define USBEpIntPri_EP12RX_MASK 0x1000000
#define USBEpIntPri_EP12RX 0x1000000
#define USBEpIntPri_EP12RX_BIT 24
#define USBEpIntPri_EP12TX_MASK 0x2000000
#define USBEpIntPri_EP12TX 0x2000000
#define USBEpIntPri_EP12TX_BIT 25
#define USBEpIntPri_EP13RX_MASK 0x4000000
#define USBEpIntPri_EP13RX 0x4000000
#define USBEpIntPri_EP13RX_BIT 26
#define USBEpIntPri_EP13TX_MASK 0x8000000
#define USBEpIntPri_EP13TX 0x8000000
#define USBEpIntPri_EP13TX_BIT 27
#define USBEpIntPri_EP14RX_MASK 0x10000000
#define USBEpIntPri_EP14RX 0x10000000
#define USBEpIntPri_EP14RX_BIT 28
#define USBEpIntPri_EP14TX_MASK 0x20000000
#define USBEpIntPri_EP14TX 0x20000000
#define USBEpIntPri_EP14TX_BIT 29
#define USBEpIntPri_EP15RX_MASK 0x40000000
#define USBEpIntPri_EP15RX 0x40000000
#define USBEpIntPri_EP15RX_BIT 30
#define USBEpIntPri_EP15TX_MASK 0x80000000
#define USBEpIntPri_EP15TX 0x80000000
#define USBEpIntPri_EP15TX_BIT 31

#define USBReEp (*(volatile unsigned *)0xE0090044)
#define USBReEp_OFFSET 0x44
#define USBReEp_EP0_MASK 0x1
#define USBReEp_EP0 0x1
#define USBReEp_EP0_BIT 0
#define USBReEp_EP1_MASK 0x2
#define USBReEp_EP1 0x2
#define USBReEp_EP1_BIT 1
#define USBReEp_EP2_MASK 0x4
#define USBReEp_EP2 0x4
#define USBReEp_EP2_BIT 2
#define USBReEp_EP3_MASK 0x8
#define USBReEp_EP3 0x8
#define USBReEp_EP3_BIT 3
#define USBReEp_EP4_MASK 0x10
#define USBReEp_EP4 0x10
#define USBReEp_EP4_BIT 4
#define USBReEp_EP5_MASK 0x20
#define USBReEp_EP5 0x20
#define USBReEp_EP5_BIT 5
#define USBReEp_EP6_MASK 0x40
#define USBReEp_EP6 0x40
#define USBReEp_EP6_BIT 6
#define USBReEp_EP7_MASK 0x80
#define USBReEp_EP7 0x80
#define USBReEp_EP7_BIT 7
#define USBReEp_EP8_MASK 0x100
#define USBReEp_EP8 0x100
#define USBReEp_EP8_BIT 8
#define USBReEp_EP9_MASK 0x200
#define USBReEp_EP9 0x200
#define USBReEp_EP9_BIT 9
#define USBReEp_EP10_MASK 0x400
#define USBReEp_EP10 0x400
#define USBReEp_EP10_BIT 10
#define USBReEp_EP11_MASK 0x800
#define USBReEp_EP11 0x800
#define USBReEp_EP11_BIT 11
#define USBReEp_EP12_MASK 0x1000
#define USBReEp_EP12 0x1000
#define USBReEp_EP12_BIT 12
#define USBReEp_EP13_MASK 0x2000
#define USBReEp_EP13 0x2000
#define USBReEp_EP13_BIT 13
#define USBReEp_EP14_MASK 0x4000
#define USBReEp_EP14 0x4000
#define USBReEp_EP14_BIT 14
#define USBReEp_EP15_MASK 0x8000
#define USBReEp_EP15 0x8000
#define USBReEp_EP15_BIT 15
#define USBReEp_EP16_MASK 0x10000
#define USBReEp_EP16 0x10000
#define USBReEp_EP16_BIT 16
#define USBReEp_EP17_MASK 0x20000
#define USBReEp_EP17 0x20000
#define USBReEp_EP17_BIT 17
#define USBReEp_EP18_MASK 0x40000
#define USBReEp_EP18 0x40000
#define USBReEp_EP18_BIT 18
#define USBReEp_EP19_MASK 0x80000
#define USBReEp_EP19 0x80000
#define USBReEp_EP19_BIT 19
#define USBReEp_EP20_MASK 0x100000
#define USBReEp_EP20 0x100000
#define USBReEp_EP20_BIT 20
#define USBReEp_EP21_MASK 0x200000
#define USBReEp_EP21 0x200000
#define USBReEp_EP21_BIT 21
#define USBReEp_EP22_MASK 0x400000
#define USBReEp_EP22 0x400000
#define USBReEp_EP22_BIT 22
#define USBReEp_EP23_MASK 0x800000
#define USBReEp_EP23 0x800000
#define USBReEp_EP23_BIT 23
#define USBReEp_EP24_MASK 0x1000000
#define USBReEp_EP24 0x1000000
#define USBReEp_EP24_BIT 24
#define USBReEp_EP25_MASK 0x2000000
#define USBReEp_EP25 0x2000000
#define USBReEp_EP25_BIT 25
#define USBReEp_EP26_MASK 0x4000000
#define USBReEp_EP26 0x4000000
#define USBReEp_EP26_BIT 26
#define USBReEp_EP27_MASK 0x8000000
#define USBReEp_EP27 0x8000000
#define USBReEp_EP27_BIT 27
#define USBReEp_EP28_MASK 0x10000000
#define USBReEp_EP28 0x10000000
#define USBReEp_EP28_BIT 28
#define USBReEp_EP29_MASK 0x20000000
#define USBReEp_EP29 0x20000000
#define USBReEp_EP29_BIT 29
#define USBReEp_EP30_MASK 0x40000000
#define USBReEp_EP30 0x40000000
#define USBReEp_EP30_BIT 30
#define USBReEp_EP31_MASK 0x80000000
#define USBReEp_EP31 0x80000000
#define USBReEp_EP31_BIT 31

#define USBEpInd (*(volatile unsigned *)0xE0090048)
#define USBEpInd_OFFSET 0x48
#define USBEpInd_Phy_endpoint_MASK 0x1F
#define USBEpInd_Phy_endpoint_BIT 0

#define USBEpMaxPSize (*(volatile unsigned *)0xE009004C)
#define USBEpMaxPSize_OFFSET 0x4C
#define USBEpMaxPSize_MaxPacketSize_MASK 0x3FF
#define USBEpMaxPSize_MaxPacketSize_BIT 0

#define USBDMARSt (*(volatile unsigned *)0xE0090050)
#define USBDMARSt_OFFSET 0x50
#define USBDMARSt_EP0_MASK 0x1
#define USBDMARSt_EP0 0x1
#define USBDMARSt_EP0_BIT 0
#define USBDMARSt_EP1_MASK 0x2
#define USBDMARSt_EP1 0x2
#define USBDMARSt_EP1_BIT 1
#define USBDMARSt_EP2_MASK 0x4
#define USBDMARSt_EP2 0x4
#define USBDMARSt_EP2_BIT 2
#define USBDMARSt_EP3_MASK 0x8
#define USBDMARSt_EP3 0x8
#define USBDMARSt_EP3_BIT 3
#define USBDMARSt_EP4_MASK 0x10
#define USBDMARSt_EP4 0x10
#define USBDMARSt_EP4_BIT 4
#define USBDMARSt_EP5_MASK 0x20
#define USBDMARSt_EP5 0x20
#define USBDMARSt_EP5_BIT 5
#define USBDMARSt_EP6_MASK 0x40
#define USBDMARSt_EP6 0x40
#define USBDMARSt_EP6_BIT 6
#define USBDMARSt_EP7_MASK 0x80
#define USBDMARSt_EP7 0x80
#define USBDMARSt_EP7_BIT 7
#define USBDMARSt_EP8_MASK 0x100
#define USBDMARSt_EP8 0x100
#define USBDMARSt_EP8_BIT 8
#define USBDMARSt_EP9_MASK 0x200
#define USBDMARSt_EP9 0x200
#define USBDMARSt_EP9_BIT 9
#define USBDMARSt_EP10_MASK 0x400
#define USBDMARSt_EP10 0x400
#define USBDMARSt_EP10_BIT 10
#define USBDMARSt_EP11_MASK 0x800
#define USBDMARSt_EP11 0x800
#define USBDMARSt_EP11_BIT 11
#define USBDMARSt_EP12_MASK 0x1000
#define USBDMARSt_EP12 0x1000
#define USBDMARSt_EP12_BIT 12
#define USBDMARSt_EP13_MASK 0x2000
#define USBDMARSt_EP13 0x2000
#define USBDMARSt_EP13_BIT 13
#define USBDMARSt_EP14_MASK 0x4000
#define USBDMARSt_EP14 0x4000
#define USBDMARSt_EP14_BIT 14
#define USBDMARSt_EP15_MASK 0x8000
#define USBDMARSt_EP15 0x8000
#define USBDMARSt_EP15_BIT 15
#define USBDMARSt_EP16_MASK 0x10000
#define USBDMARSt_EP16 0x10000
#define USBDMARSt_EP16_BIT 16
#define USBDMARSt_EP17_MASK 0x20000
#define USBDMARSt_EP17 0x20000
#define USBDMARSt_EP17_BIT 17
#define USBDMARSt_EP18_MASK 0x40000
#define USBDMARSt_EP18 0x40000
#define USBDMARSt_EP18_BIT 18
#define USBDMARSt_EP19_MASK 0x80000
#define USBDMARSt_EP19 0x80000
#define USBDMARSt_EP19_BIT 19
#define USBDMARSt_EP20_MASK 0x100000
#define USBDMARSt_EP20 0x100000
#define USBDMARSt_EP20_BIT 20
#define USBDMARSt_EP21_MASK 0x200000
#define USBDMARSt_EP21 0x200000
#define USBDMARSt_EP21_BIT 21
#define USBDMARSt_EP22_MASK 0x400000
#define USBDMARSt_EP22 0x400000
#define USBDMARSt_EP22_BIT 22
#define USBDMARSt_EP23_MASK 0x800000
#define USBDMARSt_EP23 0x800000
#define USBDMARSt_EP23_BIT 23
#define USBDMARSt_EP24_MASK 0x1000000
#define USBDMARSt_EP24 0x1000000
#define USBDMARSt_EP24_BIT 24
#define USBDMARSt_EP25_MASK 0x2000000
#define USBDMARSt_EP25 0x2000000
#define USBDMARSt_EP25_BIT 25
#define USBDMARSt_EP26_MASK 0x4000000
#define USBDMARSt_EP26 0x4000000
#define USBDMARSt_EP26_BIT 26
#define USBDMARSt_EP27_MASK 0x8000000
#define USBDMARSt_EP27 0x8000000
#define USBDMARSt_EP27_BIT 27
#define USBDMARSt_EP28_MASK 0x10000000
#define USBDMARSt_EP28 0x10000000
#define USBDMARSt_EP28_BIT 28
#define USBDMARSt_EP29_MASK 0x20000000
#define USBDMARSt_EP29 0x20000000
#define USBDMARSt_EP29_BIT 29
#define USBDMARSt_EP30_MASK 0x40000000
#define USBDMARSt_EP30 0x40000000
#define USBDMARSt_EP30_BIT 30
#define USBDMARSt_EP31_MASK 0x80000000
#define USBDMARSt_EP31 0x80000000
#define USBDMARSt_EP31_BIT 31

#define USBDMARClr (*(volatile unsigned *)0xE0090054)
#define USBDMARClr_OFFSET 0x54
#define USBDMARClr_EP0_MASK 0x1
#define USBDMARClr_EP0 0x1
#define USBDMARClr_EP0_BIT 0
#define USBDMARClr_EP1_MASK 0x2
#define USBDMARClr_EP1 0x2
#define USBDMARClr_EP1_BIT 1
#define USBDMARClr_EP2_MASK 0x4
#define USBDMARClr_EP2 0x4
#define USBDMARClr_EP2_BIT 2
#define USBDMARClr_EP3_MASK 0x8
#define USBDMARClr_EP3 0x8
#define USBDMARClr_EP3_BIT 3
#define USBDMARClr_EP4_MASK 0x10
#define USBDMARClr_EP4 0x10
#define USBDMARClr_EP4_BIT 4
#define USBDMARClr_EP5_MASK 0x20
#define USBDMARClr_EP5 0x20
#define USBDMARClr_EP5_BIT 5
#define USBDMARClr_EP6_MASK 0x40
#define USBDMARClr_EP6 0x40
#define USBDMARClr_EP6_BIT 6
#define USBDMARClr_EP7_MASK 0x80
#define USBDMARClr_EP7 0x80
#define USBDMARClr_EP7_BIT 7
#define USBDMARClr_EP8_MASK 0x100
#define USBDMARClr_EP8 0x100
#define USBDMARClr_EP8_BIT 8
#define USBDMARClr_EP9_MASK 0x200
#define USBDMARClr_EP9 0x200
#define USBDMARClr_EP9_BIT 9
#define USBDMARClr_EP10_MASK 0x400
#define USBDMARClr_EP10 0x400
#define USBDMARClr_EP10_BIT 10
#define USBDMARClr_EP11_MASK 0x800
#define USBDMARClr_EP11 0x800
#define USBDMARClr_EP11_BIT 11
#define USBDMARClr_EP12_MASK 0x1000
#define USBDMARClr_EP12 0x1000
#define USBDMARClr_EP12_BIT 12
#define USBDMARClr_EP13_MASK 0x2000
#define USBDMARClr_EP13 0x2000
#define USBDMARClr_EP13_BIT 13
#define USBDMARClr_EP14_MASK 0x4000
#define USBDMARClr_EP14 0x4000
#define USBDMARClr_EP14_BIT 14
#define USBDMARClr_EP15_MASK 0x8000
#define USBDMARClr_EP15 0x8000
#define USBDMARClr_EP15_BIT 15
#define USBDMARClr_EP16_MASK 0x10000
#define USBDMARClr_EP16 0x10000
#define USBDMARClr_EP16_BIT 16
#define USBDMARClr_EP17_MASK 0x20000
#define USBDMARClr_EP17 0x20000
#define USBDMARClr_EP17_BIT 17
#define USBDMARClr_EP18_MASK 0x40000
#define USBDMARClr_EP18 0x40000
#define USBDMARClr_EP18_BIT 18
#define USBDMARClr_EP19_MASK 0x80000
#define USBDMARClr_EP19 0x80000
#define USBDMARClr_EP19_BIT 19
#define USBDMARClr_EP20_MASK 0x100000
#define USBDMARClr_EP20 0x100000
#define USBDMARClr_EP20_BIT 20
#define USBDMARClr_EP21_MASK 0x200000
#define USBDMARClr_EP21 0x200000
#define USBDMARClr_EP21_BIT 21
#define USBDMARClr_EP22_MASK 0x400000
#define USBDMARClr_EP22 0x400000
#define USBDMARClr_EP22_BIT 22
#define USBDMARClr_EP23_MASK 0x800000
#define USBDMARClr_EP23 0x800000
#define USBDMARClr_EP23_BIT 23
#define USBDMARClr_EP24_MASK 0x1000000
#define USBDMARClr_EP24 0x1000000
#define USBDMARClr_EP24_BIT 24
#define USBDMARClr_EP25_MASK 0x2000000
#define USBDMARClr_EP25 0x2000000
#define USBDMARClr_EP25_BIT 25
#define USBDMARClr_EP26_MASK 0x4000000
#define USBDMARClr_EP26 0x4000000
#define USBDMARClr_EP26_BIT 26
#define USBDMARClr_EP27_MASK 0x8000000
#define USBDMARClr_EP27 0x8000000
#define USBDMARClr_EP27_BIT 27
#define USBDMARClr_EP28_MASK 0x10000000
#define USBDMARClr_EP28 0x10000000
#define USBDMARClr_EP28_BIT 28
#define USBDMARClr_EP29_MASK 0x20000000
#define USBDMARClr_EP29 0x20000000
#define USBDMARClr_EP29_BIT 29
#define USBDMARClr_EP30_MASK 0x40000000
#define USBDMARClr_EP30 0x40000000
#define USBDMARClr_EP30_BIT 30
#define USBDMARClr_EP31_MASK 0x80000000
#define USBDMARClr_EP31 0x80000000
#define USBDMARClr_EP31_BIT 31

#define USBDMARSet (*(volatile unsigned *)0xE0090058)
#define USBDMARSet_OFFSET 0x58
#define USBDMARSet_EP0_MASK 0x1
#define USBDMARSet_EP0 0x1
#define USBDMARSet_EP0_BIT 0
#define USBDMARSet_EP1_MASK 0x2
#define USBDMARSet_EP1 0x2
#define USBDMARSet_EP1_BIT 1
#define USBDMARSet_EP2_MASK 0x4
#define USBDMARSet_EP2 0x4
#define USBDMARSet_EP2_BIT 2
#define USBDMARSet_EP3_MASK 0x8
#define USBDMARSet_EP3 0x8
#define USBDMARSet_EP3_BIT 3
#define USBDMARSet_EP4_MASK 0x10
#define USBDMARSet_EP4 0x10
#define USBDMARSet_EP4_BIT 4
#define USBDMARSet_EP5_MASK 0x20
#define USBDMARSet_EP5 0x20
#define USBDMARSet_EP5_BIT 5
#define USBDMARSet_EP6_MASK 0x40
#define USBDMARSet_EP6 0x40
#define USBDMARSet_EP6_BIT 6
#define USBDMARSet_EP7_MASK 0x80
#define USBDMARSet_EP7 0x80
#define USBDMARSet_EP7_BIT 7
#define USBDMARSet_EP8_MASK 0x100
#define USBDMARSet_EP8 0x100
#define USBDMARSet_EP8_BIT 8
#define USBDMARSet_EP9_MASK 0x200
#define USBDMARSet_EP9 0x200
#define USBDMARSet_EP9_BIT 9
#define USBDMARSet_EP10_MASK 0x400
#define USBDMARSet_EP10 0x400
#define USBDMARSet_EP10_BIT 10
#define USBDMARSet_EP11_MASK 0x800
#define USBDMARSet_EP11 0x800
#define USBDMARSet_EP11_BIT 11
#define USBDMARSet_EP12_MASK 0x1000
#define USBDMARSet_EP12 0x1000
#define USBDMARSet_EP12_BIT 12
#define USBDMARSet_EP13_MASK 0x2000
#define USBDMARSet_EP13 0x2000
#define USBDMARSet_EP13_BIT 13
#define USBDMARSet_EP14_MASK 0x4000
#define USBDMARSet_EP14 0x4000
#define USBDMARSet_EP14_BIT 14
#define USBDMARSet_EP15_MASK 0x8000
#define USBDMARSet_EP15 0x8000
#define USBDMARSet_EP15_BIT 15
#define USBDMARSet_EP16_MASK 0x10000
#define USBDMARSet_EP16 0x10000
#define USBDMARSet_EP16_BIT 16
#define USBDMARSet_EP17_MASK 0x20000
#define USBDMARSet_EP17 0x20000
#define USBDMARSet_EP17_BIT 17
#define USBDMARSet_EP18_MASK 0x40000
#define USBDMARSet_EP18 0x40000
#define USBDMARSet_EP18_BIT 18
#define USBDMARSet_EP19_MASK 0x80000
#define USBDMARSet_EP19 0x80000
#define USBDMARSet_EP19_BIT 19
#define USBDMARSet_EP20_MASK 0x100000
#define USBDMARSet_EP20 0x100000
#define USBDMARSet_EP20_BIT 20
#define USBDMARSet_EP21_MASK 0x200000
#define USBDMARSet_EP21 0x200000
#define USBDMARSet_EP21_BIT 21
#define USBDMARSet_EP22_MASK 0x400000
#define USBDMARSet_EP22 0x400000
#define USBDMARSet_EP22_BIT 22
#define USBDMARSet_EP23_MASK 0x800000
#define USBDMARSet_EP23 0x800000
#define USBDMARSet_EP23_BIT 23
#define USBDMARSet_EP24_MASK 0x1000000
#define USBDMARSet_EP24 0x1000000
#define USBDMARSet_EP24_BIT 24
#define USBDMARSet_EP25_MASK 0x2000000
#define USBDMARSet_EP25 0x2000000
#define USBDMARSet_EP25_BIT 25
#define USBDMARSet_EP26_MASK 0x4000000
#define USBDMARSet_EP26 0x4000000
#define USBDMARSet_EP26_BIT 26
#define USBDMARSet_EP27_MASK 0x8000000
#define USBDMARSet_EP27 0x8000000
#define USBDMARSet_EP27_BIT 27
#define USBDMARSet_EP28_MASK 0x10000000
#define USBDMARSet_EP28 0x10000000
#define USBDMARSet_EP28_BIT 28
#define USBDMARSet_EP29_MASK 0x20000000
#define USBDMARSet_EP29 0x20000000
#define USBDMARSet_EP29_BIT 29
#define USBDMARSet_EP30_MASK 0x40000000
#define USBDMARSet_EP30 0x40000000
#define USBDMARSet_EP30_BIT 30
#define USBDMARSet_EP31_MASK 0x80000000
#define USBDMARSet_EP31 0x80000000
#define USBDMARSet_EP31_BIT 31

#define USBUDCAH (*(volatile unsigned *)0xE0090080)
#define USBUDCAH_OFFSET 0x80
#define USBUDCAH_UDCA_Header_MASK 0xFFFFFF80
#define USBUDCAH_UDCA_Header_BIT 7

#define USBEpDMASt (*(volatile unsigned *)0xE0090084)
#define USBEpDMASt_OFFSET 0x84
#define USBEpDMASt_EP0_DMA_ENABLE_MASK 0x1
#define USBEpDMASt_EP0_DMA_ENABLE 0x1
#define USBEpDMASt_EP0_DMA_ENABLE_BIT 0
#define USBEpDMASt_EP1_DMA_ENABLE_MASK 0x2
#define USBEpDMASt_EP1_DMA_ENABLE 0x2
#define USBEpDMASt_EP1_DMA_ENABLE_BIT 1
#define USBEpDMASt_EP2_DMA_ENABLE_MASK 0x4
#define USBEpDMASt_EP2_DMA_ENABLE 0x4
#define USBEpDMASt_EP2_DMA_ENABLE_BIT 2
#define USBEpDMASt_EP3_DMA_ENABLE_MASK 0x8
#define USBEpDMASt_EP3_DMA_ENABLE 0x8
#define USBEpDMASt_EP3_DMA_ENABLE_BIT 3
#define USBEpDMASt_EP4_DMA_ENABLE_MASK 0x10
#define USBEpDMASt_EP4_DMA_ENABLE 0x10
#define USBEpDMASt_EP4_DMA_ENABLE_BIT 4
#define USBEpDMASt_EP5_DMA_ENABLE_MASK 0x20
#define USBEpDMASt_EP5_DMA_ENABLE 0x20
#define USBEpDMASt_EP5_DMA_ENABLE_BIT 5
#define USBEpDMASt_EP6_DMA_ENABLE_MASK 0x40
#define USBEpDMASt_EP6_DMA_ENABLE 0x40
#define USBEpDMASt_EP6_DMA_ENABLE_BIT 6
#define USBEpDMASt_EP7_DMA_ENABLE_MASK 0x80
#define USBEpDMASt_EP7_DMA_ENABLE 0x80
#define USBEpDMASt_EP7_DMA_ENABLE_BIT 7
#define USBEpDMASt_EP8_DMA_ENABLE_MASK 0x100
#define USBEpDMASt_EP8_DMA_ENABLE 0x100
#define USBEpDMASt_EP8_DMA_ENABLE_BIT 8
#define USBEpDMASt_EP9_DMA_ENABLE_MASK 0x200
#define USBEpDMASt_EP9_DMA_ENABLE 0x200
#define USBEpDMASt_EP9_DMA_ENABLE_BIT 9
#define USBEpDMASt_EP10_DMA_ENABLE_MASK 0x400
#define USBEpDMASt_EP10_DMA_ENABLE 0x400
#define USBEpDMASt_EP10_DMA_ENABLE_BIT 10
#define USBEpDMASt_EP11_DMA_ENABLE_MASK 0x800
#define USBEpDMASt_EP11_DMA_ENABLE 0x800
#define USBEpDMASt_EP11_DMA_ENABLE_BIT 11
#define USBEpDMASt_EP12_DMA_ENABLE_MASK 0x1000
#define USBEpDMASt_EP12_DMA_ENABLE 0x1000
#define USBEpDMASt_EP12_DMA_ENABLE_BIT 12
#define USBEpDMASt_EP13_DMA_ENABLE_MASK 0x2000
#define USBEpDMASt_EP13_DMA_ENABLE 0x2000
#define USBEpDMASt_EP13_DMA_ENABLE_BIT 13
#define USBEpDMASt_EP14_DMA_ENABLE_MASK 0x4000
#define USBEpDMASt_EP14_DMA_ENABLE 0x4000
#define USBEpDMASt_EP14_DMA_ENABLE_BIT 14
#define USBEpDMASt_EP15_DMA_ENABLE_MASK 0x8000
#define USBEpDMASt_EP15_DMA_ENABLE 0x8000
#define USBEpDMASt_EP15_DMA_ENABLE_BIT 15
#define USBEpDMASt_EP16_DMA_ENABLE_MASK 0x10000
#define USBEpDMASt_EP16_DMA_ENABLE 0x10000
#define USBEpDMASt_EP16_DMA_ENABLE_BIT 16
#define USBEpDMASt_EP17_DMA_ENABLE_MASK 0x20000
#define USBEpDMASt_EP17_DMA_ENABLE 0x20000
#define USBEpDMASt_EP17_DMA_ENABLE_BIT 17
#define USBEpDMASt_EP18_DMA_ENABLE_MASK 0x40000
#define USBEpDMASt_EP18_DMA_ENABLE 0x40000
#define USBEpDMASt_EP18_DMA_ENABLE_BIT 18
#define USBEpDMASt_EP19_DMA_ENABLE_MASK 0x80000
#define USBEpDMASt_EP19_DMA_ENABLE 0x80000
#define USBEpDMASt_EP19_DMA_ENABLE_BIT 19
#define USBEpDMASt_EP20_DMA_ENABLE_MASK 0x100000
#define USBEpDMASt_EP20_DMA_ENABLE 0x100000
#define USBEpDMASt_EP20_DMA_ENABLE_BIT 20
#define USBEpDMASt_EP21_DMA_ENABLE_MASK 0x200000
#define USBEpDMASt_EP21_DMA_ENABLE 0x200000
#define USBEpDMASt_EP21_DMA_ENABLE_BIT 21
#define USBEpDMASt_EP22_DMA_ENABLE_MASK 0x400000
#define USBEpDMASt_EP22_DMA_ENABLE 0x400000
#define USBEpDMASt_EP22_DMA_ENABLE_BIT 22
#define USBEpDMASt_EP23_DMA_ENABLE_MASK 0x800000
#define USBEpDMASt_EP23_DMA_ENABLE 0x800000
#define USBEpDMASt_EP23_DMA_ENABLE_BIT 23
#define USBEpDMASt_EP24_DMA_ENABLE_MASK 0x1000000
#define USBEpDMASt_EP24_DMA_ENABLE 0x1000000
#define USBEpDMASt_EP24_DMA_ENABLE_BIT 24
#define USBEpDMASt_EP25_DMA_ENABLE_MASK 0x2000000
#define USBEpDMASt_EP25_DMA_ENABLE 0x2000000
#define USBEpDMASt_EP25_DMA_ENABLE_BIT 25
#define USBEpDMASt_EP26_DMA_ENABLE_MASK 0x4000000
#define USBEpDMASt_EP26_DMA_ENABLE 0x4000000
#define USBEpDMASt_EP26_DMA_ENABLE_BIT 26
#define USBEpDMASt_EP27_DMA_ENABLE_MASK 0x8000000
#define USBEpDMASt_EP27_DMA_ENABLE 0x8000000
#define USBEpDMASt_EP27_DMA_ENABLE_BIT 27
#define USBEpDMASt_EP28_DMA_ENABLE_MASK 0x10000000
#define USBEpDMASt_EP28_DMA_ENABLE 0x10000000
#define USBEpDMASt_EP28_DMA_ENABLE_BIT 28
#define USBEpDMASt_EP29_DMA_ENABLE_MASK 0x20000000
#define USBEpDMASt_EP29_DMA_ENABLE 0x20000000
#define USBEpDMASt_EP29_DMA_ENABLE_BIT 29
#define USBEpDMASt_EP30_DMA_ENABLE_MASK 0x40000000
#define USBEpDMASt_EP30_DMA_ENABLE 0x40000000
#define USBEpDMASt_EP30_DMA_ENABLE_BIT 30
#define USBEpDMASt_EP31_DMA_ENABLE_MASK 0x80000000
#define USBEpDMASt_EP31_DMA_ENABLE 0x80000000
#define USBEpDMASt_EP31_DMA_ENABLE_BIT 31

#define USBEpDMAEn (*(volatile unsigned *)0xE0090088)
#define USBEpDMAEn_OFFSET 0x88
#define USBEpDMAEn_EP0_DMA_ENABLE_MASK 0x1
#define USBEpDMAEn_EP0_DMA_ENABLE 0x1
#define USBEpDMAEn_EP0_DMA_ENABLE_BIT 0
#define USBEpDMAEn_EP1_DMA_ENABLE_MASK 0x2
#define USBEpDMAEn_EP1_DMA_ENABLE 0x2
#define USBEpDMAEn_EP1_DMA_ENABLE_BIT 1
#define USBEpDMAEn_EP2_DMA_ENABLE_MASK 0x4
#define USBEpDMAEn_EP2_DMA_ENABLE 0x4
#define USBEpDMAEn_EP2_DMA_ENABLE_BIT 2
#define USBEpDMAEn_EP3_DMA_ENABLE_MASK 0x8
#define USBEpDMAEn_EP3_DMA_ENABLE 0x8
#define USBEpDMAEn_EP3_DMA_ENABLE_BIT 3
#define USBEpDMAEn_EP4_DMA_ENABLE_MASK 0x10
#define USBEpDMAEn_EP4_DMA_ENABLE 0x10
#define USBEpDMAEn_EP4_DMA_ENABLE_BIT 4
#define USBEpDMAEn_EP5_DMA_ENABLE_MASK 0x20
#define USBEpDMAEn_EP5_DMA_ENABLE 0x20
#define USBEpDMAEn_EP5_DMA_ENABLE_BIT 5
#define USBEpDMAEn_EP6_DMA_ENABLE_MASK 0x40
#define USBEpDMAEn_EP6_DMA_ENABLE 0x40
#define USBEpDMAEn_EP6_DMA_ENABLE_BIT 6
#define USBEpDMAEn_EP7_DMA_ENABLE_MASK 0x80
#define USBEpDMAEn_EP7_DMA_ENABLE 0x80
#define USBEpDMAEn_EP7_DMA_ENABLE_BIT 7
#define USBEpDMAEn_EP8_DMA_ENABLE_MASK 0x100
#define USBEpDMAEn_EP8_DMA_ENABLE 0x100
#define USBEpDMAEn_EP8_DMA_ENABLE_BIT 8
#define USBEpDMAEn_EP9_DMA_ENABLE_MASK 0x200
#define USBEpDMAEn_EP9_DMA_ENABLE 0x200
#define USBEpDMAEn_EP9_DMA_ENABLE_BIT 9
#define USBEpDMAEn_EP10_DMA_ENABLE_MASK 0x400
#define USBEpDMAEn_EP10_DMA_ENABLE 0x400
#define USBEpDMAEn_EP10_DMA_ENABLE_BIT 10
#define USBEpDMAEn_EP11_DMA_ENABLE_MASK 0x800
#define USBEpDMAEn_EP11_DMA_ENABLE 0x800
#define USBEpDMAEn_EP11_DMA_ENABLE_BIT 11
#define USBEpDMAEn_EP12_DMA_ENABLE_MASK 0x1000
#define USBEpDMAEn_EP12_DMA_ENABLE 0x1000
#define USBEpDMAEn_EP12_DMA_ENABLE_BIT 12
#define USBEpDMAEn_EP13_DMA_ENABLE_MASK 0x2000
#define USBEpDMAEn_EP13_DMA_ENABLE 0x2000
#define USBEpDMAEn_EP13_DMA_ENABLE_BIT 13
#define USBEpDMAEn_EP14_DMA_ENABLE_MASK 0x4000
#define USBEpDMAEn_EP14_DMA_ENABLE 0x4000
#define USBEpDMAEn_EP14_DMA_ENABLE_BIT 14
#define USBEpDMAEn_EP15_DMA_ENABLE_MASK 0x8000
#define USBEpDMAEn_EP15_DMA_ENABLE 0x8000
#define USBEpDMAEn_EP15_DMA_ENABLE_BIT 15
#define USBEpDMAEn_EP16_DMA_ENABLE_MASK 0x10000
#define USBEpDMAEn_EP16_DMA_ENABLE 0x10000
#define USBEpDMAEn_EP16_DMA_ENABLE_BIT 16
#define USBEpDMAEn_EP17_DMA_ENABLE_MASK 0x20000
#define USBEpDMAEn_EP17_DMA_ENABLE 0x20000
#define USBEpDMAEn_EP17_DMA_ENABLE_BIT 17
#define USBEpDMAEn_EP18_DMA_ENABLE_MASK 0x40000
#define USBEpDMAEn_EP18_DMA_ENABLE 0x40000
#define USBEpDMAEn_EP18_DMA_ENABLE_BIT 18
#define USBEpDMAEn_EP19_DMA_ENABLE_MASK 0x80000
#define USBEpDMAEn_EP19_DMA_ENABLE 0x80000
#define USBEpDMAEn_EP19_DMA_ENABLE_BIT 19
#define USBEpDMAEn_EP20_DMA_ENABLE_MASK 0x100000
#define USBEpDMAEn_EP20_DMA_ENABLE 0x100000
#define USBEpDMAEn_EP20_DMA_ENABLE_BIT 20
#define USBEpDMAEn_EP21_DMA_ENABLE_MASK 0x200000
#define USBEpDMAEn_EP21_DMA_ENABLE 0x200000
#define USBEpDMAEn_EP21_DMA_ENABLE_BIT 21
#define USBEpDMAEn_EP22_DMA_ENABLE_MASK 0x400000
#define USBEpDMAEn_EP22_DMA_ENABLE 0x400000
#define USBEpDMAEn_EP22_DMA_ENABLE_BIT 22
#define USBEpDMAEn_EP23_DMA_ENABLE_MASK 0x800000
#define USBEpDMAEn_EP23_DMA_ENABLE 0x800000
#define USBEpDMAEn_EP23_DMA_ENABLE_BIT 23
#define USBEpDMAEn_EP24_DMA_ENABLE_MASK 0x1000000
#define USBEpDMAEn_EP24_DMA_ENABLE 0x1000000
#define USBEpDMAEn_EP24_DMA_ENABLE_BIT 24
#define USBEpDMAEn_EP25_DMA_ENABLE_MASK 0x2000000
#define USBEpDMAEn_EP25_DMA_ENABLE 0x2000000
#define USBEpDMAEn_EP25_DMA_ENABLE_BIT 25
#define USBEpDMAEn_EP26_DMA_ENABLE_MASK 0x4000000
#define USBEpDMAEn_EP26_DMA_ENABLE 0x4000000
#define USBEpDMAEn_EP26_DMA_ENABLE_BIT 26
#define USBEpDMAEn_EP27_DMA_ENABLE_MASK 0x8000000
#define USBEpDMAEn_EP27_DMA_ENABLE 0x8000000
#define USBEpDMAEn_EP27_DMA_ENABLE_BIT 27
#define USBEpDMAEn_EP28_DMA_ENABLE_MASK 0x10000000
#define USBEpDMAEn_EP28_DMA_ENABLE 0x10000000
#define USBEpDMAEn_EP28_DMA_ENABLE_BIT 28
#define USBEpDMAEn_EP29_DMA_ENABLE_MASK 0x20000000
#define USBEpDMAEn_EP29_DMA_ENABLE 0x20000000
#define USBEpDMAEn_EP29_DMA_ENABLE_BIT 29
#define USBEpDMAEn_EP30_DMA_ENABLE_MASK 0x40000000
#define USBEpDMAEn_EP30_DMA_ENABLE 0x40000000
#define USBEpDMAEn_EP30_DMA_ENABLE_BIT 30
#define USBEpDMAEn_EP31_DMA_ENABLE_MASK 0x80000000
#define USBEpDMAEn_EP31_DMA_ENABLE 0x80000000
#define USBEpDMAEn_EP31_DMA_ENABLE_BIT 31

#define USBEpDMADis (*(volatile unsigned *)0xE009008C)
#define USBEpDMADis_OFFSET 0x8C
#define USBEpDMADis_EP0_DMA_ENABLE_MASK 0x1
#define USBEpDMADis_EP0_DMA_ENABLE 0x1
#define USBEpDMADis_EP0_DMA_ENABLE_BIT 0
#define USBEpDMADis_EP1_DMA_ENABLE_MASK 0x2
#define USBEpDMADis_EP1_DMA_ENABLE 0x2
#define USBEpDMADis_EP1_DMA_ENABLE_BIT 1
#define USBEpDMADis_EP2_DMA_ENABLE_MASK 0x4
#define USBEpDMADis_EP2_DMA_ENABLE 0x4
#define USBEpDMADis_EP2_DMA_ENABLE_BIT 2
#define USBEpDMADis_EP3_DMA_ENABLE_MASK 0x8
#define USBEpDMADis_EP3_DMA_ENABLE 0x8
#define USBEpDMADis_EP3_DMA_ENABLE_BIT 3
#define USBEpDMADis_EP4_DMA_ENABLE_MASK 0x10
#define USBEpDMADis_EP4_DMA_ENABLE 0x10
#define USBEpDMADis_EP4_DMA_ENABLE_BIT 4
#define USBEpDMADis_EP5_DMA_ENABLE_MASK 0x20
#define USBEpDMADis_EP5_DMA_ENABLE 0x20
#define USBEpDMADis_EP5_DMA_ENABLE_BIT 5
#define USBEpDMADis_EP6_DMA_ENABLE_MASK 0x40
#define USBEpDMADis_EP6_DMA_ENABLE 0x40
#define USBEpDMADis_EP6_DMA_ENABLE_BIT 6
#define USBEpDMADis_EP7_DMA_ENABLE_MASK 0x80
#define USBEpDMADis_EP7_DMA_ENABLE 0x80
#define USBEpDMADis_EP7_DMA_ENABLE_BIT 7
#define USBEpDMADis_EP8_DMA_ENABLE_MASK 0x100
#define USBEpDMADis_EP8_DMA_ENABLE 0x100
#define USBEpDMADis_EP8_DMA_ENABLE_BIT 8
#define USBEpDMADis_EP9_DMA_ENABLE_MASK 0x200
#define USBEpDMADis_EP9_DMA_ENABLE 0x200
#define USBEpDMADis_EP9_DMA_ENABLE_BIT 9
#define USBEpDMADis_EP10_DMA_ENABLE_MASK 0x400
#define USBEpDMADis_EP10_DMA_ENABLE 0x400
#define USBEpDMADis_EP10_DMA_ENABLE_BIT 10
#define USBEpDMADis_EP11_DMA_ENABLE_MASK 0x800
#define USBEpDMADis_EP11_DMA_ENABLE 0x800
#define USBEpDMADis_EP11_DMA_ENABLE_BIT 11
#define USBEpDMADis_EP12_DMA_ENABLE_MASK 0x1000
#define USBEpDMADis_EP12_DMA_ENABLE 0x1000
#define USBEpDMADis_EP12_DMA_ENABLE_BIT 12
#define USBEpDMADis_EP13_DMA_ENABLE_MASK 0x2000
#define USBEpDMADis_EP13_DMA_ENABLE 0x2000
#define USBEpDMADis_EP13_DMA_ENABLE_BIT 13
#define USBEpDMADis_EP14_DMA_ENABLE_MASK 0x4000
#define USBEpDMADis_EP14_DMA_ENABLE 0x4000
#define USBEpDMADis_EP14_DMA_ENABLE_BIT 14
#define USBEpDMADis_EP15_DMA_ENABLE_MASK 0x8000
#define USBEpDMADis_EP15_DMA_ENABLE 0x8000
#define USBEpDMADis_EP15_DMA_ENABLE_BIT 15
#define USBEpDMADis_EP16_DMA_ENABLE_MASK 0x10000
#define USBEpDMADis_EP16_DMA_ENABLE 0x10000
#define USBEpDMADis_EP16_DMA_ENABLE_BIT 16
#define USBEpDMADis_EP17_DMA_ENABLE_MASK 0x20000
#define USBEpDMADis_EP17_DMA_ENABLE 0x20000
#define USBEpDMADis_EP17_DMA_ENABLE_BIT 17
#define USBEpDMADis_EP18_DMA_ENABLE_MASK 0x40000
#define USBEpDMADis_EP18_DMA_ENABLE 0x40000
#define USBEpDMADis_EP18_DMA_ENABLE_BIT 18
#define USBEpDMADis_EP19_DMA_ENABLE_MASK 0x80000
#define USBEpDMADis_EP19_DMA_ENABLE 0x80000
#define USBEpDMADis_EP19_DMA_ENABLE_BIT 19
#define USBEpDMADis_EP20_DMA_ENABLE_MASK 0x100000
#define USBEpDMADis_EP20_DMA_ENABLE 0x100000
#define USBEpDMADis_EP20_DMA_ENABLE_BIT 20
#define USBEpDMADis_EP21_DMA_ENABLE_MASK 0x200000
#define USBEpDMADis_EP21_DMA_ENABLE 0x200000
#define USBEpDMADis_EP21_DMA_ENABLE_BIT 21
#define USBEpDMADis_EP22_DMA_ENABLE_MASK 0x400000
#define USBEpDMADis_EP22_DMA_ENABLE 0x400000
#define USBEpDMADis_EP22_DMA_ENABLE_BIT 22
#define USBEpDMADis_EP23_DMA_ENABLE_MASK 0x800000
#define USBEpDMADis_EP23_DMA_ENABLE 0x800000
#define USBEpDMADis_EP23_DMA_ENABLE_BIT 23
#define USBEpDMADis_EP24_DMA_ENABLE_MASK 0x1000000
#define USBEpDMADis_EP24_DMA_ENABLE 0x1000000
#define USBEpDMADis_EP24_DMA_ENABLE_BIT 24
#define USBEpDMADis_EP25_DMA_ENABLE_MASK 0x2000000
#define USBEpDMADis_EP25_DMA_ENABLE 0x2000000
#define USBEpDMADis_EP25_DMA_ENABLE_BIT 25
#define USBEpDMADis_EP26_DMA_ENABLE_MASK 0x4000000
#define USBEpDMADis_EP26_DMA_ENABLE 0x4000000
#define USBEpDMADis_EP26_DMA_ENABLE_BIT 26
#define USBEpDMADis_EP27_DMA_ENABLE_MASK 0x8000000
#define USBEpDMADis_EP27_DMA_ENABLE 0x8000000
#define USBEpDMADis_EP27_DMA_ENABLE_BIT 27
#define USBEpDMADis_EP28_DMA_ENABLE_MASK 0x10000000
#define USBEpDMADis_EP28_DMA_ENABLE 0x10000000
#define USBEpDMADis_EP28_DMA_ENABLE_BIT 28
#define USBEpDMADis_EP29_DMA_ENABLE_MASK 0x20000000
#define USBEpDMADis_EP29_DMA_ENABLE 0x20000000
#define USBEpDMADis_EP29_DMA_ENABLE_BIT 29
#define USBEpDMADis_EP30_DMA_ENABLE_MASK 0x40000000
#define USBEpDMADis_EP30_DMA_ENABLE 0x40000000
#define USBEpDMADis_EP30_DMA_ENABLE_BIT 30
#define USBEpDMADis_EP31_DMA_ENABLE_MASK 0x80000000
#define USBEpDMADis_EP31_DMA_ENABLE 0x80000000
#define USBEpDMADis_EP31_DMA_ENABLE_BIT 31

#define USBDMAIntSt (*(volatile unsigned *)0xE0090090)
#define USBDMAIntSt_OFFSET 0x90
#define USBDMAIntSt_End_of_Transfer_Interrupt_MASK 0x1
#define USBDMAIntSt_End_of_Transfer_Interrupt 0x1
#define USBDMAIntSt_End_of_Transfer_Interrupt_BIT 0
#define USBDMAIntSt_New_DD_Request_Interrupt_MASK 0x2
#define USBDMAIntSt_New_DD_Request_Interrupt 0x2
#define USBDMAIntSt_New_DD_Request_Interrupt_BIT 1
#define USBDMAIntSt_System_Error_Interrupt_MASK 0x4
#define USBDMAIntSt_System_Error_Interrupt 0x4
#define USBDMAIntSt_System_Error_Interrupt_BIT 2

#define USBDMAIntEn (*(volatile unsigned *)0xE0090094)
#define USBDMAIntEn_OFFSET 0x94
#define USBDMAIntEn_End_of_Transfer_Interrupt_MASK 0x1
#define USBDMAIntEn_End_of_Transfer_Interrupt 0x1
#define USBDMAIntEn_End_of_Transfer_Interrupt_BIT 0
#define USBDMAIntEn_New_DD_Request_Interrupt_MASK 0x2
#define USBDMAIntEn_New_DD_Request_Interrupt 0x2
#define USBDMAIntEn_New_DD_Request_Interrupt_BIT 1
#define USBDMAIntEn_System_Error_Interrupt_MASK 0x4
#define USBDMAIntEn_System_Error_Interrupt 0x4
#define USBDMAIntEn_System_Error_Interrupt_BIT 2

#define USBEoTIntSt (*(volatile unsigned *)0xE00900A0)
#define USBEoTIntSt_OFFSET 0xA0
#define USBEoTIntSt_EP0_MASK 0x1
#define USBEoTIntSt_EP0 0x1
#define USBEoTIntSt_EP0_BIT 0
#define USBEoTIntSt_EP1_MASK 0x2
#define USBEoTIntSt_EP1 0x2
#define USBEoTIntSt_EP1_BIT 1
#define USBEoTIntSt_EP2_MASK 0x4
#define USBEoTIntSt_EP2 0x4
#define USBEoTIntSt_EP2_BIT 2
#define USBEoTIntSt_EP3_MASK 0x8
#define USBEoTIntSt_EP3 0x8
#define USBEoTIntSt_EP3_BIT 3
#define USBEoTIntSt_EP4_MASK 0x10
#define USBEoTIntSt_EP4 0x10
#define USBEoTIntSt_EP4_BIT 4
#define USBEoTIntSt_EP5_MASK 0x20
#define USBEoTIntSt_EP5 0x20
#define USBEoTIntSt_EP5_BIT 5
#define USBEoTIntSt_EP6_MASK 0x40
#define USBEoTIntSt_EP6 0x40
#define USBEoTIntSt_EP6_BIT 6
#define USBEoTIntSt_EP7_MASK 0x80
#define USBEoTIntSt_EP7 0x80
#define USBEoTIntSt_EP7_BIT 7
#define USBEoTIntSt_EP8_MASK 0x100
#define USBEoTIntSt_EP8 0x100
#define USBEoTIntSt_EP8_BIT 8
#define USBEoTIntSt_EP9_MASK 0x200
#define USBEoTIntSt_EP9 0x200
#define USBEoTIntSt_EP9_BIT 9
#define USBEoTIntSt_EP10_MASK 0x400
#define USBEoTIntSt_EP10 0x400
#define USBEoTIntSt_EP10_BIT 10
#define USBEoTIntSt_EP11_MASK 0x800
#define USBEoTIntSt_EP11 0x800
#define USBEoTIntSt_EP11_BIT 11
#define USBEoTIntSt_EP12_MASK 0x1000
#define USBEoTIntSt_EP12 0x1000
#define USBEoTIntSt_EP12_BIT 12
#define USBEoTIntSt_EP13_MASK 0x2000
#define USBEoTIntSt_EP13 0x2000
#define USBEoTIntSt_EP13_BIT 13
#define USBEoTIntSt_EP14_MASK 0x4000
#define USBEoTIntSt_EP14 0x4000
#define USBEoTIntSt_EP14_BIT 14
#define USBEoTIntSt_EP15_MASK 0x8000
#define USBEoTIntSt_EP15 0x8000
#define USBEoTIntSt_EP15_BIT 15
#define USBEoTIntSt_EP16_MASK 0x10000
#define USBEoTIntSt_EP16 0x10000
#define USBEoTIntSt_EP16_BIT 16
#define USBEoTIntSt_EP17_MASK 0x20000
#define USBEoTIntSt_EP17 0x20000
#define USBEoTIntSt_EP17_BIT 17
#define USBEoTIntSt_EP18_MASK 0x40000
#define USBEoTIntSt_EP18 0x40000
#define USBEoTIntSt_EP18_BIT 18
#define USBEoTIntSt_EP19_MASK 0x80000
#define USBEoTIntSt_EP19 0x80000
#define USBEoTIntSt_EP19_BIT 19
#define USBEoTIntSt_EP20_MASK 0x100000
#define USBEoTIntSt_EP20 0x100000
#define USBEoTIntSt_EP20_BIT 20
#define USBEoTIntSt_EP21_MASK 0x200000
#define USBEoTIntSt_EP21 0x200000
#define USBEoTIntSt_EP21_BIT 21
#define USBEoTIntSt_EP22_MASK 0x400000
#define USBEoTIntSt_EP22 0x400000
#define USBEoTIntSt_EP22_BIT 22
#define USBEoTIntSt_EP23_MASK 0x800000
#define USBEoTIntSt_EP23 0x800000
#define USBEoTIntSt_EP23_BIT 23
#define USBEoTIntSt_EP24_MASK 0x1000000
#define USBEoTIntSt_EP24 0x1000000
#define USBEoTIntSt_EP24_BIT 24
#define USBEoTIntSt_EP25_MASK 0x2000000
#define USBEoTIntSt_EP25 0x2000000
#define USBEoTIntSt_EP25_BIT 25
#define USBEoTIntSt_EP26_MASK 0x4000000
#define USBEoTIntSt_EP26 0x4000000
#define USBEoTIntSt_EP26_BIT 26
#define USBEoTIntSt_EP27_MASK 0x8000000
#define USBEoTIntSt_EP27 0x8000000
#define USBEoTIntSt_EP27_BIT 27
#define USBEoTIntSt_EP28_MASK 0x10000000
#define USBEoTIntSt_EP28 0x10000000
#define USBEoTIntSt_EP28_BIT 28
#define USBEoTIntSt_EP29_MASK 0x20000000
#define USBEoTIntSt_EP29 0x20000000
#define USBEoTIntSt_EP29_BIT 29
#define USBEoTIntSt_EP30_MASK 0x40000000
#define USBEoTIntSt_EP30 0x40000000
#define USBEoTIntSt_EP30_BIT 30
#define USBEoTIntSt_EP31_MASK 0x80000000
#define USBEoTIntSt_EP31 0x80000000
#define USBEoTIntSt_EP31_BIT 31

#define USBEoTIntClr (*(volatile unsigned *)0xE00900A4)
#define USBEoTIntClr_OFFSET 0xA4
#define USBEoTIntClr_EP0_MASK 0x1
#define USBEoTIntClr_EP0 0x1
#define USBEoTIntClr_EP0_BIT 0
#define USBEoTIntClr_EP1_MASK 0x2
#define USBEoTIntClr_EP1 0x2
#define USBEoTIntClr_EP1_BIT 1
#define USBEoTIntClr_EP2_MASK 0x4
#define USBEoTIntClr_EP2 0x4
#define USBEoTIntClr_EP2_BIT 2
#define USBEoTIntClr_EP3_MASK 0x8
#define USBEoTIntClr_EP3 0x8
#define USBEoTIntClr_EP3_BIT 3
#define USBEoTIntClr_EP4_MASK 0x10
#define USBEoTIntClr_EP4 0x10
#define USBEoTIntClr_EP4_BIT 4
#define USBEoTIntClr_EP5_MASK 0x20
#define USBEoTIntClr_EP5 0x20
#define USBEoTIntClr_EP5_BIT 5
#define USBEoTIntClr_EP6_MASK 0x40
#define USBEoTIntClr_EP6 0x40
#define USBEoTIntClr_EP6_BIT 6
#define USBEoTIntClr_EP7_MASK 0x80
#define USBEoTIntClr_EP7 0x80
#define USBEoTIntClr_EP7_BIT 7
#define USBEoTIntClr_EP8_MASK 0x100
#define USBEoTIntClr_EP8 0x100
#define USBEoTIntClr_EP8_BIT 8
#define USBEoTIntClr_EP9_MASK 0x200
#define USBEoTIntClr_EP9 0x200
#define USBEoTIntClr_EP9_BIT 9
#define USBEoTIntClr_EP10_MASK 0x400
#define USBEoTIntClr_EP10 0x400
#define USBEoTIntClr_EP10_BIT 10
#define USBEoTIntClr_EP11_MASK 0x800
#define USBEoTIntClr_EP11 0x800
#define USBEoTIntClr_EP11_BIT 11
#define USBEoTIntClr_EP12_MASK 0x1000
#define USBEoTIntClr_EP12 0x1000
#define USBEoTIntClr_EP12_BIT 12
#define USBEoTIntClr_EP13_MASK 0x2000
#define USBEoTIntClr_EP13 0x2000
#define USBEoTIntClr_EP13_BIT 13
#define USBEoTIntClr_EP14_MASK 0x4000
#define USBEoTIntClr_EP14 0x4000
#define USBEoTIntClr_EP14_BIT 14
#define USBEoTIntClr_EP15_MASK 0x8000
#define USBEoTIntClr_EP15 0x8000
#define USBEoTIntClr_EP15_BIT 15
#define USBEoTIntClr_EP16_MASK 0x10000
#define USBEoTIntClr_EP16 0x10000
#define USBEoTIntClr_EP16_BIT 16
#define USBEoTIntClr_EP17_MASK 0x20000
#define USBEoTIntClr_EP17 0x20000
#define USBEoTIntClr_EP17_BIT 17
#define USBEoTIntClr_EP18_MASK 0x40000
#define USBEoTIntClr_EP18 0x40000
#define USBEoTIntClr_EP18_BIT 18
#define USBEoTIntClr_EP19_MASK 0x80000
#define USBEoTIntClr_EP19 0x80000
#define USBEoTIntClr_EP19_BIT 19
#define USBEoTIntClr_EP20_MASK 0x100000
#define USBEoTIntClr_EP20 0x100000
#define USBEoTIntClr_EP20_BIT 20
#define USBEoTIntClr_EP21_MASK 0x200000
#define USBEoTIntClr_EP21 0x200000
#define USBEoTIntClr_EP21_BIT 21
#define USBEoTIntClr_EP22_MASK 0x400000
#define USBEoTIntClr_EP22 0x400000
#define USBEoTIntClr_EP22_BIT 22
#define USBEoTIntClr_EP23_MASK 0x800000
#define USBEoTIntClr_EP23 0x800000
#define USBEoTIntClr_EP23_BIT 23
#define USBEoTIntClr_EP24_MASK 0x1000000
#define USBEoTIntClr_EP24 0x1000000
#define USBEoTIntClr_EP24_BIT 24
#define USBEoTIntClr_EP25_MASK 0x2000000
#define USBEoTIntClr_EP25 0x2000000
#define USBEoTIntClr_EP25_BIT 25
#define USBEoTIntClr_EP26_MASK 0x4000000
#define USBEoTIntClr_EP26 0x4000000
#define USBEoTIntClr_EP26_BIT 26
#define USBEoTIntClr_EP27_MASK 0x8000000
#define USBEoTIntClr_EP27 0x8000000
#define USBEoTIntClr_EP27_BIT 27
#define USBEoTIntClr_EP28_MASK 0x10000000
#define USBEoTIntClr_EP28 0x10000000
#define USBEoTIntClr_EP28_BIT 28
#define USBEoTIntClr_EP29_MASK 0x20000000
#define USBEoTIntClr_EP29 0x20000000
#define USBEoTIntClr_EP29_BIT 29
#define USBEoTIntClr_EP30_MASK 0x40000000
#define USBEoTIntClr_EP30 0x40000000
#define USBEoTIntClr_EP30_BIT 30
#define USBEoTIntClr_EP31_MASK 0x80000000
#define USBEoTIntClr_EP31 0x80000000
#define USBEoTIntClr_EP31_BIT 31

#define USBEoTIntSet (*(volatile unsigned *)0xE00900A8)
#define USBEoTIntSet_OFFSET 0xA8
#define USBEoTIntSet_EP0_MASK 0x1
#define USBEoTIntSet_EP0 0x1
#define USBEoTIntSet_EP0_BIT 0
#define USBEoTIntSet_EP1_MASK 0x2
#define USBEoTIntSet_EP1 0x2
#define USBEoTIntSet_EP1_BIT 1
#define USBEoTIntSet_EP2_MASK 0x4
#define USBEoTIntSet_EP2 0x4
#define USBEoTIntSet_EP2_BIT 2
#define USBEoTIntSet_EP3_MASK 0x8
#define USBEoTIntSet_EP3 0x8
#define USBEoTIntSet_EP3_BIT 3
#define USBEoTIntSet_EP4_MASK 0x10
#define USBEoTIntSet_EP4 0x10
#define USBEoTIntSet_EP4_BIT 4
#define USBEoTIntSet_EP5_MASK 0x20
#define USBEoTIntSet_EP5 0x20
#define USBEoTIntSet_EP5_BIT 5
#define USBEoTIntSet_EP6_MASK 0x40
#define USBEoTIntSet_EP6 0x40
#define USBEoTIntSet_EP6_BIT 6
#define USBEoTIntSet_EP7_MASK 0x80
#define USBEoTIntSet_EP7 0x80
#define USBEoTIntSet_EP7_BIT 7
#define USBEoTIntSet_EP8_MASK 0x100
#define USBEoTIntSet_EP8 0x100
#define USBEoTIntSet_EP8_BIT 8
#define USBEoTIntSet_EP9_MASK 0x200
#define USBEoTIntSet_EP9 0x200
#define USBEoTIntSet_EP9_BIT 9
#define USBEoTIntSet_EP10_MASK 0x400
#define USBEoTIntSet_EP10 0x400
#define USBEoTIntSet_EP10_BIT 10
#define USBEoTIntSet_EP11_MASK 0x800
#define USBEoTIntSet_EP11 0x800
#define USBEoTIntSet_EP11_BIT 11
#define USBEoTIntSet_EP12_MASK 0x1000
#define USBEoTIntSet_EP12 0x1000
#define USBEoTIntSet_EP12_BIT 12
#define USBEoTIntSet_EP13_MASK 0x2000
#define USBEoTIntSet_EP13 0x2000
#define USBEoTIntSet_EP13_BIT 13
#define USBEoTIntSet_EP14_MASK 0x4000
#define USBEoTIntSet_EP14 0x4000
#define USBEoTIntSet_EP14_BIT 14
#define USBEoTIntSet_EP15_MASK 0x8000
#define USBEoTIntSet_EP15 0x8000
#define USBEoTIntSet_EP15_BIT 15
#define USBEoTIntSet_EP16_MASK 0x10000
#define USBEoTIntSet_EP16 0x10000
#define USBEoTIntSet_EP16_BIT 16
#define USBEoTIntSet_EP17_MASK 0x20000
#define USBEoTIntSet_EP17 0x20000
#define USBEoTIntSet_EP17_BIT 17
#define USBEoTIntSet_EP18_MASK 0x40000
#define USBEoTIntSet_EP18 0x40000
#define USBEoTIntSet_EP18_BIT 18
#define USBEoTIntSet_EP19_MASK 0x80000
#define USBEoTIntSet_EP19 0x80000
#define USBEoTIntSet_EP19_BIT 19
#define USBEoTIntSet_EP20_MASK 0x100000
#define USBEoTIntSet_EP20 0x100000
#define USBEoTIntSet_EP20_BIT 20
#define USBEoTIntSet_EP21_MASK 0x200000
#define USBEoTIntSet_EP21 0x200000
#define USBEoTIntSet_EP21_BIT 21
#define USBEoTIntSet_EP22_MASK 0x400000
#define USBEoTIntSet_EP22 0x400000
#define USBEoTIntSet_EP22_BIT 22
#define USBEoTIntSet_EP23_MASK 0x800000
#define USBEoTIntSet_EP23 0x800000
#define USBEoTIntSet_EP23_BIT 23
#define USBEoTIntSet_EP24_MASK 0x1000000
#define USBEoTIntSet_EP24 0x1000000
#define USBEoTIntSet_EP24_BIT 24
#define USBEoTIntSet_EP25_MASK 0x2000000
#define USBEoTIntSet_EP25 0x2000000
#define USBEoTIntSet_EP25_BIT 25
#define USBEoTIntSet_EP26_MASK 0x4000000
#define USBEoTIntSet_EP26 0x4000000
#define USBEoTIntSet_EP26_BIT 26
#define USBEoTIntSet_EP27_MASK 0x8000000
#define USBEoTIntSet_EP27 0x8000000
#define USBEoTIntSet_EP27_BIT 27
#define USBEoTIntSet_EP28_MASK 0x10000000
#define USBEoTIntSet_EP28 0x10000000
#define USBEoTIntSet_EP28_BIT 28
#define USBEoTIntSet_EP29_MASK 0x20000000
#define USBEoTIntSet_EP29 0x20000000
#define USBEoTIntSet_EP29_BIT 29
#define USBEoTIntSet_EP30_MASK 0x40000000
#define USBEoTIntSet_EP30 0x40000000
#define USBEoTIntSet_EP30_BIT 30
#define USBEoTIntSet_EP31_MASK 0x80000000
#define USBEoTIntSet_EP31 0x80000000
#define USBEoTIntSet_EP31_BIT 31

#define USBNDDRIntSt (*(volatile unsigned *)0xE00900AC)
#define USBNDDRIntSt_OFFSET 0xAC
#define USBNDDRIntSt_EP0_MASK 0x1
#define USBNDDRIntSt_EP0 0x1
#define USBNDDRIntSt_EP0_BIT 0
#define USBNDDRIntSt_EP1_MASK 0x2
#define USBNDDRIntSt_EP1 0x2
#define USBNDDRIntSt_EP1_BIT 1
#define USBNDDRIntSt_EP2_MASK 0x4
#define USBNDDRIntSt_EP2 0x4
#define USBNDDRIntSt_EP2_BIT 2
#define USBNDDRIntSt_EP3_MASK 0x8
#define USBNDDRIntSt_EP3 0x8
#define USBNDDRIntSt_EP3_BIT 3
#define USBNDDRIntSt_EP4_MASK 0x10
#define USBNDDRIntSt_EP4 0x10
#define USBNDDRIntSt_EP4_BIT 4
#define USBNDDRIntSt_EP5_MASK 0x20
#define USBNDDRIntSt_EP5 0x20
#define USBNDDRIntSt_EP5_BIT 5
#define USBNDDRIntSt_EP6_MASK 0x40
#define USBNDDRIntSt_EP6 0x40
#define USBNDDRIntSt_EP6_BIT 6
#define USBNDDRIntSt_EP7_MASK 0x80
#define USBNDDRIntSt_EP7 0x80
#define USBNDDRIntSt_EP7_BIT 7
#define USBNDDRIntSt_EP8_MASK 0x100
#define USBNDDRIntSt_EP8 0x100
#define USBNDDRIntSt_EP8_BIT 8
#define USBNDDRIntSt_EP9_MASK 0x200
#define USBNDDRIntSt_EP9 0x200
#define USBNDDRIntSt_EP9_BIT 9
#define USBNDDRIntSt_EP10_MASK 0x400
#define USBNDDRIntSt_EP10 0x400
#define USBNDDRIntSt_EP10_BIT 10
#define USBNDDRIntSt_EP11_MASK 0x800
#define USBNDDRIntSt_EP11 0x800
#define USBNDDRIntSt_EP11_BIT 11
#define USBNDDRIntSt_EP12_MASK 0x1000
#define USBNDDRIntSt_EP12 0x1000
#define USBNDDRIntSt_EP12_BIT 12
#define USBNDDRIntSt_EP13_MASK 0x2000
#define USBNDDRIntSt_EP13 0x2000
#define USBNDDRIntSt_EP13_BIT 13
#define USBNDDRIntSt_EP14_MASK 0x4000
#define USBNDDRIntSt_EP14 0x4000
#define USBNDDRIntSt_EP14_BIT 14
#define USBNDDRIntSt_EP15_MASK 0x8000
#define USBNDDRIntSt_EP15 0x8000
#define USBNDDRIntSt_EP15_BIT 15
#define USBNDDRIntSt_EP16_MASK 0x10000
#define USBNDDRIntSt_EP16 0x10000
#define USBNDDRIntSt_EP16_BIT 16
#define USBNDDRIntSt_EP17_MASK 0x20000
#define USBNDDRIntSt_EP17 0x20000
#define USBNDDRIntSt_EP17_BIT 17
#define USBNDDRIntSt_EP18_MASK 0x40000
#define USBNDDRIntSt_EP18 0x40000
#define USBNDDRIntSt_EP18_BIT 18
#define USBNDDRIntSt_EP19_MASK 0x80000
#define USBNDDRIntSt_EP19 0x80000
#define USBNDDRIntSt_EP19_BIT 19
#define USBNDDRIntSt_EP20_MASK 0x100000
#define USBNDDRIntSt_EP20 0x100000
#define USBNDDRIntSt_EP20_BIT 20
#define USBNDDRIntSt_EP21_MASK 0x200000
#define USBNDDRIntSt_EP21 0x200000
#define USBNDDRIntSt_EP21_BIT 21
#define USBNDDRIntSt_EP22_MASK 0x400000
#define USBNDDRIntSt_EP22 0x400000
#define USBNDDRIntSt_EP22_BIT 22
#define USBNDDRIntSt_EP23_MASK 0x800000
#define USBNDDRIntSt_EP23 0x800000
#define USBNDDRIntSt_EP23_BIT 23
#define USBNDDRIntSt_EP24_MASK 0x1000000
#define USBNDDRIntSt_EP24 0x1000000
#define USBNDDRIntSt_EP24_BIT 24
#define USBNDDRIntSt_EP25_MASK 0x2000000
#define USBNDDRIntSt_EP25 0x2000000
#define USBNDDRIntSt_EP25_BIT 25
#define USBNDDRIntSt_EP26_MASK 0x4000000
#define USBNDDRIntSt_EP26 0x4000000
#define USBNDDRIntSt_EP26_BIT 26
#define USBNDDRIntSt_EP27_MASK 0x8000000
#define USBNDDRIntSt_EP27 0x8000000
#define USBNDDRIntSt_EP27_BIT 27
#define USBNDDRIntSt_EP28_MASK 0x10000000
#define USBNDDRIntSt_EP28 0x10000000
#define USBNDDRIntSt_EP28_BIT 28
#define USBNDDRIntSt_EP29_MASK 0x20000000
#define USBNDDRIntSt_EP29 0x20000000
#define USBNDDRIntSt_EP29_BIT 29
#define USBNDDRIntSt_EP30_MASK 0x40000000
#define USBNDDRIntSt_EP30 0x40000000
#define USBNDDRIntSt_EP30_BIT 30
#define USBNDDRIntSt_EP31_MASK 0x80000000
#define USBNDDRIntSt_EP31 0x80000000
#define USBNDDRIntSt_EP31_BIT 31

#define USBNDDRIntClr (*(volatile unsigned *)0xE00900B0)
#define USBNDDRIntClr_OFFSET 0xB0
#define USBNDDRIntClr_EP0_MASK 0x1
#define USBNDDRIntClr_EP0 0x1
#define USBNDDRIntClr_EP0_BIT 0
#define USBNDDRIntClr_EP1_MASK 0x2
#define USBNDDRIntClr_EP1 0x2
#define USBNDDRIntClr_EP1_BIT 1
#define USBNDDRIntClr_EP2_MASK 0x4
#define USBNDDRIntClr_EP2 0x4
#define USBNDDRIntClr_EP2_BIT 2
#define USBNDDRIntClr_EP3_MASK 0x8
#define USBNDDRIntClr_EP3 0x8
#define USBNDDRIntClr_EP3_BIT 3
#define USBNDDRIntClr_EP4_MASK 0x10
#define USBNDDRIntClr_EP4 0x10
#define USBNDDRIntClr_EP4_BIT 4
#define USBNDDRIntClr_EP5_MASK 0x20
#define USBNDDRIntClr_EP5 0x20
#define USBNDDRIntClr_EP5_BIT 5
#define USBNDDRIntClr_EP6_MASK 0x40
#define USBNDDRIntClr_EP6 0x40
#define USBNDDRIntClr_EP6_BIT 6
#define USBNDDRIntClr_EP7_MASK 0x80
#define USBNDDRIntClr_EP7 0x80
#define USBNDDRIntClr_EP7_BIT 7
#define USBNDDRIntClr_EP8_MASK 0x100
#define USBNDDRIntClr_EP8 0x100
#define USBNDDRIntClr_EP8_BIT 8
#define USBNDDRIntClr_EP9_MASK 0x200
#define USBNDDRIntClr_EP9 0x200
#define USBNDDRIntClr_EP9_BIT 9
#define USBNDDRIntClr_EP10_MASK 0x400
#define USBNDDRIntClr_EP10 0x400
#define USBNDDRIntClr_EP10_BIT 10
#define USBNDDRIntClr_EP11_MASK 0x800
#define USBNDDRIntClr_EP11 0x800
#define USBNDDRIntClr_EP11_BIT 11
#define USBNDDRIntClr_EP12_MASK 0x1000
#define USBNDDRIntClr_EP12 0x1000
#define USBNDDRIntClr_EP12_BIT 12
#define USBNDDRIntClr_EP13_MASK 0x2000
#define USBNDDRIntClr_EP13 0x2000
#define USBNDDRIntClr_EP13_BIT 13
#define USBNDDRIntClr_EP14_MASK 0x4000
#define USBNDDRIntClr_EP14 0x4000
#define USBNDDRIntClr_EP14_BIT 14
#define USBNDDRIntClr_EP15_MASK 0x8000
#define USBNDDRIntClr_EP15 0x8000
#define USBNDDRIntClr_EP15_BIT 15
#define USBNDDRIntClr_EP16_MASK 0x10000
#define USBNDDRIntClr_EP16 0x10000
#define USBNDDRIntClr_EP16_BIT 16
#define USBNDDRIntClr_EP17_MASK 0x20000
#define USBNDDRIntClr_EP17 0x20000
#define USBNDDRIntClr_EP17_BIT 17
#define USBNDDRIntClr_EP18_MASK 0x40000
#define USBNDDRIntClr_EP18 0x40000
#define USBNDDRIntClr_EP18_BIT 18
#define USBNDDRIntClr_EP19_MASK 0x80000
#define USBNDDRIntClr_EP19 0x80000
#define USBNDDRIntClr_EP19_BIT 19
#define USBNDDRIntClr_EP20_MASK 0x100000
#define USBNDDRIntClr_EP20 0x100000
#define USBNDDRIntClr_EP20_BIT 20
#define USBNDDRIntClr_EP21_MASK 0x200000
#define USBNDDRIntClr_EP21 0x200000
#define USBNDDRIntClr_EP21_BIT 21
#define USBNDDRIntClr_EP22_MASK 0x400000
#define USBNDDRIntClr_EP22 0x400000
#define USBNDDRIntClr_EP22_BIT 22
#define USBNDDRIntClr_EP23_MASK 0x800000
#define USBNDDRIntClr_EP23 0x800000
#define USBNDDRIntClr_EP23_BIT 23
#define USBNDDRIntClr_EP24_MASK 0x1000000
#define USBNDDRIntClr_EP24 0x1000000
#define USBNDDRIntClr_EP24_BIT 24
#define USBNDDRIntClr_EP25_MASK 0x2000000
#define USBNDDRIntClr_EP25 0x2000000
#define USBNDDRIntClr_EP25_BIT 25
#define USBNDDRIntClr_EP26_MASK 0x4000000
#define USBNDDRIntClr_EP26 0x4000000
#define USBNDDRIntClr_EP26_BIT 26
#define USBNDDRIntClr_EP27_MASK 0x8000000
#define USBNDDRIntClr_EP27 0x8000000
#define USBNDDRIntClr_EP27_BIT 27
#define USBNDDRIntClr_EP28_MASK 0x10000000
#define USBNDDRIntClr_EP28 0x10000000
#define USBNDDRIntClr_EP28_BIT 28
#define USBNDDRIntClr_EP29_MASK 0x20000000
#define USBNDDRIntClr_EP29 0x20000000
#define USBNDDRIntClr_EP29_BIT 29
#define USBNDDRIntClr_EP30_MASK 0x40000000
#define USBNDDRIntClr_EP30 0x40000000
#define USBNDDRIntClr_EP30_BIT 30
#define USBNDDRIntClr_EP31_MASK 0x80000000
#define USBNDDRIntClr_EP31 0x80000000
#define USBNDDRIntClr_EP31_BIT 31

#define USBNDDRIntSet (*(volatile unsigned *)0xE00900B4)
#define USBNDDRIntSet_OFFSET 0xB4
#define USBNDDRIntSet_EP0_MASK 0x1
#define USBNDDRIntSet_EP0 0x1
#define USBNDDRIntSet_EP0_BIT 0
#define USBNDDRIntSet_EP1_MASK 0x2
#define USBNDDRIntSet_EP1 0x2
#define USBNDDRIntSet_EP1_BIT 1
#define USBNDDRIntSet_EP2_MASK 0x4
#define USBNDDRIntSet_EP2 0x4
#define USBNDDRIntSet_EP2_BIT 2
#define USBNDDRIntSet_EP3_MASK 0x8
#define USBNDDRIntSet_EP3 0x8
#define USBNDDRIntSet_EP3_BIT 3
#define USBNDDRIntSet_EP4_MASK 0x10
#define USBNDDRIntSet_EP4 0x10
#define USBNDDRIntSet_EP4_BIT 4
#define USBNDDRIntSet_EP5_MASK 0x20
#define USBNDDRIntSet_EP5 0x20
#define USBNDDRIntSet_EP5_BIT 5
#define USBNDDRIntSet_EP6_MASK 0x40
#define USBNDDRIntSet_EP6 0x40
#define USBNDDRIntSet_EP6_BIT 6
#define USBNDDRIntSet_EP7_MASK 0x80
#define USBNDDRIntSet_EP7 0x80
#define USBNDDRIntSet_EP7_BIT 7
#define USBNDDRIntSet_EP8_MASK 0x100
#define USBNDDRIntSet_EP8 0x100
#define USBNDDRIntSet_EP8_BIT 8
#define USBNDDRIntSet_EP9_MASK 0x200
#define USBNDDRIntSet_EP9 0x200
#define USBNDDRIntSet_EP9_BIT 9
#define USBNDDRIntSet_EP10_MASK 0x400
#define USBNDDRIntSet_EP10 0x400
#define USBNDDRIntSet_EP10_BIT 10
#define USBNDDRIntSet_EP11_MASK 0x800
#define USBNDDRIntSet_EP11 0x800
#define USBNDDRIntSet_EP11_BIT 11
#define USBNDDRIntSet_EP12_MASK 0x1000
#define USBNDDRIntSet_EP12 0x1000
#define USBNDDRIntSet_EP12_BIT 12
#define USBNDDRIntSet_EP13_MASK 0x2000
#define USBNDDRIntSet_EP13 0x2000
#define USBNDDRIntSet_EP13_BIT 13
#define USBNDDRIntSet_EP14_MASK 0x4000
#define USBNDDRIntSet_EP14 0x4000
#define USBNDDRIntSet_EP14_BIT 14
#define USBNDDRIntSet_EP15_MASK 0x8000
#define USBNDDRIntSet_EP15 0x8000
#define USBNDDRIntSet_EP15_BIT 15
#define USBNDDRIntSet_EP16_MASK 0x10000
#define USBNDDRIntSet_EP16 0x10000
#define USBNDDRIntSet_EP16_BIT 16
#define USBNDDRIntSet_EP17_MASK 0x20000
#define USBNDDRIntSet_EP17 0x20000
#define USBNDDRIntSet_EP17_BIT 17
#define USBNDDRIntSet_EP18_MASK 0x40000
#define USBNDDRIntSet_EP18 0x40000
#define USBNDDRIntSet_EP18_BIT 18
#define USBNDDRIntSet_EP19_MASK 0x80000
#define USBNDDRIntSet_EP19 0x80000
#define USBNDDRIntSet_EP19_BIT 19
#define USBNDDRIntSet_EP20_MASK 0x100000
#define USBNDDRIntSet_EP20 0x100000
#define USBNDDRIntSet_EP20_BIT 20
#define USBNDDRIntSet_EP21_MASK 0x200000
#define USBNDDRIntSet_EP21 0x200000
#define USBNDDRIntSet_EP21_BIT 21
#define USBNDDRIntSet_EP22_MASK 0x400000
#define USBNDDRIntSet_EP22 0x400000
#define USBNDDRIntSet_EP22_BIT 22
#define USBNDDRIntSet_EP23_MASK 0x800000
#define USBNDDRIntSet_EP23 0x800000
#define USBNDDRIntSet_EP23_BIT 23
#define USBNDDRIntSet_EP24_MASK 0x1000000
#define USBNDDRIntSet_EP24 0x1000000
#define USBNDDRIntSet_EP24_BIT 24
#define USBNDDRIntSet_EP25_MASK 0x2000000
#define USBNDDRIntSet_EP25 0x2000000
#define USBNDDRIntSet_EP25_BIT 25
#define USBNDDRIntSet_EP26_MASK 0x4000000
#define USBNDDRIntSet_EP26 0x4000000
#define USBNDDRIntSet_EP26_BIT 26
#define USBNDDRIntSet_EP27_MASK 0x8000000
#define USBNDDRIntSet_EP27 0x8000000
#define USBNDDRIntSet_EP27_BIT 27
#define USBNDDRIntSet_EP28_MASK 0x10000000
#define USBNDDRIntSet_EP28 0x10000000
#define USBNDDRIntSet_EP28_BIT 28
#define USBNDDRIntSet_EP29_MASK 0x20000000
#define USBNDDRIntSet_EP29 0x20000000
#define USBNDDRIntSet_EP29_BIT 29
#define USBNDDRIntSet_EP30_MASK 0x40000000
#define USBNDDRIntSet_EP30 0x40000000
#define USBNDDRIntSet_EP30_BIT 30
#define USBNDDRIntSet_EP31_MASK 0x80000000
#define USBNDDRIntSet_EP31 0x80000000
#define USBNDDRIntSet_EP31_BIT 31

#define USBSysErrIntSt (*(volatile unsigned *)0xE00900B8)
#define USBSysErrIntSt_OFFSET 0xB8
#define USBSysErrIntSt_EP0_MASK 0x1
#define USBSysErrIntSt_EP0 0x1
#define USBSysErrIntSt_EP0_BIT 0
#define USBSysErrIntSt_EP1_MASK 0x2
#define USBSysErrIntSt_EP1 0x2
#define USBSysErrIntSt_EP1_BIT 1
#define USBSysErrIntSt_EP2_MASK 0x4
#define USBSysErrIntSt_EP2 0x4
#define USBSysErrIntSt_EP2_BIT 2
#define USBSysErrIntSt_EP3_MASK 0x8
#define USBSysErrIntSt_EP3 0x8
#define USBSysErrIntSt_EP3_BIT 3
#define USBSysErrIntSt_EP4_MASK 0x10
#define USBSysErrIntSt_EP4 0x10
#define USBSysErrIntSt_EP4_BIT 4
#define USBSysErrIntSt_EP5_MASK 0x20
#define USBSysErrIntSt_EP5 0x20
#define USBSysErrIntSt_EP5_BIT 5
#define USBSysErrIntSt_EP6_MASK 0x40
#define USBSysErrIntSt_EP6 0x40
#define USBSysErrIntSt_EP6_BIT 6
#define USBSysErrIntSt_EP7_MASK 0x80
#define USBSysErrIntSt_EP7 0x80
#define USBSysErrIntSt_EP7_BIT 7
#define USBSysErrIntSt_EP8_MASK 0x100
#define USBSysErrIntSt_EP8 0x100
#define USBSysErrIntSt_EP8_BIT 8
#define USBSysErrIntSt_EP9_MASK 0x200
#define USBSysErrIntSt_EP9 0x200
#define USBSysErrIntSt_EP9_BIT 9
#define USBSysErrIntSt_EP10_MASK 0x400
#define USBSysErrIntSt_EP10 0x400
#define USBSysErrIntSt_EP10_BIT 10
#define USBSysErrIntSt_EP11_MASK 0x800
#define USBSysErrIntSt_EP11 0x800
#define USBSysErrIntSt_EP11_BIT 11
#define USBSysErrIntSt_EP12_MASK 0x1000
#define USBSysErrIntSt_EP12 0x1000
#define USBSysErrIntSt_EP12_BIT 12
#define USBSysErrIntSt_EP13_MASK 0x2000
#define USBSysErrIntSt_EP13 0x2000
#define USBSysErrIntSt_EP13_BIT 13
#define USBSysErrIntSt_EP14_MASK 0x4000
#define USBSysErrIntSt_EP14 0x4000
#define USBSysErrIntSt_EP14_BIT 14
#define USBSysErrIntSt_EP15_MASK 0x8000
#define USBSysErrIntSt_EP15 0x8000
#define USBSysErrIntSt_EP15_BIT 15
#define USBSysErrIntSt_EP16_MASK 0x10000
#define USBSysErrIntSt_EP16 0x10000
#define USBSysErrIntSt_EP16_BIT 16
#define USBSysErrIntSt_EP17_MASK 0x20000
#define USBSysErrIntSt_EP17 0x20000
#define USBSysErrIntSt_EP17_BIT 17
#define USBSysErrIntSt_EP18_MASK 0x40000
#define USBSysErrIntSt_EP18 0x40000
#define USBSysErrIntSt_EP18_BIT 18
#define USBSysErrIntSt_EP19_MASK 0x80000
#define USBSysErrIntSt_EP19 0x80000
#define USBSysErrIntSt_EP19_BIT 19
#define USBSysErrIntSt_EP20_MASK 0x100000
#define USBSysErrIntSt_EP20 0x100000
#define USBSysErrIntSt_EP20_BIT 20
#define USBSysErrIntSt_EP21_MASK 0x200000
#define USBSysErrIntSt_EP21 0x200000
#define USBSysErrIntSt_EP21_BIT 21
#define USBSysErrIntSt_EP22_MASK 0x400000
#define USBSysErrIntSt_EP22 0x400000
#define USBSysErrIntSt_EP22_BIT 22
#define USBSysErrIntSt_EP23_MASK 0x800000
#define USBSysErrIntSt_EP23 0x800000
#define USBSysErrIntSt_EP23_BIT 23
#define USBSysErrIntSt_EP24_MASK 0x1000000
#define USBSysErrIntSt_EP24 0x1000000
#define USBSysErrIntSt_EP24_BIT 24
#define USBSysErrIntSt_EP25_MASK 0x2000000
#define USBSysErrIntSt_EP25 0x2000000
#define USBSysErrIntSt_EP25_BIT 25
#define USBSysErrIntSt_EP26_MASK 0x4000000
#define USBSysErrIntSt_EP26 0x4000000
#define USBSysErrIntSt_EP26_BIT 26
#define USBSysErrIntSt_EP27_MASK 0x8000000
#define USBSysErrIntSt_EP27 0x8000000
#define USBSysErrIntSt_EP27_BIT 27
#define USBSysErrIntSt_EP28_MASK 0x10000000
#define USBSysErrIntSt_EP28 0x10000000
#define USBSysErrIntSt_EP28_BIT 28
#define USBSysErrIntSt_EP29_MASK 0x20000000
#define USBSysErrIntSt_EP29 0x20000000
#define USBSysErrIntSt_EP29_BIT 29
#define USBSysErrIntSt_EP30_MASK 0x40000000
#define USBSysErrIntSt_EP30 0x40000000
#define USBSysErrIntSt_EP30_BIT 30
#define USBSysErrIntSt_EP31_MASK 0x80000000
#define USBSysErrIntSt_EP31 0x80000000
#define USBSysErrIntSt_EP31_BIT 31

#define USBSysErrIntClr (*(volatile unsigned *)0xE00900BC)
#define USBSysErrIntClr_OFFSET 0xBC
#define USBSysErrIntClr_EP0_MASK 0x1
#define USBSysErrIntClr_EP0 0x1
#define USBSysErrIntClr_EP0_BIT 0
#define USBSysErrIntClr_EP1_MASK 0x2
#define USBSysErrIntClr_EP1 0x2
#define USBSysErrIntClr_EP1_BIT 1
#define USBSysErrIntClr_EP2_MASK 0x4
#define USBSysErrIntClr_EP2 0x4
#define USBSysErrIntClr_EP2_BIT 2
#define USBSysErrIntClr_EP3_MASK 0x8
#define USBSysErrIntClr_EP3 0x8
#define USBSysErrIntClr_EP3_BIT 3
#define USBSysErrIntClr_EP4_MASK 0x10
#define USBSysErrIntClr_EP4 0x10
#define USBSysErrIntClr_EP4_BIT 4
#define USBSysErrIntClr_EP5_MASK 0x20
#define USBSysErrIntClr_EP5 0x20
#define USBSysErrIntClr_EP5_BIT 5
#define USBSysErrIntClr_EP6_MASK 0x40
#define USBSysErrIntClr_EP6 0x40
#define USBSysErrIntClr_EP6_BIT 6
#define USBSysErrIntClr_EP7_MASK 0x80
#define USBSysErrIntClr_EP7 0x80
#define USBSysErrIntClr_EP7_BIT 7
#define USBSysErrIntClr_EP8_MASK 0x100
#define USBSysErrIntClr_EP8 0x100
#define USBSysErrIntClr_EP8_BIT 8
#define USBSysErrIntClr_EP9_MASK 0x200
#define USBSysErrIntClr_EP9 0x200
#define USBSysErrIntClr_EP9_BIT 9
#define USBSysErrIntClr_EP10_MASK 0x400
#define USBSysErrIntClr_EP10 0x400
#define USBSysErrIntClr_EP10_BIT 10
#define USBSysErrIntClr_EP11_MASK 0x800
#define USBSysErrIntClr_EP11 0x800
#define USBSysErrIntClr_EP11_BIT 11
#define USBSysErrIntClr_EP12_MASK 0x1000
#define USBSysErrIntClr_EP12 0x1000
#define USBSysErrIntClr_EP12_BIT 12
#define USBSysErrIntClr_EP13_MASK 0x2000
#define USBSysErrIntClr_EP13 0x2000
#define USBSysErrIntClr_EP13_BIT 13
#define USBSysErrIntClr_EP14_MASK 0x4000
#define USBSysErrIntClr_EP14 0x4000
#define USBSysErrIntClr_EP14_BIT 14
#define USBSysErrIntClr_EP15_MASK 0x8000
#define USBSysErrIntClr_EP15 0x8000
#define USBSysErrIntClr_EP15_BIT 15
#define USBSysErrIntClr_EP16_MASK 0x10000
#define USBSysErrIntClr_EP16 0x10000
#define USBSysErrIntClr_EP16_BIT 16
#define USBSysErrIntClr_EP17_MASK 0x20000
#define USBSysErrIntClr_EP17 0x20000
#define USBSysErrIntClr_EP17_BIT 17
#define USBSysErrIntClr_EP18_MASK 0x40000
#define USBSysErrIntClr_EP18 0x40000
#define USBSysErrIntClr_EP18_BIT 18
#define USBSysErrIntClr_EP19_MASK 0x80000
#define USBSysErrIntClr_EP19 0x80000
#define USBSysErrIntClr_EP19_BIT 19
#define USBSysErrIntClr_EP20_MASK 0x100000
#define USBSysErrIntClr_EP20 0x100000
#define USBSysErrIntClr_EP20_BIT 20
#define USBSysErrIntClr_EP21_MASK 0x200000
#define USBSysErrIntClr_EP21 0x200000
#define USBSysErrIntClr_EP21_BIT 21
#define USBSysErrIntClr_EP22_MASK 0x400000
#define USBSysErrIntClr_EP22 0x400000
#define USBSysErrIntClr_EP22_BIT 22
#define USBSysErrIntClr_EP23_MASK 0x800000
#define USBSysErrIntClr_EP23 0x800000
#define USBSysErrIntClr_EP23_BIT 23
#define USBSysErrIntClr_EP24_MASK 0x1000000
#define USBSysErrIntClr_EP24 0x1000000
#define USBSysErrIntClr_EP24_BIT 24
#define USBSysErrIntClr_EP25_MASK 0x2000000
#define USBSysErrIntClr_EP25 0x2000000
#define USBSysErrIntClr_EP25_BIT 25
#define USBSysErrIntClr_EP26_MASK 0x4000000
#define USBSysErrIntClr_EP26 0x4000000
#define USBSysErrIntClr_EP26_BIT 26
#define USBSysErrIntClr_EP27_MASK 0x8000000
#define USBSysErrIntClr_EP27 0x8000000
#define USBSysErrIntClr_EP27_BIT 27
#define USBSysErrIntClr_EP28_MASK 0x10000000
#define USBSysErrIntClr_EP28 0x10000000
#define USBSysErrIntClr_EP28_BIT 28
#define USBSysErrIntClr_EP29_MASK 0x20000000
#define USBSysErrIntClr_EP29 0x20000000
#define USBSysErrIntClr_EP29_BIT 29
#define USBSysErrIntClr_EP30_MASK 0x40000000
#define USBSysErrIntClr_EP30 0x40000000
#define USBSysErrIntClr_EP30_BIT 30
#define USBSysErrIntClr_EP31_MASK 0x80000000
#define USBSysErrIntClr_EP31 0x80000000
#define USBSysErrIntClr_EP31_BIT 31

#define USBSysErrIntSet (*(volatile unsigned *)0xE00900C0)
#define USBSysErrIntSet_OFFSET 0xC0
#define USBSysErrIntSet_EP0_MASK 0x1
#define USBSysErrIntSet_EP0 0x1
#define USBSysErrIntSet_EP0_BIT 0
#define USBSysErrIntSet_EP1_MASK 0x2
#define USBSysErrIntSet_EP1 0x2
#define USBSysErrIntSet_EP1_BIT 1
#define USBSysErrIntSet_EP2_MASK 0x4
#define USBSysErrIntSet_EP2 0x4
#define USBSysErrIntSet_EP2_BIT 2
#define USBSysErrIntSet_EP3_MASK 0x8
#define USBSysErrIntSet_EP3 0x8
#define USBSysErrIntSet_EP3_BIT 3
#define USBSysErrIntSet_EP4_MASK 0x10
#define USBSysErrIntSet_EP4 0x10
#define USBSysErrIntSet_EP4_BIT 4
#define USBSysErrIntSet_EP5_MASK 0x20
#define USBSysErrIntSet_EP5 0x20
#define USBSysErrIntSet_EP5_BIT 5
#define USBSysErrIntSet_EP6_MASK 0x40
#define USBSysErrIntSet_EP6 0x40
#define USBSysErrIntSet_EP6_BIT 6
#define USBSysErrIntSet_EP7_MASK 0x80
#define USBSysErrIntSet_EP7 0x80
#define USBSysErrIntSet_EP7_BIT 7
#define USBSysErrIntSet_EP8_MASK 0x100
#define USBSysErrIntSet_EP8 0x100
#define USBSysErrIntSet_EP8_BIT 8
#define USBSysErrIntSet_EP9_MASK 0x200
#define USBSysErrIntSet_EP9 0x200
#define USBSysErrIntSet_EP9_BIT 9
#define USBSysErrIntSet_EP10_MASK 0x400
#define USBSysErrIntSet_EP10 0x400
#define USBSysErrIntSet_EP10_BIT 10
#define USBSysErrIntSet_EP11_MASK 0x800
#define USBSysErrIntSet_EP11 0x800
#define USBSysErrIntSet_EP11_BIT 11
#define USBSysErrIntSet_EP12_MASK 0x1000
#define USBSysErrIntSet_EP12 0x1000
#define USBSysErrIntSet_EP12_BIT 12
#define USBSysErrIntSet_EP13_MASK 0x2000
#define USBSysErrIntSet_EP13 0x2000
#define USBSysErrIntSet_EP13_BIT 13
#define USBSysErrIntSet_EP14_MASK 0x4000
#define USBSysErrIntSet_EP14 0x4000
#define USBSysErrIntSet_EP14_BIT 14
#define USBSysErrIntSet_EP15_MASK 0x8000
#define USBSysErrIntSet_EP15 0x8000
#define USBSysErrIntSet_EP15_BIT 15
#define USBSysErrIntSet_EP16_MASK 0x10000
#define USBSysErrIntSet_EP16 0x10000
#define USBSysErrIntSet_EP16_BIT 16
#define USBSysErrIntSet_EP17_MASK 0x20000
#define USBSysErrIntSet_EP17 0x20000
#define USBSysErrIntSet_EP17_BIT 17
#define USBSysErrIntSet_EP18_MASK 0x40000
#define USBSysErrIntSet_EP18 0x40000
#define USBSysErrIntSet_EP18_BIT 18
#define USBSysErrIntSet_EP19_MASK 0x80000
#define USBSysErrIntSet_EP19 0x80000
#define USBSysErrIntSet_EP19_BIT 19
#define USBSysErrIntSet_EP20_MASK 0x100000
#define USBSysErrIntSet_EP20 0x100000
#define USBSysErrIntSet_EP20_BIT 20
#define USBSysErrIntSet_EP21_MASK 0x200000
#define USBSysErrIntSet_EP21 0x200000
#define USBSysErrIntSet_EP21_BIT 21
#define USBSysErrIntSet_EP22_MASK 0x400000
#define USBSysErrIntSet_EP22 0x400000
#define USBSysErrIntSet_EP22_BIT 22
#define USBSysErrIntSet_EP23_MASK 0x800000
#define USBSysErrIntSet_EP23 0x800000
#define USBSysErrIntSet_EP23_BIT 23
#define USBSysErrIntSet_EP24_MASK 0x1000000
#define USBSysErrIntSet_EP24 0x1000000
#define USBSysErrIntSet_EP24_BIT 24
#define USBSysErrIntSet_EP25_MASK 0x2000000
#define USBSysErrIntSet_EP25 0x2000000
#define USBSysErrIntSet_EP25_BIT 25
#define USBSysErrIntSet_EP26_MASK 0x4000000
#define USBSysErrIntSet_EP26 0x4000000
#define USBSysErrIntSet_EP26_BIT 26
#define USBSysErrIntSet_EP27_MASK 0x8000000
#define USBSysErrIntSet_EP27 0x8000000
#define USBSysErrIntSet_EP27_BIT 27
#define USBSysErrIntSet_EP28_MASK 0x10000000
#define USBSysErrIntSet_EP28 0x10000000
#define USBSysErrIntSet_EP28_BIT 28
#define USBSysErrIntSet_EP29_MASK 0x20000000
#define USBSysErrIntSet_EP29 0x20000000
#define USBSysErrIntSet_EP29_BIT 29
#define USBSysErrIntSet_EP30_MASK 0x40000000
#define USBSysErrIntSet_EP30 0x40000000
#define USBSysErrIntSet_EP30_BIT 30
#define USBSysErrIntSet_EP31_MASK 0x80000000
#define USBSysErrIntSet_EP31 0x80000000
#define USBSysErrIntSet_EP31_BIT 31

#define SCB_BASE 0xE01FC000

#define MAMCR (*(volatile unsigned char *)0xE01FC000)
#define MAMCR_OFFSET 0x0
#define MAMCR_MAM_mode_control_MASK 0x3
#define MAMCR_MAM_mode_control_BIT 0

#define MAMTIM (*(volatile unsigned char *)0xE01FC004)
#define MAMTIM_OFFSET 0x4
#define MAMTIM_MAM_fetch_cycle_timing_MASK 0x7
#define MAMTIM_MAM_fetch_cycle_timing_BIT 0

#define MEMMAP (*(volatile unsigned char *)0xE01FC040)
#define MEMMAP_OFFSET 0x40
#define MEMMAP_MAP_MASK 0x3
#define MEMMAP_MAP_BIT 0

#define PLL0CON (*(volatile unsigned char *)0xE01FC080)
#define PLL0CON_OFFSET 0x80
#define PLL0CON_PLLE_MASK 0x1
#define PLL0CON_PLLE 0x1
#define PLL0CON_PLLE_BIT 0
#define PLL0CON_PLLC_MASK 0x2
#define PLL0CON_PLLC 0x2
#define PLL0CON_PLLC_BIT 1

#define PLL0CFG (*(volatile unsigned char *)0xE01FC084)
#define PLL0CFG_OFFSET 0x84
#define PLL0CFG_MSEL_MASK 0x1F
#define PLL0CFG_MSEL_BIT 0
#define PLL0CFG_PSEL_MASK 0x60
#define PLL0CFG_PSEL_BIT 5

#define PLL0STAT (*(volatile unsigned short *)0xE01FC088)
#define PLL0STAT_OFFSET 0x88
#define PLL0STAT_MSEL_MASK 0x1F
#define PLL0STAT_MSEL_BIT 0
#define PLL0STAT_PSEL_MASK 0x60
#define PLL0STAT_PSEL_BIT 5
#define PLL0STAT_PLLE_MASK 0x100
#define PLL0STAT_PLLE 0x100
#define PLL0STAT_PLLE_BIT 8
#define PLL0STAT_PLLC_MASK 0x200
#define PLL0STAT_PLLC 0x200
#define PLL0STAT_PLLC_BIT 9
#define PLL0STAT_PLOCK_MASK 0x400
#define PLL0STAT_PLOCK 0x400
#define PLL0STAT_PLOCK_BIT 10

#define PLL0FEED (*(volatile unsigned char *)0xE01FC08C)
#define PLL0FEED_OFFSET 0x8C

#define PLL1CON (*(volatile unsigned char *)0xE01FC0A0)
#define PLL1CON_OFFSET 0xA0
#define PLL1CON_PLLE_MASK 0x1
#define PLL1CON_PLLE 0x1
#define PLL1CON_PLLE_BIT 0
#define PLL1CON_PLLC_MASK 0x2
#define PLL1CON_PLLC 0x2
#define PLL1CON_PLLC_BIT 1

#define PLL1CFG (*(volatile unsigned char *)0xE01FC0A4)
#define PLL1CFG_OFFSET 0xA4
#define PLL1CFG_MSEL_MASK 0xF
#define PLL1CFG_MSEL_BIT 0
#define PLL1CFG_PSEL_MASK 0x60
#define PLL1CFG_PSEL_BIT 5

#define PLL1STAT (*(volatile unsigned short *)0xE01FC0A8)
#define PLL1STAT_OFFSET 0xA8
#define PLL1STAT_MSEL_MASK 0xF
#define PLL1STAT_MSEL_BIT 0
#define PLL1STAT_PSEL_MASK 0x60
#define PLL1STAT_PSEL_BIT 5
#define PLL1STAT_PLLE_MASK 0x100
#define PLL1STAT_PLLE 0x100
#define PLL1STAT_PLLE_BIT 8
#define PLL1STAT_PLLC_MASK 0x200
#define PLL1STAT_PLLC 0x200
#define PLL1STAT_PLLC_BIT 9
#define PLL1STAT_PLOCK_MASK 0x400
#define PLL1STAT_PLOCK 0x400
#define PLL1STAT_PLOCK_BIT 10

#define PLL1FEED (*(volatile unsigned char *)0xE01FC0AC)
#define PLL1FEED_OFFSET 0xAC

#define PCON (*(volatile unsigned char *)0xE01FC0C0)
#define PCON_OFFSET 0xC0
#define PCON_IDL_MASK 0x1
#define PCON_IDL 0x1
#define PCON_IDL_BIT 0
#define PCON_PD_MASK 0x2
#define PCON_PD 0x2
#define PCON_PD_BIT 1
#define PCON_BODPDM_MASK 0x4
#define PCON_BODPDM 0x4
#define PCON_BODPDM_BIT 2
#define PCON_BOGD_MASK 0x8
#define PCON_BOGD 0x8
#define PCON_BOGD_BIT 3
#define PCON_BORD_MASK 0x10
#define PCON_BORD 0x10
#define PCON_BORD_BIT 4

#define PCONP (*(volatile unsigned long *)0xE01FC0C4)
#define PCONP_OFFSET 0xC4
#define PCONP_PCTIM0_MASK 0x2
#define PCONP_PCTIM0 0x2
#define PCONP_PCTIM0_BIT 1
#define PCONP_PCTIM1_MASK 0x4
#define PCONP_PCTIM1 0x4
#define PCONP_PCTIM1_BIT 2
#define PCONP_PCUART0_MASK 0x8
#define PCONP_PCUART0 0x8
#define PCONP_PCUART0_BIT 3
#define PCONP_PCUART1_MASK 0x10
#define PCONP_PCUART1 0x10
#define PCONP_PCUART1_BIT 4
#define PCONP_PCPWM0_MASK 0x20
#define PCONP_PCPWM0 0x20
#define PCONP_PCPWM0_BIT 5
#define PCONP_PCI2C0_MASK 0x80
#define PCONP_PCI2C0 0x80
#define PCONP_PCI2C0_BIT 7
#define PCONP_PCSPI0_MASK 0x100
#define PCONP_PCSPI0 0x100
#define PCONP_PCSPI0_BIT 8
#define PCONP_PCRTC_MASK 0x200
#define PCONP_PCRTC 0x200
#define PCONP_PCRTC_BIT 9
#define PCONP_PCSPI1_MASK 0x400
#define PCONP_PCSPI1 0x400
#define PCONP_PCSPI1_BIT 10
#define PCONP_PCAD0_MASK 0x1000
#define PCONP_PCAD0 0x1000
#define PCONP_PCAD0_BIT 12
#define PCONP_PCI2C1_MASK 0x80000
#define PCONP_PCI2C1 0x80000
#define PCONP_PCI2C1_BIT 19
#define PCONP_PCAD1_MASK 0x100000
#define PCONP_PCAD1 0x100000
#define PCONP_PCAD1_BIT 20
#define PCONP_PUSB_MASK 0x80000000
#define PCONP_PUSB 0x80000000
#define PCONP_PUSB_BIT 31

#define APBDIV (*(volatile unsigned char *)0xE01FC100)
#define APBDIV_OFFSET 0x100
#define APBDIV_APBDIV_MASK 0x3
#define APBDIV_APBDIV_BIT 0

#define RSIR (*(volatile unsigned char *)0xE01FC180)
#define RSIR_OFFSET 0x180
#define RSIR_POR_MASK 0x1
#define RSIR_POR 0x1
#define RSIR_POR_BIT 0
#define RSIR_EXTR_MASK 0x2
#define RSIR_EXTR 0x2
#define RSIR_EXTR_BIT 1
#define RSIR_WDTR_MASK 0x4
#define RSIR_WDTR 0x4
#define RSIR_WDTR_BIT 2
#define RSIR_BODR_MASK 0x8
#define RSIR_BODR 0x8
#define RSIR_BODR_BIT 3

#define CSPR (*(volatile unsigned char *)0xE01FC184)
#define CSPR_OFFSET 0x184

#define SCS (*(volatile unsigned *)0xE01FC1A0)
#define SCS_OFFSET 0x1A0
#define SCS_GPIO0M_MASK 0x1
#define SCS_GPIO0M 0x1
#define SCS_GPIO0M_BIT 0
#define SCS_GPIO1M_MASK 0x2
#define SCS_GPIO1M 0x2
#define SCS_GPIO1M_BIT 1

#define EXTINT (*(volatile unsigned char *)0xE01FC140)
#define EXTINT_OFFSET 0x140
#define EXTINT_EINT0_MASK 0x1
#define EXTINT_EINT0 0x1
#define EXTINT_EINT0_BIT 0
#define EXTINT_EINT1_MASK 0x2
#define EXTINT_EINT1 0x2
#define EXTINT_EINT1_BIT 1
#define EXTINT_EINT2_MASK 0x4
#define EXTINT_EINT2 0x4
#define EXTINT_EINT2_BIT 2
#define EXTINT_EINT3_MASK 0x8
#define EXTINT_EINT3 0x8
#define EXTINT_EINT3_BIT 3

#define INTWAKE (*(volatile unsigned char *)0xE01FC144)
#define INTWAKE_OFFSET 0x144
#define INTWAKE_EXTWAKE0_MASK 0x1
#define INTWAKE_EXTWAKE0 0x1
#define INTWAKE_EXTWAKE0_BIT 0
#define INTWAKE_EXTWAKE1_MASK 0x2
#define INTWAKE_EXTWAKE1 0x2
#define INTWAKE_EXTWAKE1_BIT 1
#define INTWAKE_EXTWAKE2_MASK 0x4
#define INTWAKE_EXTWAKE2 0x4
#define INTWAKE_EXTWAKE2_BIT 2
#define INTWAKE_EXTWAKE3_MASK 0x8
#define INTWAKE_EXTWAKE3 0x8
#define INTWAKE_EXTWAKE3_BIT 3
#define INTWAKE_USBWAKE_MASK 0x20
#define INTWAKE_USBWAKE 0x20
#define INTWAKE_USBWAKE_BIT 5
#define INTWAKE_BODWAKE_MASK 0x4000
#define INTWAKE_BODWAKE 0x4000
#define INTWAKE_BODWAKE_BIT 14
#define INTWAKE_RTCWAKE_MASK 0x8000
#define INTWAKE_RTCWAKE 0x8000
#define INTWAKE_RTCWAKE_BIT 15

#define EXTMODE (*(volatile unsigned char *)0xE01FC148)
#define EXTMODE_OFFSET 0x148
#define EXTMODE_EXTMODE0_MASK 0x1
#define EXTMODE_EXTMODE0 0x1
#define EXTMODE_EXTMODE0_BIT 0
#define EXTMODE_EXTMODE1_MASK 0x2
#define EXTMODE_EXTMODE1 0x2
#define EXTMODE_EXTMODE1_BIT 1
#define EXTMODE_EXTMODE2_MASK 0x4
#define EXTMODE_EXTMODE2 0x4
#define EXTMODE_EXTMODE2_BIT 2
#define EXTMODE_EXTMODE3_MASK 0x8
#define EXTMODE_EXTMODE3 0x8
#define EXTMODE_EXTMODE3_BIT 3

#define EXTPOLAR (*(volatile unsigned char *)0xE01FC14C)
#define EXTPOLAR_OFFSET 0x14C
#define EXTPOLAR_EXTPOLAR0_MASK 0x1
#define EXTPOLAR_EXTPOLAR0 0x1
#define EXTPOLAR_EXTPOLAR0_BIT 0
#define EXTPOLAR_EXTPOLAR1_MASK 0x2
#define EXTPOLAR_EXTPOLAR1 0x2
#define EXTPOLAR_EXTPOLAR1_BIT 1
#define EXTPOLAR_EXTPOLAR2_MASK 0x4
#define EXTPOLAR_EXTPOLAR2 0x4
#define EXTPOLAR_EXTPOLAR2_BIT 2
#define EXTPOLAR_EXTPOLAR3_MASK 0x8
#define EXTPOLAR_EXTPOLAR3 0x8
#define EXTPOLAR_EXTPOLAR3_BIT 3

#define USBIntSt (*(volatile unsigned char *)0xE01FC1C0)
#define USBIntSt_OFFSET 0x1C0
#define USBIntSt_USB_INT_REQ_LP_MASK 0x1
#define USBIntSt_USB_INT_REQ_LP 0x1
#define USBIntSt_USB_INT_REQ_LP_BIT 0
#define USBIntSt_USB_INT_REQ_HP_MASK 0x2
#define USBIntSt_USB_INT_REQ_HP 0x2
#define USBIntSt_USB_INT_REQ_HP_BIT 1
#define USBIntSt_USB_INT_REQ_DMA_MASK 0x4
#define USBIntSt_USB_INT_REQ_DMA 0x4
#define USBIntSt_USB_INT_REQ_DMA_BIT 2
#define USBIntSt_USB_need_clock_MASK 0x100
#define USBIntSt_USB_need_clock 0x100
#define USBIntSt_USB_need_clock_BIT 8
#define USBIntSt_EN_USB_INTS_MASK 0x80000000
#define USBIntSt_EN_USB_INTS 0x80000000
#define USBIntSt_EN_USB_INTS_BIT 31

#define VIC_BASE 0xFFFFF000

#define VICIRQStatus (*(volatile unsigned long *)0xFFFFF000)
#define VICIRQStatus_OFFSET 0x0

#define VICFIQStatus (*(volatile unsigned long *)0xFFFFF004)
#define VICFIQStatus_OFFSET 0x4

#define VICRawIntr (*(volatile unsigned long *)0xFFFFF008)
#define VICRawIntr_OFFSET 0x8

#define VICIntSelect (*(volatile unsigned long *)0xFFFFF00C)
#define VICIntSelect_OFFSET 0xC

#define VICIntEnable (*(volatile unsigned long *)0xFFFFF010)
#define VICIntEnable_OFFSET 0x10

#define VICIntEnClr (*(volatile unsigned long *)0xFFFFF014)
#define VICIntEnClr_OFFSET 0x14

#define VICSoftInt (*(volatile unsigned long *)0xFFFFF018)
#define VICSoftInt_OFFSET 0x18

#define VICSoftIntClear (*(volatile unsigned long *)0xFFFFF01C)
#define VICSoftIntClear_OFFSET 0x1C

#define VICProtection (*(volatile unsigned long *)0xFFFFF020)
#define VICProtection_OFFSET 0x20

#define VICVectAddr (*(volatile unsigned long *)0xFFFFF030)
#define VICVectAddr_OFFSET 0x30

#define VICDefVectAddr (*(volatile unsigned long *)0xFFFFF034)
#define VICDefVectAddr_OFFSET 0x34

#define VICVectAddr0 (*(volatile unsigned long *)0xFFFFF100)
#define VICVectAddr0_OFFSET 0x100

#define VICVectAddr1 (*(volatile unsigned long *)0xFFFFF104)
#define VICVectAddr1_OFFSET 0x104

#define VICVectAddr2 (*(volatile unsigned long *)0xFFFFF108)
#define VICVectAddr2_OFFSET 0x108

#define VICVectAddr3 (*(volatile unsigned long *)0xFFFFF10C)
#define VICVectAddr3_OFFSET 0x10C

#define VICVectAddr4 (*(volatile unsigned long *)0xFFFFF110)
#define VICVectAddr4_OFFSET 0x110

#define VICVectAddr5 (*(volatile unsigned long *)0xFFFFF114)
#define VICVectAddr5_OFFSET 0x114

#define VICVectAddr6 (*(volatile unsigned long *)0xFFFFF118)
#define VICVectAddr6_OFFSET 0x118

#define VICVectAddr7 (*(volatile unsigned long *)0xFFFFF11C)
#define VICVectAddr7_OFFSET 0x11C

#define VICVectAddr8 (*(volatile unsigned long *)0xFFFFF120)
#define VICVectAddr8_OFFSET 0x120

#define VICVectAddr9 (*(volatile unsigned long *)0xFFFFF124)
#define VICVectAddr9_OFFSET 0x124

#define VICVectAddr10 (*(volatile unsigned long *)0xFFFFF128)
#define VICVectAddr10_OFFSET 0x128

#define VICVectAddr11 (*(volatile unsigned long *)0xFFFFF12C)
#define VICVectAddr11_OFFSET 0x12C

#define VICVectAddr12 (*(volatile unsigned long *)0xFFFFF130)
#define VICVectAddr12_OFFSET 0x130

#define VICVectAddr13 (*(volatile unsigned long *)0xFFFFF134)
#define VICVectAddr13_OFFSET 0x134

#define VICVectAddr14 (*(volatile unsigned long *)0xFFFFF138)
#define VICVectAddr14_OFFSET 0x138

#define VICVectAddr15 (*(volatile unsigned long *)0xFFFFF13C)
#define VICVectAddr15_OFFSET 0x13C

#define VICVectCntl0 (*(volatile unsigned long *)0xFFFFF200)
#define VICVectCntl0_OFFSET 0x200

#define VICVectCntl1 (*(volatile unsigned long *)0xFFFFF204)
#define VICVectCntl1_OFFSET 0x204

#define VICVectCntl2 (*(volatile unsigned long *)0xFFFFF208)
#define VICVectCntl2_OFFSET 0x208

#define VICVectCntl3 (*(volatile unsigned long *)0xFFFFF20C)
#define VICVectCntl3_OFFSET 0x20C

#define VICVectCntl4 (*(volatile unsigned long *)0xFFFFF210)
#define VICVectCntl4_OFFSET 0x210

#define VICVectCntl5 (*(volatile unsigned long *)0xFFFFF214)
#define VICVectCntl5_OFFSET 0x214

#define VICVectCntl6 (*(volatile unsigned long *)0xFFFFF218)
#define VICVectCntl6_OFFSET 0x218

#define VICVectCntl7 (*(volatile unsigned long *)0xFFFFF21C)
#define VICVectCntl7_OFFSET 0x21C

#define VICVectCntl8 (*(volatile unsigned long *)0xFFFFF220)
#define VICVectCntl8_OFFSET 0x220

#define VICVectCntl9 (*(volatile unsigned long *)0xFFFFF224)
#define VICVectCntl9_OFFSET 0x224

#define VICVectCntl10 (*(volatile unsigned long *)0xFFFFF228)
#define VICVectCntl10_OFFSET 0x228

#define VICVectCntl11 (*(volatile unsigned long *)0xFFFFF22C)
#define VICVectCntl11_OFFSET 0x22C

#define VICVectCntl12 (*(volatile unsigned long *)0xFFFFF230)
#define VICVectCntl12_OFFSET 0x230

#define VICVectCntl13 (*(volatile unsigned long *)0xFFFFF234)
#define VICVectCntl13_OFFSET 0x234

#define VICVectCntl14 (*(volatile unsigned long *)0xFFFFF238)
#define VICVectCntl14_OFFSET 0x238

#define VICVectCntl15 (*(volatile unsigned long *)0xFFFFF23C)
#define VICVectCntl15_OFFSET 0x23C




#define SCB_BASE_ADDR	0xE01FC000

/* Phase Locked Loop (PLL) */
#define PLLCON         (*(volatile unsigned long *)(SCB_BASE_ADDR + 0x080))
#define PLLCFG         (*(volatile unsigned long *)(SCB_BASE_ADDR + 0x084))
#define PLLSTAT        (*(volatile unsigned long *)(SCB_BASE_ADDR + 0x088))
#define PLLFEED        (*(volatile unsigned long *)(SCB_BASE_ADDR + 0x08C))

/* VPB Divider */
#define VPBDIV         (*(volatile unsigned long *)(SCB_BASE_ADDR + 0x100))



/* General Purpose Input/Output (GPIO) */
#define GPIO_BASE_ADDR		0xE0028000
#define IOPIN0         (*(volatile unsigned long *)(GPIO_BASE_ADDR + 0x00))
#define IOSET0         (*(volatile unsigned long *)(GPIO_BASE_ADDR + 0x04))
#define IODIR0         (*(volatile unsigned long *)(GPIO_BASE_ADDR + 0x08))
#define IOCLR0         (*(volatile unsigned long *)(GPIO_BASE_ADDR + 0x0C))
#define IOPIN1         (*(volatile unsigned long *)(GPIO_BASE_ADDR + 0x10))
#define IOSET1         (*(volatile unsigned long *)(GPIO_BASE_ADDR + 0x14))
#define IODIR1         (*(volatile unsigned long *)(GPIO_BASE_ADDR + 0x18))
#define IOCLR1         (*(volatile unsigned long *)(GPIO_BASE_ADDR + 0x1C))

#define USBReEP			*(volatile unsigned int *)0xE0090044
#define USBMaxPSize		*(volatile unsigned int *)0xE009004C
#endif
