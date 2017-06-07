/*
 * CTC.h
 *
 *  Created on: ٠٧‏/٠٦‏/٢٠١٧
 *      Author: El-safi
 */

#ifndef CTC_H_
#define CTC_H_
#include <avr/io.h>

void Timer0_CTC_Mode_Init(void);

/* **********************************************************************
 * prototype   ::void Timer0_CTC_Mode_Init(void);
 * return      :: void
 * paramaters  :: void
 * description :: make initialization for timer im capture compare mode
 * *********************************************************************/
void Timer0_CTC_Mode_start(void);
/* **********************************************************************
 * prototype   ::void Timer0_CTC_Mode_start(void);
 * return      :: void
 * paramaters  :: void
 * description :: make  timer im capture compare mode start
 * *********************************************************************/
#endif /* CTC_H_ */
