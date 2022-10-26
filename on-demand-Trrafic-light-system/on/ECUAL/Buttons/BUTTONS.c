/*
 * Buttons.c
 *
 *  Created on: Oct 17, 2022
 *      Author: norat
 */

#include "BUTTONS.h"

void ECUAL_Void_BUTTON_INIT(u8 Copy_U8_Button_Port, u8 Copy_U8_Button_Pin)
{
	DIO_Void_SetPinDirection (Copy_U8_Button_Port, Copy_U8_Button_Pin, INPUT);
}

void ECUAL_Void_BUTTON_READ(u8 Copy_U8_Button_Port, u8 Copy_U8_Button_Pin, u8 * Copy_value)
{
	DIO_Void_GetPinValue( Copy_U8_Button_Port, Copy_U8_Button_Pin, Copy_value );

}
