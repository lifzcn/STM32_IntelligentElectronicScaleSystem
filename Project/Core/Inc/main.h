/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Key_C4_Pin GPIO_PIN_0
#define Key_C4_GPIO_Port GPIOA
#define Key_C3_Pin GPIO_PIN_1
#define Key_C3_GPIO_Port GPIOA
#define Key_C2_Pin GPIO_PIN_2
#define Key_C2_GPIO_Port GPIOA
#define Key_C1_Pin GPIO_PIN_3
#define Key_C1_GPIO_Port GPIOA
#define Key_R1_Pin GPIO_PIN_4
#define Key_R1_GPIO_Port GPIOA
#define Key_R2_Pin GPIO_PIN_5
#define Key_R2_GPIO_Port GPIOA
#define Key_R3_Pin GPIO_PIN_6
#define Key_R3_GPIO_Port GPIOA
#define Key_R4_Pin GPIO_PIN_7
#define Key_R4_GPIO_Port GPIOA
#define HX711_DT_Pin GPIO_PIN_10
#define HX711_DT_GPIO_Port GPIOB
#define HX711_SCK_Pin GPIO_PIN_11
#define HX711_SCK_GPIO_Port GPIOB
#define Buzzer_IO_Pin GPIO_PIN_3
#define Buzzer_IO_GPIO_Port GPIOB
#define Buzzer_VCC_Pin GPIO_PIN_4
#define Buzzer_VCC_GPIO_Port GPIOB
#define Buzzer_GND_Pin GPIO_PIN_5
#define Buzzer_GND_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
