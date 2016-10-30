/*
 * VRS_cv5.h
 *
 *  Created on: 18. 10. 2016
 *      Author: Lenovo
 */

#ifndef VRS_CV5_H_
#define VRS_CV5_H_

void adc_init(void);
void ADC1_IRQHandler(void);
void init_NVIC(void);
void initUSART1(void);
void PutcUART1(char);
void USART1_IRQHandler(void);
void RegisterCallbackUART1(void *);

#endif /* VRS_CV5_H_ */
