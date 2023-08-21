/*
 * sytick.h
 *
 *  Created on: Jul 22, 2023
 *      Author: Ahmed
 */

#ifndef SYSTICK_H_
#define SYSTICK_H_
#include <stdint.h>
#define Systick_Base_Address 0xE000E010



#define Clk_Src_mask (0b0<<2)  //0 for /8 and 1 for processor clock
#define Clk_En_mask 0b1
typedef struct sys{

	uint32_t Ctrl;
	uint32_t Load;
	uint32_t Val;
	uint32_t Calib;

}Systick_config_t;



void Systick_Delay_ms(uint32_t);

#endif /* SYSTICK_H_ */
