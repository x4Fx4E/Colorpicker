#ifndef LDR_DRIVER_LDR_DRIVER_H_
#define LDR_DRIVER_LDR_DRIVER_H_
#include "main.h"

void MX_ADC1_Init(void);
void ADC1_Activate(void);
void ADC1_2_IRQHandler(void);
uint16_t ADC1_Get();

#endif
