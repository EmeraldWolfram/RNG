#include "Rng.h"

void enableRNG(){
	__HAL_RCC_RNG_CLK_ENABLE();

	RNG_reg->RNG_CR = 0x00000004;
}
