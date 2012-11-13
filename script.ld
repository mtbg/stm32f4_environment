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

GPIOA = 0x40020000;
GPIOB = 0x40020400;
GPIOC = 0x40020800;
GPIOD = 0x40020c00;
GPIOE = 0x40021000;
GPIOF = 0x40021400;
GPIOG = 0x40021800;
GPIOH = 0x40021c00;
GPIOI = 0x40022000;
RCC = 0x40023800;
RNG = 0x50060800;
