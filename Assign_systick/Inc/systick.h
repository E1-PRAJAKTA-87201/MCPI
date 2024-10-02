/*
 * systick.h
 *
 *  Created on: Oct 2, 2024
 *      Author: sunbeam
 */

#ifndef SYSTICK_H_
#define SYSTICK_H_

#include "stm32f4xx.h"

volatile uint32_t jiffies=0;

void SysTick_Handler(void);
void SysTick_Delay(uint32_t);

#endif /* SYSTICK_H_ */