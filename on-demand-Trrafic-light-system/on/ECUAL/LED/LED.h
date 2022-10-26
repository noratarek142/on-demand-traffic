/*
 * LED.h
 *
 *  Created on: Oct 17, 2022
 *      Author: norat
 */

#ifndef ECUAL_LED_LED_H_
#define ECUAL_LED_LED_H_

/******************************************************************************************************
 *                                      INCLUDES                                                      *
  ****************************************************************************************************/
#include "UTILITIES/STD.h"
#include"UTILITIES/BitMath.h"
#include "DIO/DIO.h"


/***************************************************************************************************/
/*                                               PROTOTYPES                                        */
/***************************************************************************************************/

void ECUAL_LED_Void_INIT  (u8  Copy_U8_LEDPORT , u8 Copy_U8_LEDPIN);
void ECUAL_LED_Void_LedON (u8  Copy_U8_LEDPORT , u8 Copy_U8_LEDPIN);
void ECUAL_LED_Void_LedOff(u8  Copy_U8_LEDPORT , u8 Copy_U8_LEDPIN);
void ECUAL_LED_Void_LedTog(u8  Copy_U8_LEDPORT , u8 Copy_U8_LEDPIN);


#endif /* ECUAL_LED_LED_H_ */
