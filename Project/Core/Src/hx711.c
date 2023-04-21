#include "hx711.h"

uint8_t ReceiveBuff[BUFFERSIZE];
uint8_t rxEndFlag = 0;
uint8_t rxLength;

uint32_t firstWeightValue = 0;
uint32_t realWeightValue = 0;

uint32_t HX711_ReadCount(void)
{
	uint32_t count = 0;
	uint8_t i = 0;
	HAL_Delay(10);
	HAL_GPIO_WritePin(HX711_SCK_GPIO_Port, HX711_SCK_Pin, GPIO_PIN_RESET);
	while (HAL_GPIO_ReadPin(HX711_DT_GPIO_Port, HX711_DT_Pin))
		;
	for (i = 0; i < 24; i++)
	{
		HAL_GPIO_WritePin(HX711_SCK_GPIO_Port, HX711_SCK_Pin, GPIO_PIN_SET);
		count = count << 1;
		if (HAL_GPIO_ReadPin(HX711_DT_GPIO_Port, HX711_DT_Pin))
		{
			count++;
		}
		HAL_GPIO_WritePin(HX711_SCK_GPIO_Port, HX711_SCK_Pin, GPIO_PIN_RESET);
	}
	HAL_GPIO_WritePin(HX711_SCK_GPIO_Port, HX711_SCK_Pin, GPIO_PIN_SET);
	count = count ^ 0x800000;
	HAL_GPIO_WritePin(HX711_SCK_GPIO_Port, HX711_SCK_Pin, GPIO_PIN_RESET);
	return count;
}

uint32_t HX711_GetRealWeight(void)
{
	realWeightValue = HX711_ReadCount();
	if (firstWeightValue >= realWeightValue)
	{
		realWeightValue = firstWeightValue - realWeightValue;
		realWeightValue = realWeightValue / 100;
	}
	else
	{
		realWeightValue = realWeightValue - firstWeightValue;
		realWeightValue = realWeightValue / 100;
	}
	return realWeightValue;
}
