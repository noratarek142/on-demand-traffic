/*
 * TIMER.c
*
 *  Created on: Oct 18, 2022
 *      Author: norat
 */


#include  "TIMER.h"
#include <math.h>

void MCAL_Void_Timer0_Init()
{
 TCCR0 =0x00;                                            // normal mode
 TCNT0 =0X00;                                            // initial timer
 TCCR0 |= (1<<0) | (1<<2);

}

void MCAL_Void_Timer0_delay(int Copy_U32_TimeDelay)
{
	u32 LocaL_U32_OverflowCounter=0;
    u32  LocaL_U32_NumberOfOverflows;
    d64 Local_d64_TimeMaxDelay , Local_d64_TimeTick;
    s32 Local_U32_InitialTimerValue;
Local_d64_TimeTick = 1024.0 / 1000.0; // milLi second
Local_d64_TimeMaxDelay = Local_d64_TimeTick * 256; // milli seconds
if(Copy_U32_TimeDelay<Local_d64_TimeMaxDelay)                                             //case 1
{
	Local_U32_InitialTimerValue = (Local_d64_TimeMaxDelay - Copy_U32_TimeDelay)/Local_d64_TimeTick;
	LocaL_U32_NumberOfOverflows = 1;
}
else if(Copy_U32_TimeDelay == (s32)Local_d64_TimeMaxDelay)                                 //case 2
{
	Local_U32_InitialTimerValue=0;
	LocaL_U32_NumberOfOverflows=1;
}

else                                                                                       //case 3
{
	LocaL_U32_NumberOfOverflows = ceil((d64)Copy_U32_TimeDelay/Local_d64_TimeMaxDelay);
	Local_U32_InitialTimerValue = 256 -(d64)(Copy_U32_TimeDelay/Local_d64_TimeTick)/LocaL_U32_NumberOfOverflows;
}
while (LocaL_U32_OverflowCounter < LocaL_U32_NumberOfOverflows)                             //busy
{
		while (( TIFR & (1<<0) )==0 )
		{
			//waiting for the flag
		}
	          	TIFR |= (1<<0);
	          	LocaL_U32_OverflowCounter++;
	}
LocaL_U32_OverflowCounter =0;
}

