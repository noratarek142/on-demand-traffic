/*
 * DIO.h
 *
 *  Created on: Oct 17, 2022
 *      Author: norat
 */

#ifndef MCAL_DIO_DIO_H_
#define MCAL_DIO_DIO_H_


/**************************************************************************************************************************************************/
/*   INCLUDES                                                                                                                                     */
/**************************************************************************************************************************************************/
#include <avr/io.h>       /* to use i/o ports registers*/
#include "UTILITIES/STD.h"
#include "UTILITIES/BitMath.h"


/**************************************************************************************************************************************************/
/* DEFINATIONS*/
/**************************************************************************************************************************************************/

/* Group A Registers */
#define PORTA_REG  0

/* Group B Registers */
#define PORTB_REG  1

/* Group C Register */
#define PORTC_REG  2

/* Group D Register */
#define PORTD_REG  3

#define LOW              0
#define HIGH             1
#define INPUT            0
#define OUTPUT           1

/* PORT A DEFINES */
#define PIN0             0
#define PIN1             1
#define PIN2             2
#define PIN3             3
#define PIN4             4
#define PIN5             5
#define PIN6             6
#define PIN7             7


/**************************************************************************************************************************************************/
/*   PROTOTYPES                                                                                                                                    */
/**************************************************************************************************************************************************/
void DIO_Void_SetPinDirection(u8 Copy_U8_PortNumber, u8 Copy_U8_pinNumber, u8 Copy_U8_State);
void DIO_Void_SetPinValue(u8 Copy_U8_PortNumber, u8 Copy_U8_pinNumber, u8 Copy_U8_Value);
void DIO_Void_toggle(u8 Copy_U8_PortNumber, u8 Copy_U8_PinNumber);
void DIO_Void_GetPinValue(u8 Copy_U8_PortNumber, u8 Copy_U8_PinNumber, u8 *Copy_U8_Value);





#endif /* MCAL_DIO_DIO_H_ */
