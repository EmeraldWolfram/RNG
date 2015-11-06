#ifndef	__Rng_H__
#define	__Rng_H__

#include <stdint.h>
#include "stm32f4xx_hal_rcc.h"

typedef struct RNG_Type RNG_t;
struct RNG_Type{
	uint32_t  RNG_CR;
	uint32_t  RNG_SR;
	uint32_t  RNG_DR;
};

//#define ADDRESS	0x50060800
#define	RNG_reg	((RNG_t *)0x50060800)

void enableRNG();

#endif	//__Rng_H__
