/*
 * TestMain_LED.h
 *
 *  Created on: Oct 20, 2022
 *      Author: norat
 */

#ifndef ECUAL_LED_TESTMAIN_LED_H_
#define ECUAL_LED_TESTMAIN_LED_H_
//#define F_CPU 16000000UL
#include"LED.h"
#include"BitMath.h"
#include"STD.h"
#include"DIO/DIO.h"
#include <util/delay.h>

void testing_leds ()
{
	 // TESTING LEDS DRIVER ////

	ECUAL_LED_Void_INIT (PORTA_REG,PIN6);
	 while (1)
	 {
		 ECUAL_LED_Void_LedON (PORTA_REG,PIN6);
	    _delay_ms(5000);
		 ECUAL_LED_Void_LedOff (PORTA_REG,PIN6);
		_delay_ms(5000);


		 ECUAL_LED_Void_LedTog (PORTA_REG,PIN6);
	 }
}













/*
void testing_leds ()
{
	                                          //  Testing Led Driver

	 ECUAL_LED_Void_INIT(PORTA_REG,PIN6);
	 while (1)
	 {
		 ECUAL_LED_Void_LedON (PORTA_REG,PIN6);
		 _delay_ms (1000);
		 ECUAL_LED_Void_LedOff (PORTA_REG,PIN6);
		 _delay_ms (1000);
		 ECUAL_LED_Void_LedTog (PORTA_REG,PIN6);
	 }
}
*/
#endif /* ECUAL_LED_TESTMAIN_LED_H_ */
