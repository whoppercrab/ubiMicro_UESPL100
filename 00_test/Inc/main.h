/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
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
#include "stm32l1xx_hal.h"
#include "stm32l1xx_hal.h"

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
#define M_MENB5_Pin GPIO_PIN_13
#define M_MENB5_GPIO_Port GPIOC
#define M_MENB6_Pin GPIO_PIN_14
#define M_MENB6_GPIO_Port GPIOC
#define RF_PWR_EN_Pin GPIO_PIN_15
#define RF_PWR_EN_GPIO_Port GPIOC
#define SW1_Pin GPIO_PIN_0
#define SW1_GPIO_Port GPIOC
#define SW2_Pin GPIO_PIN_1
#define SW2_GPIO_Port GPIOC
#define SW3_Pin GPIO_PIN_2
#define SW3_GPIO_Port GPIOC
#define SW4_Pin GPIO_PIN_3
#define SW4_GPIO_Port GPIOC
#define ADC0_Pin GPIO_PIN_0
#define ADC0_GPIO_Port GPIOA
#define ADC1_Pin GPIO_PIN_1
#define ADC1_GPIO_Port GPIOA
#define ADC2_Pin GPIO_PIN_2
#define ADC2_GPIO_Port GPIOA
#define ADC3_Pin GPIO_PIN_3
#define ADC3_GPIO_Port GPIOA
#define ADC4_Pin GPIO_PIN_4
#define ADC4_GPIO_Port GPIOA
#define ADC5_Pin GPIO_PIN_5
#define ADC5_GPIO_Port GPIOA
#define ADC6_Pin GPIO_PIN_6
#define ADC6_GPIO_Port GPIOA
#define ADC7_BAT_Pin GPIO_PIN_7
#define ADC7_BAT_GPIO_Port GPIOA
#define SW_MAIN_PWR_Pin GPIO_PIN_4
#define SW_MAIN_PWR_GPIO_Port GPIOC
#define CHG_STAT1_Pin GPIO_PIN_5
#define CHG_STAT1_GPIO_Port GPIOC
#define LED_1_Pin GPIO_PIN_0
#define LED_1_GPIO_Port GPIOB
#define LED_2_Pin GPIO_PIN_1
#define LED_2_GPIO_Port GPIOB
#define LED_3_Pin GPIO_PIN_2
#define LED_3_GPIO_Port GPIOB
#define M_PB10_Pin GPIO_PIN_10
#define M_PB10_GPIO_Port GPIOB
#define M_PB11_Pin GPIO_PIN_11
#define M_PB11_GPIO_Port GPIOB
#define SPI1_CS_Pin GPIO_PIN_12
#define SPI1_CS_GPIO_Port GPIOB
#define CM_BUZZER_Pin GPIO_PIN_13
#define CM_BUZZER_GPIO_Port GPIOB
#define CHG_STAT2_Pin GPIO_PIN_6
#define CHG_STAT2_GPIO_Port GPIOC
#define M_MENB0_Pin GPIO_PIN_8
#define M_MENB0_GPIO_Port GPIOC
#define M_MENB1_Pin GPIO_PIN_9
#define M_MENB1_GPIO_Port GPIOC
#define M_LORA_TX_Pin GPIO_PIN_9
#define M_LORA_TX_GPIO_Port GPIOA
#define M_LORA_RX_Pin GPIO_PIN_10
#define M_LORA_RX_GPIO_Port GPIOA
#define MOTOR_Pin GPIO_PIN_15
#define MOTOR_GPIO_Port GPIOA
#define M_MENB2_Pin GPIO_PIN_10
#define M_MENB2_GPIO_Port GPIOC
#define M_MENB3_Pin GPIO_PIN_11
#define M_MENB3_GPIO_Port GPIOC
#define M_MENB4_Pin GPIO_PIN_12
#define M_MENB4_GPIO_Port GPIOC
#define M_SEN_SCL_Pin GPIO_PIN_6
#define M_SEN_SCL_GPIO_Port GPIOB
#define M_SEN_SDA_Pin GPIO_PIN_7
#define M_SEN_SDA_GPIO_Port GPIOB
#define SPI1_RES_Pin GPIO_PIN_8
#define SPI1_RES_GPIO_Port GPIOB
#define SPI1_DC_Pin GPIO_PIN_9
#define SPI1_DC_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
