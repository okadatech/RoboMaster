/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f4xx_hal.h"

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
#define POWER_OUT1_Pin GPIO_PIN_2
#define POWER_OUT1_GPIO_Port GPIOH
#define FRICTION_L_Pin GPIO_PIN_8
#define FRICTION_L_GPIO_Port GPIOA
#define POWER_OUT2_Pin GPIO_PIN_3
#define POWER_OUT2_GPIO_Port GPIOH
#define POWER_OUT3_Pin GPIO_PIN_4
#define POWER_OUT3_GPIO_Port GPIOH
#define POWER_OUT4_Pin GPIO_PIN_5
#define POWER_OUT4_GPIO_Port GPIOH
#define SPI_MPU_CS_Pin GPIO_PIN_6
#define SPI_MPU_CS_GPIO_Port GPIOF
#define BEEP_CTRL_Pin GPIO_PIN_6
#define BEEP_CTRL_GPIO_Port GPIOH
#define LED_R_Pin GPIO_PIN_11
#define LED_R_GPIO_Port GPIOE
#define FRICTION_R_Pin GPIO_PIN_14
#define FRICTION_R_GPIO_Port GPIOE
#define LED_G_Pin GPIO_PIN_14
#define LED_G_GPIO_Port GPIOF
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
