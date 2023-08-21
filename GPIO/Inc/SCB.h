#include <stdint.h>
#include "stm32f103.h"
#include "Err_Typ.h"


#define AIRCR_Password 0x05FA0000

#define AIRCR_Bit_Mask 8


typedef enum{
	xxxx=3,
	xxxy,
	xxyy,
	xyyy

}Pri_Group_t;

uint8_t SCB_Pri_Typ(Pri_Group_t);



