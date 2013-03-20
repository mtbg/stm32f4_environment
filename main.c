#include "stm32f4_periph.h"

void main(void) {
	volatile int i;
	int j;
	RCC.CR |= 1<<24;
	RCC.AHB1ENR |= 1<<3 | 1;
	RCC.AHB2ENR |= 1<<6;
	RNG.CR |= 1<<2;
	GPIOD.MODER = 0x55 << (12*2);
	j = 0;
	while(1) {
		j++;
		for(i=0; i<500000; i++);
		GPIOD.ODR = (GPIOD.ODR & ~(0xf<<12)) | ((0x1<<(12 + (RNG.DR&3))));
	}
}
