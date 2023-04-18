#ifndef __HX711_H__
#define __HX711_H__

#include "stm32f1xx_hal.h"
#include "main.h"

#define BUFFERSIZE 255

uint32_t HX711_ReadCount(void);
uint32_t HX711_GetRealWeight(void);

#endif
