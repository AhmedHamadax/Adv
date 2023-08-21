#include <stdint.h>
#include "Err_Typ.h"


#ifndef NVIC
#define NVIC

typedef enum{
	WWDG=0,
	PVD,
	TAMPER,
	RTC,
	FLASH,
	RCC,
	EXTI0,
	EXTI1,
	EXTI2,
	EXTI3,
	EXTI4,
	DMA1_Channel1,
	DMA1_Channel2,
	DMA1_Channel3,
	DMA1_Channel4,
	DMA1_Channel5,
	DMA1_Channel6,
	DMA1_Channel7,
	ADC1_2,
	Can1_Tx
	,USART2=38

	,USART3

}IRQ_t ;



void NVIC_Pref_en(IRQ_t);
void NVIC_Pref_dis(IRQ_t);
void NVIC_Pref_Flag_en(IRQ_t);
void NVIC_Pref_Flag_dis(IRQ_t);
void NVIC_Priority_set(uint8_t ,uint8_t );



#endif


