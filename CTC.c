/*
 * CTC.c
 *
 *  Created on: ٠٧‏/٠٦‏/٢٠١٧
 *      Author: El-safi
 */
#include "CTC.h"

void Timer0_CTC_Mode_Init(void){
    TCCR0|=(1<<FOC0)|(1<<WGM01)|(1<<COM00)|(1<<CS00); // timer in capture compare mode non-PWM,toggle pin,No prescaler,


}

void Timer0_CTC_Mode_start(void){
	TCNT0=0;                                          // register at starting =0
	OCR0=100;

	/* *******************************************************************
	 * frequency of system=8 MHZ
	 * no prescaler so frequency= 8 MHZ
	 * Tick time = 0.125 micro second
	 * I need 12.5 uSec to get pulse HIGH and LOW for another 12.5 uSec
	 * so 100 count equal 12.5 uSec for 0.125 uSec tick time
	 * *******************************************************************/

}
