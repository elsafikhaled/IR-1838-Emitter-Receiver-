/*
 * emitter.c
 *
 *  Created on: ٠٧‏/٠٦‏/٢٠١٧
 *      Author: El-safi
 */

#include "CTC.h"

int main(void){
	DDRB|=(1<<PB3);
	Timer0_CTC_Mode_Init();
	Timer0_CTC_Mode_start();

	while(1){
     // no thing just CTC

	}

	return 0;
}

