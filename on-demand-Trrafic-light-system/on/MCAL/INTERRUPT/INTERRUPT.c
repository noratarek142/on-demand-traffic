/*
 * INTERRUPT.c
 *
 *  Created on: Oct 17, 2022
 *      Author: norat
 */


#include "INTERRUPT.h"


void MCAL_Void_Interrupt0_init()
{
	sei();                                         // enable global interrupt
	MCUCR_REG |=(1<<ISC00_BIT) | (1<<ISC01_BIT);   // choosing external interrupt
	GICR_REG |=(1<<INT0_BIT);                      // enable external interrupt 0
}
