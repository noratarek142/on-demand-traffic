/*
 * APP.c
 *
 *  Created on: Oct 17, 2022
 *      Author: norat
 */

#include "APP.h"

 boolean Local_Boolean_YellowbBlinking=0;
 boolean Local_Boolean_ButtonClick =0;
/*
 * Initialization function takes void and return void
 1- Initialize port A, Green, Yellow, and Red as LEDs for cars
 2- Initialize port B, Green, Yellow, and Red as LEDs for pedestrians
 3- Initialize push button, Timer 0, interrupt 0
 */
void APP_Void_AppInit(void)
{
		// CAR_LEDS INITIALIZATIONSS
	ECUAL_LED_Void_INIT(PORTA_REG,PIN0);
	ECUAL_LED_Void_INIT(PORTA_REG,PIN1);
	ECUAL_LED_Void_INIT(PORTA_REG,PIN2);

		// LEDS INIT
	ECUAL_LED_Void_INIT(PORTB_REG,PIN0);
	ECUAL_LED_Void_INIT(PORTB_REG,PIN1);
	ECUAL_LED_Void_INIT(PORTB_REG,PIN2);

		//Push BUTTON INIT
	ECUAL_Void_BUTTON_INIT(PORTD_REG, PIN2);

		// Timer 0 INIT
	MCAL_Void_Timer0_Init();

		// Interrupt 0 INIT
	MCAL_Void_Interrupt0_init();
}

/*
 * This function takes void and return void
 * Cars' LEDs will be changed every five seconds, Pedestrians' LEDs is opposite to cars' LEDs
 * The Yellow LED of both  will blink for five seconds before moving to Green or Red LEDs.
 */
void APP_Void_AppStart(void)
{
	ECUAL_LED_Void_LedON(PORTA_REG,PIN0);                                             // Green led for cars & Red led for ped is on for five seconds
	ECUAL_LED_Void_LedON(PORTB_REG,PIN2);
	MCAL_Void_Timer0_delay(5000);

// After 5 second  Green led for cars & Red led for ped. switched OFF
// yellow LEDs of both will blinking for five second
	ECUAL_LED_Void_LedOff(PORTA_REG,PIN0);
	ECUAL_LED_Void_LedOff(PORTB_REG,PIN2);
	APP_Void_BlinkingYellow ();
	ECUAL_LED_Void_LedOff(PORTA_REG,PIN1);
	ECUAL_LED_Void_LedOff(PORTB_REG,PIN1);

// After yellow blinking for 5 seconds Red led for cars and green led for ped. is on for five seconds
// yellow blinking again
	ECUAL_LED_Void_LedON(PORTA_REG,PIN2);
	ECUAL_LED_Void_LedON(PORTB_REG,PIN0);
	MCAL_Void_Timer0_delay(5000);
	ECUAL_LED_Void_LedOff(PORTA_REG,PIN2);
	ECUAL_LED_Void_LedOff(PORTB_REG,PIN0);
	APP_Void_BlinkingYellow ();
	ECUAL_LED_Void_LedOff(PORTA_REG,PIN1);
	ECUAL_LED_Void_LedOff(PORTB_REG,PIN1);

}

/*
 * This function takes void and return void and it toggles the yellow leds of both cars and ped.
 */
void APP_Void_BlinkingYellow ()
{
	Local_Boolean_YellowbBlinking = 1;
    ECUAL_LED_Void_LedTog(PORTA_REG,PIN1);
    ECUAL_LED_Void_LedTog(PORTB_REG,PIN1);
	MCAL_Void_Timer0_delay(500);
	ECUAL_LED_Void_LedTog(PORTA_REG,PIN1);
	ECUAL_LED_Void_LedTog(PORTB_REG,PIN1);
	MCAL_Void_Timer0_delay(500);
	ECUAL_LED_Void_LedTog(PORTA_REG,PIN1);
	ECUAL_LED_Void_LedTog(PORTB_REG,PIN1);
	MCAL_Void_Timer0_delay(1000);
	ECUAL_LED_Void_LedTog(PORTA_REG,PIN1);
	ECUAL_LED_Void_LedTog(PORTB_REG,PIN1);
	MCAL_Void_Timer0_delay(500);
	ECUAL_LED_Void_LedTog(PORTA_REG,PIN1);
	ECUAL_LED_Void_LedTog(PORTB_REG,PIN1);
	MCAL_Void_Timer0_delay(500);
	ECUAL_LED_Void_LedTog(PORTA_REG,PIN1);
	ECUAL_LED_Void_LedTog(PORTB_REG,PIN1);
	MCAL_Void_Timer0_delay(1000);
	ECUAL_LED_Void_LedTog(PORTA_REG,PIN1);
	ECUAL_LED_Void_LedTog(PORTB_REG,PIN1);
	MCAL_Void_Timer0_delay(500);
	ECUAL_LED_Void_LedTog(PORTA_REG,PIN1);
	ECUAL_LED_Void_LedTog(PORTB_REG,PIN1);
	MCAL_Void_Timer0_delay(500);
	Local_Boolean_YellowbBlinking = 0;
}

/*
 * This function takes void and return void
 *case 1: If pressed when the cars' Red LED is on:
 *the pedestrian's Green LED and the cars' Red LEDs will be on for five seconds,
 *case 2:If pressed when the cars' Green LED is on or the cars' Yellow LED is blinking,
 *the pedestrian Red LED will be on -- then both Yellow LEDs start to blink for five seconds,the cars' Red LED and pedestrian Green LEDs are on for five seconds,
 */

void APP_Void_Allowped ()
{              //case 1
	if ( BIT_IS_SET(PINA,PIN2) )
	 {   ECUAL_LED_Void_LedON(PORTA_REG,PIN2);
	     ECUAL_LED_Void_LedON(PORTB_REG,PIN0);
	     MCAL_Void_Timer0_delay(5000);
	 }
	          //case 2
	 else if ( BIT_IS_SET(PINA,PIN0) ||   Local_Boolean_YellowbBlinking ==1)
	 {
		  ECUAL_LED_Void_LedOff(PORTA_REG,PIN0);                              // the pedestrian Red LED will be on
		  ECUAL_LED_Void_LedON(PORTB_REG,PIN2);

		  APP_Void_BlinkingYellow ();                                         // then both Yellow LEDs start to blink for five seconds,
	      ECUAL_LED_Void_LedOff(PORTA_REG,PIN1);
	      ECUAL_LED_Void_LedOff(PORTB_REG,PIN1);
	      ECUAL_LED_Void_LedOff(PORTB_REG,PIN2);
	                                                                          // then the cars' Red LED and pedestrian Green LEDs are on for five seconds
	      ECUAL_LED_Void_LedON(PORTA_REG,PIN2);
		  ECUAL_LED_Void_LedON(PORTB_REG,PIN0);
		  MCAL_Void_Timer0_delay(5000);
	 }

// 	 the cars' Red LED will be off and both Yellow LEDs start blinking for 5 seconds ,and the pedestrian's Green LED is still on
	    ECUAL_LED_Void_LedOff(PORTA_REG,PIN2);
	    APP_Void_BlinkingYellow ();
		ECUAL_LED_Void_LedOff(PORTA_REG,PIN1);
		ECUAL_LED_Void_LedOff(PORTB_REG,PIN1);

//   After 5 seconds the pedestrian Green LED will be off , both the pedestrian Red LED and the cars' Green LED will be on.
		ECUAL_LED_Void_LedOff(PORTB,PIN0);
		ECUAL_LED_Void_LedON(PORTA_REG,PIN0);
		ECUAL_LED_Void_LedON(PORTB_REG,PIN2);
		MCAL_Void_Timer0_delay(5000);
	    ECUAL_LED_Void_LedOff(PORTA_REG,PIN0);  // GREEN LED FOR CAR
	    ECUAL_LED_Void_LedOff(PORTB_REG,PIN2);

}

ISR (INT0_vect)
{
	APP_Void_Allowped ();

}

