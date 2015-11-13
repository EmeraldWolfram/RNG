#include "Rcc.h"

//void gpioUnresetEnableClock(GPIO* port){
//	int valToShift = ((int)port - (0x40020000))/(0x400);
//
//	RCC_reg->RCC_AHB1RSTR &= ~(1 << (valToShift));
//	RCC_reg->RCC_AHB1ENR |= (0x00100000 | (1 << (valToShift)));
//}

void rngUnresetEnableClock(){
	RCC_reg->RCC_AHB2RSTR &= ~(1 << 6);
	RCC_reg->RCC_AHB2ENR  |= (1 << 6);

	RCC_reg->RCC_PLLCFGR &= ~(15 << 24);	//CLEAR PLLQ
	RCC_reg->RCC_PLLCFGR |= (3 << 24);		//set PLLQ to 0011
}
