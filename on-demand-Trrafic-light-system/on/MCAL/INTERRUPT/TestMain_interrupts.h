/*
 * TestMain_interrupts.h
 *
 *  Created on: Oct 20, 2022
 *      Author: norat
 */

#ifndef MCAL_INTERRUPT_TESTMAIN_INTERRUPTS_H_
#define MCAL_INTERRUPT_TESTMAIN_INTERRUPTS_H_
#include "DIO/DIO.h"
#include"INTERRUPT/INTERRUPT.h"
#include"BUTTONS.h"
#include"TIMER/TIMER.h"

void main_for_testing_interrupts ()                   //test interrupt driver
{

	ECUAL_LED_Void_INIT (PORTA_REG,PIN6);
	ECUAL_Void_BUTTON_INIT(PORTD_REG, PIN2);
	MCAL_Void_Interrupt0_init ();
	ECUAL_LED_Void_LedON (PORTA_REG,PIN6);

}

#endif /* MCAL_INTERRUPT_TESTMAIN_INTERRUPTS_H_ */
