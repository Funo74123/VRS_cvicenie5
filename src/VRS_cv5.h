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
void initUSART2(void);
double Prevod(void);
void Put(char []);
void Stav(uint16_t);
void USART2_IRQHandler(void);
void RegisterCallbackUART2(void *);

#endif /* VRS_CV5_H_ */
