/*
 * ledopendrain.h
 *
 *  Created on: Sep 20, 2024
 *      Author: adesh
 */
#include <stdint.h>

#ifndef LEDOPENDRAIN_H_
#define LEDOPENDRAIN_H_

#include "system_stm32f4xx.h"
#define GPIO_LED 		GPIOD
#define GREENPIN 		12
#define ORANGEPIN 		13
#define REDPIN			14
#define BLUEPIN			15

#define GPIO_LEDCK 			3

void ledinitial (uint32_t pin);
void ledon (uint32_t pin);
void ledoff (uint32_t pin);
void ledblink (uint32_t pin,uint32_t delayMs);

#endif /* LEDOPENDRAIN_H_ */
