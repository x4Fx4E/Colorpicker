#ifndef LED_DRIVER_LED_DRIVER_H_
#define LED_DRIVER_LED_DRIVER_H_
#include "stdint.h"

void MX_TIM4_Init(void);

void TIM4_SET_CH1(uint16_t duty_cycle);
void TIM4_SET_CH2(uint16_t duty_cycle);
void TIM4_SET_CH3(uint16_t duty_cycle);

uint16_t Get_CH1(void);
uint16_t Get_CH2(void);
uint16_t Get_CH3(void);

#endif
