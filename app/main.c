#include "stm32f4xx.h"
#include "Rng.h"

int main(){
	int randomValue;
//	int data, status;

	enableRNG();
	while(1){
		randomValue = getRandomNumber();
	}
}
