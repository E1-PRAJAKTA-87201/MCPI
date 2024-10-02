/*
 * sys.c
 *
 *  Created on: Oct 2, 2024
 *      Author: sunbeam
 */


#include "systick.h"



void SysTick_Handler(void){
	jiffies++;
}

void SysTick_Delay(uint32_t ms){
	uint32_t until = jiffies+ms;
	while(jiffies<until)
		;
}
