/*
 * TestMain_BUTTONS.h
 *
 *  Created on: Oct 20, 2022
 *      Author: norat
 */

#ifndef ECUAL_BUTTONS_TESTMAIN_BUTTONS_H_
#define ECUAL_BUTTONS_TESTMAIN_BUTTONS_H_
#include "BUTTONS.h"
#include"LED.h"
void testing_buttons ()
 {
	                                 /* Testing Buttons Driver */
	ECUAL_LED_Void_INIT (PORTA_REG,PIN6);
	ECUAL_Void_BUTTON_INIT(PORTD_REG, PIN2);
	  while (1)
	  {
		  u8 Local_U8_button_state ;
		  ECUAL_Void_BUTTON_READ(PORTD_REG, PIN2, &Local_U8_button_state );
		  if (Local_U8_button_state == HIGH)
		  {
			  ECUAL_LED_Void_LedON (PORTA_REG,PIN6);
		  }
		  else if (Local_U8_button_state ==LOW)
		  {
			  ECUAL_LED_Void_LedOff (PORTA_REG,PIN6);
		  }

	  }
 }

#endif /* ECUAL_BUTTONS_TESTMAIN_BUTTONS_H_ */
