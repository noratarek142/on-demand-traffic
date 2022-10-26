/*
 * TestMain_TImer.h
 *
 *  Created on: Oct 20, 2022
 *      Author: norat
 */

#ifndef MCAL_TIMER_TESTMAIN_TIMER_H_
#define MCAL_TIMER_TESTMAIN_TIMER_H_
#include"TIMER.h"
#include"LED.h"
#include<util/delay.h>

void testing_timers(void)
{
	ECUAL_LED_Void_INIT (PORTA_REG,PIN6);
	MCAL_Void_Timer0_Init();
	while (1)
	{
		ECUAL_LED_Void_LedON (PORTA_REG,PIN6);
		MCAL_Void_Timer0_delay(5000);
		ECUAL_LED_Void_LedOff (PORTA_REG,PIN6);
		MCAL_Void_Timer0_delay(5000);
	}
}

#endif /* MCAL_TIMER_TESTMAIN_TIMER_H_ */
