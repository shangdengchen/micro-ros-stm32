/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    gpio.c
  * @brief   This file provides code for the configuration
  *          of all used GPIO pins.
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

/* Includes ------------------------------------------------------------------*/
#include "gpio.h"

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/*----------------------------------------------------------------------------*/
/* Configure GPIO                                                             */
/*----------------------------------------------------------------------------*/
/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

/** Configure pins as
        * Analog
        * Input
        * Output
        * EVENT_OUT
        * EXTI
*/
void MX_GPIO_Init(void)
{

  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOE_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, led_small_Pin|led_big_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, lcd_DC_Pin|lcd_CS_Pin|lcd_BLK_Pin|lcd_SLK_Pin
                          |lcd_mosi_Pin|ultra_left_trig_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(ultra_right_trig_GPIO_Port, ultra_right_trig_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, pca9685_sda_Pin|pca9685_scl_Pin, GPIO_PIN_SET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOE, servo_pwr_en_Pin|motor_EN_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOD, DIN2_Pin|DIN1_Pin|CIN2_Pin|CIN1_Pin
                          |BIN2_Pin|BIN1_Pin|AIN2_Pin|AIN1_Pin
                          |ultra_front_trig_Pin|buzzer_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : key_2_Pin key_1_Pin */
  GPIO_InitStruct.Pin = key_2_Pin|key_1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pins : led_small_Pin led_big_Pin */
  GPIO_InitStruct.Pin = led_small_Pin|led_big_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_MEDIUM;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : lcd_DC_Pin lcd_CS_Pin lcd_BLK_Pin lcd_SLK_Pin
                           lcd_mosi_Pin */
  GPIO_InitStruct.Pin = lcd_DC_Pin|lcd_CS_Pin|lcd_BLK_Pin|lcd_SLK_Pin
                          |lcd_mosi_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_MEDIUM;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pin : ultra_right_trig_Pin */
  GPIO_InitStruct.Pin = ultra_right_trig_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_MEDIUM;
  HAL_GPIO_Init(ultra_right_trig_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : pca9685_sda_Pin pca9685_scl_Pin */
  GPIO_InitStruct.Pin = pca9685_sda_Pin|pca9685_scl_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_MEDIUM;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : servo_pwr_en_Pin motor_EN_Pin */
  GPIO_InitStruct.Pin = servo_pwr_en_Pin|motor_EN_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_MEDIUM;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pins : DIN2_Pin DIN1_Pin CIN2_Pin CIN1_Pin
                           BIN2_Pin BIN1_Pin AIN2_Pin AIN1_Pin
                           buzzer_Pin */
  GPIO_InitStruct.Pin = DIN2_Pin|DIN1_Pin|CIN2_Pin|CIN1_Pin
                          |BIN2_Pin|BIN1_Pin|AIN2_Pin|AIN1_Pin
                          |buzzer_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_MEDIUM;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pins : ir_rear_left_Pin ir_rear_right_Pin */
  GPIO_InitStruct.Pin = ir_rear_left_Pin|ir_rear_right_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pin : ultra_left_trig_Pin */
  GPIO_InitStruct.Pin = ultra_left_trig_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_MEDIUM;
  HAL_GPIO_Init(ultra_left_trig_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : ultra_front_trig_Pin */
  GPIO_InitStruct.Pin = ultra_front_trig_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_MEDIUM;
  HAL_GPIO_Init(ultra_front_trig_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : ir_front_left_Pin ir_front_right_Pin */
  GPIO_InitStruct.Pin = ir_front_left_Pin|ir_front_right_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

}

/* USER CODE BEGIN 2 */

/* USER CODE END 2 */
