#ifndef stm32f446re_H
#define stm32f446re_H
#include <stdint.h>

/************    Memory Base Add     ***********/
#define Flash_B_Add    0x08000000UL
#define SRAM_B_Add     0x20000000UL 

/************    AHB1 Prepherials Base Address     ***********/

#define  Rcc_Base_Address    0x40021000UL

/************    APB2 Prepherials Base Address     ***********/


//#define  GPIOA_Base_Address  5//(0x40010800UL)
//#define  GPIOB_Base_Address  6//(0x40010C00UL)
#define  GPIOA_Base_Address  0x40010800UL
#define  GPIOB_Base_Address  0x40010C00UL

#define  GPIOC_Base_Address  0x40011000UL
#define  GPIOD_Base_Address	 0x40011400UL
#define  GPIOE_Base_Address	 0x40011800UL
#define  GPIOF_Base_Address	 0x40011C00UL
#define  GPIOG_Base_Address  0x40012000UL
#define  Alternate_Fun_Base_Address 0x40010000UL
/************    GPIO Struct     ***********/
typedef struct AFR{

volatile	uint32_t EVCR;
volatile	uint32_t MAPR;
volatile	uint32_t EXTICR1;
volatile 	uint32_t EXTICR2;
volatile	uint32_t EXTICR3;
volatile	uint32_t EXTICR4;
volatile	uint32_t MAPR2;

	}AFT_t;


	/************    AFR Struct     ***********/

	typedef struct gpio{
		volatile uint32_t _CR[2] ;     /**/
		//volatile uint32_t _CRH;	 /**/
		volatile uint32_t _IDR;	 /**/
		volatile uint32_t _ODR;	 /**/
		volatile uint32_t _BSRR;	 /**/
		volatile uint32_t _BRR;	 /**/
		volatile uint32_t _LCKR;	 /**/


		}GPIO_RegDef_t;

	/************    GPIO Peripheral Def     ***********/
#define GPIOA               ((GPIO_RegDef_t*)GPIOA_Base_Address)
#define GPIOB			    ((GPIO_RegDef_t*)GPIOB_Base_Address)
#define GPIOC				((GPIO_RegDef_t*)GPIOC_Base_Address)
#define GPIOD				((GPIO_RegDef_t*)GPIOD_Base_Address)
#define GPIOE				((GPIO_RegDef_t*)GPIOE_Base_Address)
#define GPIOF				((GPIO_RegDef_t*)GPIOF_Base_Address)
#define GPIOG			    ((GPIO_RegDef_t*)GPIOG_Base_Address)
#define AltFun              ((AFT_t*) Alternate_Fun_Base_Address)

/*********          RCC Peripheral            ********/

typedef struct rcc{
	uint32_t RCC_CR;
	uint32_t RCC_CFGR;
	
	uint32_t RCC_CIR;
	
	uint32_t RCC_APB2RSTR;
	
	uint32_t RCC_APB1RSTR;
	uint32_t RCC_BDCR;
	uint32_t RCC_CSR;
	
	
	}RCC_Regdef_t;
	
	
/*****      RCC pref def       ****/	
#define  RCC      (RCC_Regdef_t*) Rcc_Base_Address

#endif
