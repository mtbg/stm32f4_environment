INCLUDE memory.ld

SECTIONS {
	/*.irq_vectors : {
		. = ORIGIN(int_flash);
		KEEP(*(.irq_vectors));
	} > int_flash
*/

	.text : {
		KEEP(*(.irq_vectors));
		*(.text)
	} > int_flash

	.bss : {
		_bss_start = ALIGN(4);
		. = _bss_start;
		*(.bss)
		_bss_end = ALIGN(4);
		. = _bss_end;
	} > int_ram

	.data : {
		_data_start = ALIGN(4);
		_data_l_start = LOADADDR(.data);
		. = _data_start;
		*(.data)
		_data_end = ALIGN(4);
		. = _data_end;
	} > int_ram AT > int_flash
	
	.stack : {
		_stack_start = .;
		. = ORIGIN(int_ram) + LENGTH(int_ram) - 4;
		_stack_end = .;
	} > int_ram

	.rodata : {
		*(.rodata)
	} > int_flash
}


FSMC		= 0xa0000000;
RNG		= 0x50060800;
HASH		= 0x50060400;
CRYP		= 0x50060000;
OTG_FS		= 0x50000000;
OTG_HS		= 0x40040000;
ETH_MAC		= 0x40028000;
ETH_MMC		= 0x40028100;
ETH_PTP		= 0x40028700;
ETH_DMA		= 0x40029000;
DMA2		= 0x40026400;
DMA1		= 0x40026000;
FLASH		= 0x40023c00;
RCC		= 0x40023800;
CRC		= 0x40023000;
GPIOI		= 0x40022000;
GPIOH		= 0x40021c00;
GPIOG		= 0x40021800;
GPIOF		= 0x40021400;
GPIOE		= 0x40021000;
GPIOD		= 0x40020c00;
GPIOC		= 0x40020800;
GPIOB		= 0x40020400;
GPIOA		= 0x40020000;
SPI6		= 0x40015400;
SPI5		= 0x40015000;
TIM11		= 0x40014800;
TIM10		= 0x40014400;
TIM9		= 0x40014000;
EXTI		= 0x40013c00;
SYSCFG		= 0x40013800;
SPI4		= 0x40013400;
SPI1		= 0x40013000;
SDIO		= 0x40012c00;
ADC1		= 0x40012000;
ADC2		= 0x40012100;
ADC3		= 0x40012200;
ADC		= 0x40012300;
USART6		= 0x40011400;
USART1		= 0x40011000;
TIM8		= 0x40010400;
TIM1		= 0x40010000;
UART8		= 0x40007c00;
UART7		= 0x40007800;
DAC		= 0x40007400;
PWR		= 0x40007000;
CAN1		= 0x40006800;
CAN2		= 0x40006400;
I2C3		= 0x40005c00;
I2C2		= 0x40005800;
I2C1		= 0x40005400;
UART5		= 0x40005000;
UART4		= 0x40004c00;
USART3		= 0x40004800;
USART2		= 0x40004400;
SPI3		= 0x40003c00;
SPI2		= 0x40003800;
IWDG		= 0x40003000;
WWDG		= 0x40002c00;
RTC		= 0x40002800;
TIM14		= 0x40002000;
TIM13		= 0x40001c00;
TIM12		= 0x40001800;
TIM7		= 0x40001400;
TIM6		= 0x40001000;
TIM5		= 0x40000c00;
TIM4		= 0x40000800;
TIM3		= 0x40000400;
TIM2		= 0x40000000;
