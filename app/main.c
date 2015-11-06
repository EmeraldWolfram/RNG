#include "stm32f4xx.h"
#include "Rng.h"

int main(){
	int status;
	int data;

	enableRNG();
	while(1){
		status = RNG_reg->RNG_SR;
		status &= 1;
		if(status == 1){
			data = RNG_reg->RNG_DR;
		}

	}
}
