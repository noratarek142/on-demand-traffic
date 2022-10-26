/*
 * main.c
 *
 *  Created on: Oct 20, 2022
 *      Author: norat
 */

#include"APP/APP.h"
//#include "TestMain_LED.h"
//#include"TestMain_BUTTONS.h"
//#include"TestMain_TImer.h"
int main (void)
{
	//testing_timers();
	//testing_buttons();
	//testing_leds();
	APP_Void_AppInit();
		 while (1)
		 {

			 APP_Void_AppStart();
		 }

		 return 0;
}


