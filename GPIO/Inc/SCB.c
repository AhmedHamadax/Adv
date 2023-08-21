#include <SCB.h>


uint8_t SCB_Pri_Typ(Pri_Group_t val){
	uint8_t Error_Status=OK;
if( (val>=3)&&(val<=6)   )	{
	SCB->AIRCR=  AIRCR_Password|(val<<AIRCR_Bit_Mask);
	Error_Status=OK;
}
else Error_Status=NOK;


return Error_Status;

}
