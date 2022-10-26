/*
 * BitMath.h
 *
 *  Created on: Oct 17, 2022
 *      Author: norat
 */

#ifndef UTILITIES_BITMATH_H_
#define UTILITIES_BITMATH_H_


#define SET_BIT(REG,BIT)         REG |=  (1 << BIT)
#define CLR_BIT(REG,BIT)         REG &= ~(1 << BIT)
#define TOG_BIT(REG,BIT)         REG ^=  (1 << BIT)
#define GET_BIT(REG,BIT)          (1 & (REG >> BIT))
#define BIT_IS_CLEAR(REG,BIT)    (!(REG & (1<<BIT)))
#define BIT_IS_SET(REG,BIT)      ( REG & (1<<BIT) )

#endif /* UTILITIES_BITMATH_H_ */
