/*
 * DIO.c
 *
 *  Created on: Oct 17, 2022
 *      Author: norat
 */
#include "DIO.h"

void DIO_Void_SetPinDirection(u8 Copy_U8_PortNumber, u8 Copy_U8_pinNumber, u8 Copy_U8_State)
{
		/* Setup the pin direction */
		switch(Copy_U8_PortNumber)
		{
		case PORTA_REG:
			if(Copy_U8_State == OUTPUT)
			{
				SET_BIT(DDRA,Copy_U8_pinNumber);
			}
			else
			{
				CLR_BIT(DDRA,Copy_U8_pinNumber);
			}
			break;
		case PORTB_REG:
			if(Copy_U8_State == OUTPUT)
			{
				SET_BIT(DDRB,Copy_U8_pinNumber);
			}
			else
			{
				CLR_BIT(DDRB,Copy_U8_pinNumber);
			}
			break;
		case PORTC_REG:
			if(Copy_U8_State == OUTPUT)
			{
				SET_BIT(DDRC,Copy_U8_pinNumber);
			}
			else
			{
				CLR_BIT(DDRC,Copy_U8_pinNumber);
			}
			break;
		case PORTD_REG:
			if(Copy_U8_State == OUTPUT)
			{
				SET_BIT(DDRD,Copy_U8_pinNumber);
			}
			else
			{
				CLR_BIT(DDRD,Copy_U8_pinNumber);
			}
			break;
		}
	}

void DIO_Void_SetPinValue(u8 Copy_U8_PortNumber, u8 Copy_U8_pinNumber, u8 Copy_U8_Value)
{
			/* Setup the pin direction */
			switch(Copy_U8_PortNumber)
			{
			case PORTA_REG:
				if(Copy_U8_Value == OUTPUT)
				{
					SET_BIT(PORTA,Copy_U8_pinNumber);
				}
				else
				{
					CLR_BIT(PORTA,Copy_U8_pinNumber);
				}
				break;
			case PORTB_REG:
				if(Copy_U8_Value == OUTPUT)
				{
					SET_BIT(PORTB,Copy_U8_pinNumber);
				}
				else
				{
					CLR_BIT(PORTB,Copy_U8_pinNumber);
				}
				break;
			case PORTC_REG:
				if(Copy_U8_Value == OUTPUT)
				{
					SET_BIT(PORTC,Copy_U8_pinNumber);
				}
				else
				{
					CLR_BIT(PORTC,Copy_U8_pinNumber);
				}
				break;
			case PORTD_REG:
				if(Copy_U8_Value == OUTPUT)
				{
					SET_BIT(PORTD,Copy_U8_pinNumber);
				}
				else
				{
					CLR_BIT(PORTD,Copy_U8_pinNumber);
				}
				break;
			}
		}

void DIO_Void_GetPinValue(u8 Copy_U8_PortNumber, u8 Copy_U8_PinNumber, u8 *Copy_U8_Value)
{
	switch(Copy_U8_PortNumber)
			{
			case PORTA_REG:
				if(BIT_IS_SET(PINA, Copy_U8_PinNumber))
				{
					*Copy_U8_Value=HIGH;

				}
				else
				{
					*Copy_U8_Value=LOW;

				}
				break;
			case PORTB_REG:
				if(BIT_IS_SET(PINB, Copy_U8_PinNumber))
				{
					*Copy_U8_Value=HIGH;

				}
				else
				{
					*Copy_U8_Value=LOW;


				break;
			case PORTC_REG:
				if(BIT_IS_SET(PINC,Copy_U8_PinNumber))
				{
					*Copy_U8_Value=HIGH;

				}
				else
				{
					 *Copy_U8_Value= LOW;


				}
				break;
			case PORTD_REG:
				if(BIT_IS_SET(PIND ,Copy_U8_PinNumber))
				{
					*Copy_U8_Value=HIGH;
				}
				else
				{
					*Copy_U8_Value=LOW;

				}
				break;
				}
			}
}


void DIO_Void_toggle(u8 Copy_U8_PortNumber, u8 Copy_U8_PinNumber)
	{
		switch(Copy_U8_PortNumber)
		{
			case PORTA_REG:
				TOG_BIT(PORTA,Copy_U8_PinNumber);
			break;
			case PORTB_REG:
				TOG_BIT(PORTB,Copy_U8_PinNumber);
			break;
			case PORTC_REG:
				TOG_BIT(PORTC,Copy_U8_PinNumber);
			break;
			case PORTD_REG:
				TOG_BIT(PORTD,Copy_U8_PinNumber);
			break;
		}
	}
