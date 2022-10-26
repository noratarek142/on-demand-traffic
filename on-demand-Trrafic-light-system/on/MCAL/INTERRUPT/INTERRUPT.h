/*
 * INTERRUPT.h
 *
 *  Created on: Oct 17, 2022
 *      Author: norat
 */

#ifndef MCAL_INTERRUPT_INTERRUPT_H_
#define MCAL_INTERRUPT_INTERRUPT_H_

#include <avr/io.h>
#include <avr/interrupt.h>
#include "UTILITIES/BitMath.h"
#include"UTILITIES/STD.h"
#include"DIO/DIO.h"

#define MCUCR_REG              (*((volatile u8 *) 0x55))
#define GICR_REG               (*((volatile u8 *) 0x5B))      //CONTROL REGISTER CONTAINS PIES

//MCUCR
#define ISC00_BIT        0       //INT0 SENSE CONTROL 0
#define ISC01_BIT        1       //INT0 SENSE CONTROL 1

#define ISC10_BIT        2       //INT1 SENSE CONTROL 0
#define ISC11_BIT        3       //INT1 SENSE CONTROL 1

//GICR
#define  INT1_BIT        7         //IE OF EXIT1
#define  INT0_BIT        6         //IE OF EXIT0
#define  INT2_BIT        5         //IE OF EXIT2

/**************************************************************************************************************************************************/
/*   PROTOTYPES                                                                                                                                    */
/**************************************************************************************************************************************************/
void MCAL_Void_Interrupt0_init();
#endif /* MCAL_INTERRUPT_INTERRUPT_H_ */
