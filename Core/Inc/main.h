/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
#define key_2_Pin GPIO_PIN_2
#define key_2_GPIO_Port GPIOE
#define led_small_Pin GPIO_PIN_1
#define led_small_GPIO_Port GPIOC
#define led_big_Pin GPIO_PIN_2
#define led_big_GPIO_Port GPIOC
#define ENCODER_D_CH1_Pin GPIO_PIN_0
#define ENCODER_D_CH1_GPIO_Port GPIOA
#define ENCODER_D_CH2_Pin GPIO_PIN_1
#define ENCODER_D_CH2_GPIO_Port GPIOA
#define lcd_DC_Pin GPIO_PIN_2
#define lcd_DC_GPIO_Port GPIOA
#define lcd_CS_Pin GPIO_PIN_3
#define lcd_CS_GPIO_Port GPIOA
#define lcd_BLK_Pin GPIO_PIN_4
#define lcd_BLK_GPIO_Port GPIOA
#define lcd_SLK_Pin GPIO_PIN_5
#define lcd_SLK_GPIO_Port GPIOA
#define lcd_mosi_Pin GPIO_PIN_7
#define lcd_mosi_GPIO_Port GPIOA
#define battery__voltage_Pin GPIO_PIN_4
#define battery__voltage_GPIO_Port GPIOC
#define ultra_right_trig_Pin GPIO_PIN_0
#define ultra_right_trig_GPIO_Port GPIOB
#define pca9685_sda_Pin GPIO_PIN_1
#define pca9685_sda_GPIO_Port GPIOB
#define pca9685_scl_Pin GPIO_PIN_2
#define pca9685_scl_GPIO_Port GPIOB
#define servo_pwr_en_Pin GPIO_PIN_7
#define servo_pwr_en_GPIO_Port GPIOE
#define ultra_left_echo_Pin GPIO_PIN_9
#define ultra_left_echo_GPIO_Port GPIOE
#define ultra_front_echo_Pin GPIO_PIN_11
#define ultra_front_echo_GPIO_Port GPIOE
#define ultra_right_echo_Pin GPIO_PIN_13
#define ultra_right_echo_GPIO_Port GPIOE
#define ultra_reserve_echo_Pin GPIO_PIN_14
#define ultra_reserve_echo_GPIO_Port GPIOE
#define DIN2_Pin GPIO_PIN_8
#define DIN2_GPIO_Port GPIOD
#define DIN1_Pin GPIO_PIN_9
#define DIN1_GPIO_Port GPIOD
#define CIN2_Pin GPIO_PIN_10
#define CIN2_GPIO_Port GPIOD
#define CIN1_Pin GPIO_PIN_11
#define CIN1_GPIO_Port GPIOD
#define BIN2_Pin GPIO_PIN_12
#define BIN2_GPIO_Port GPIOD
#define BIN1_Pin GPIO_PIN_13
#define BIN1_GPIO_Port GPIOD
#define AIN2_Pin GPIO_PIN_14
#define AIN2_GPIO_Port GPIOD
#define AIN1_Pin GPIO_PIN_15
#define AIN1_GPIO_Port GPIOD
#define MOTOR_A_PWM_Pin GPIO_PIN_6
#define MOTOR_A_PWM_GPIO_Port GPIOC
#define MOTOR_B_PWM_Pin GPIO_PIN_7
#define MOTOR_B_PWM_GPIO_Port GPIOC
#define MOTOR_C_PWM_Pin GPIO_PIN_8
#define MOTOR_C_PWM_GPIO_Port GPIOC
#define MOTOR_D_PWM_Pin GPIO_PIN_9
#define MOTOR_D_PWM_GPIO_Port GPIOC
#define ir_rear_left_Pin GPIO_PIN_8
#define ir_rear_left_GPIO_Port GPIOA
#define USART1_TX_Pin GPIO_PIN_9
#define USART1_TX_GPIO_Port GPIOA
#define USART1_RX_Pin GPIO_PIN_10
#define USART1_RX_GPIO_Port GPIOA
#define ultra_left_trig_Pin GPIO_PIN_11
#define ultra_left_trig_GPIO_Port GPIOA
#define ir_rear_right_Pin GPIO_PIN_12
#define ir_rear_right_GPIO_Port GPIOA
#define ENCODER_A_CH1_Pin GPIO_PIN_15
#define ENCODER_A_CH1_GPIO_Port GPIOA
#define USART3_TX_Pin GPIO_PIN_10
#define USART3_TX_GPIO_Port GPIOC
#define USART3_RX_Pin GPIO_PIN_11
#define USART3_RX_GPIO_Port GPIOC
#define ultra_front_trig_Pin GPIO_PIN_2
#define ultra_front_trig_GPIO_Port GPIOD
#define ir_front_left_Pin GPIO_PIN_3
#define ir_front_left_GPIO_Port GPIOD
#define ir_front_right_Pin GPIO_PIN_4
#define ir_front_right_GPIO_Port GPIOD
#define USART2_TX_Pin GPIO_PIN_5
#define USART2_TX_GPIO_Port GPIOD
#define USART2_RX_Pin GPIO_PIN_6
#define USART2_RX_GPIO_Port GPIOD
#define buzzer_Pin GPIO_PIN_7
#define buzzer_GPIO_Port GPIOD
#define ENCODER_A_CH2_Pin GPIO_PIN_3
#define ENCODER_A_CH2_GPIO_Port GPIOB
#define ENCODER_B_CH1_Pin GPIO_PIN_4
#define ENCODER_B_CH1_GPIO_Port GPIOB
#define ENCODER_B_CH2_Pin GPIO_PIN_5
#define ENCODER_B_CH2_GPIO_Port GPIOB
#define ENCODER_C_CH1_Pin GPIO_PIN_6
#define ENCODER_C_CH1_GPIO_Port GPIOB
#define ENCODER_C_CH2_Pin GPIO_PIN_7
#define ENCODER_C_CH2_GPIO_Port GPIOB
#define gyro_scl_Pin GPIO_PIN_8
#define gyro_scl_GPIO_Port GPIOB
#define gyro_sda_Pin GPIO_PIN_9
#define gyro_sda_GPIO_Port GPIOB
#define motor_EN_Pin GPIO_PIN_0
#define motor_EN_GPIO_Port GPIOE
#define key_1_Pin GPIO_PIN_1
#define key_1_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
