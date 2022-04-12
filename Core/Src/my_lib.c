#include"my_lib.h"
void off_led(uint32_t col){
	uint32_t k = GPIOD->ODR;
	if (RED == col)
		k &= 0x0000Bfff;
	else if(GRN == col)
		k &= 0x0000efff;
	else if(ORN == col)
		k &= 0x0000dfff;
	GPIOD->ODR = k;
}
void on_led(uint32_t col){
	uint32_t k = GPIOD->ODR;
	if (RED == col)
		k|= 0x00004000;
	else if(GRN == col)
		k|= 0x00001000;
	else if(ORN == col)
		k|= 0x00002000;
	GPIOD->ODR = k;
}
