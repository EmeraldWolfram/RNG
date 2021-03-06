#include "Rng.h"

void enableRNG(){
	RNG_reg->RNG_CR |= (1 << 2);	//Enable Generation
	RNG_reg->RNG_CR |= (1 << 3);	//Enable Interrupt
}

int getRandomNumber(){
	int data = 0;
	int status;

	status = RNG_reg->RNG_SR;
	status &= 1;

	if(status == 1)
		data = RNG_reg->RNG_DR;

	return data;
}

void resetSeedError(){
	int status = RNG_reg->RNG_SR;

	if(status == 0x44){
		RNG_reg->RNG_SR &= ~(1 << 6);
	}
}
