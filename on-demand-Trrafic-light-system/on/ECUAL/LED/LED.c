/*
 * LED.c
 *
 *  Created on: Oct 17, 2022
 *      Author: norat
 */

#include "LED.h"
#include <util/delay.h>


void ECUAL_LED_Void_INIT  (u8  Copy_U8_LEDPORT , u8 Copy_U8_LEDPIN)
{
	 DIO_Void_SetPinDirection( Copy_U8_LEDPORT, Copy_U8_LEDPIN, OUTPUT);
}

void ECUAL_LED_Void_LedON (u8  Copy_U8_LEDPORT , u8 Copy_U8_LEDPIN)
{
	DIO_Void_SetPinValue(Copy_U8_LEDPORT, Copy_U8_LEDPIN, HIGH);
}

void ECUAL_LED_Void_LedOff(u8  Copy_U8_LEDPORT , u8 Copy_U8_LEDPIN)
{
	DIO_Void_SetPinValue(Copy_U8_LEDPORT, Copy_U8_LEDPIN, LOW);
}

void ECUAL_LED_Void_LedTog(u8 Copy_U8_LEDPORT , u8 Copy_U8_LEDPIN)
{
	DIO_Void_toggle(Copy_U8_LEDPORT,Copy_U8_LEDPIN);
}







