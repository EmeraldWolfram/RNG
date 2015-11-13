#include "stm32f4xx.h"
#include "Rng.h"
#include "stm32f4xx_hal_cortex.h"

volatile int randomValue;
volatile int entered;

void HASH_RNG_IRQHandler(){
	int status = RNG_reg->RNG_SR;
	if(status == 1)
		randomValue = RNG_reg->RNG_DR;
	else
		RNG_reg->RNG_SR = 0;

	entered++;
}


int main(){
	int i;
	rngUnresetEnableClock();
	enableRNG();

	HAL_NVIC_EnableIRQ(HASH_RNG_IRQn);

	while(1){
		i++;
//		randomValue = randomValue;
//		randomValue = getRandomNumber();
	}
}
