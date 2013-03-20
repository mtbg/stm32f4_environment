.extern _data_l_start
.extern _data_start
.extern _data_end

.extern _bss_start
.extern _bss_end
.extern _stack

.extern main

.section .text

.thumb_func
_start:

/* Copy .data section */
	ldr r2, =_data_l_start
	ldr r3, =_data_start
	ldr r4, =_data_end

/* FIXME: improve the loop */
1:	cmp r4, r3
	ble 1f
	ldr r5, [r2]
	add r2, #4
	str r5, [r3]
	add r3, #4
	b 1b
1:


/* Initialize .bss with zeros */
	ldr r2, =_bss_start
	ldr r3, =_bss_end
	mov r4, #0

1:	cmp r3, r2
	ble 1f
	str r4, [r2]
	add r2, #4
	b 1b
1:
/* Set the SP */
	ldr r2, =_stack_end
	msr PSP, r2
	mov sp, r2
/* Jump to main */
	bl main
1:	b 1b

.ltorg

.thumb_func

.extern OTG_FS_IRQHandler

Default_IRQHandler:
1:	b 1b /* Halt and catch fire since we probably would implicitly do the same without the handler in many cases */

.section .irq_vectors

vectors:
/* SYSTEM */
	.word 0				/* - */
	.word _start			/* Reset */
	.word NMI_IRQHandler		/* Non-maskable interrupt */
	.word HardFault_IRQHandler	/* Hard fault */
	.word MemManage_IRQHandler	/* Memory management */
	.word BusFault_IRQHandler	/* Memory access fault */
	.word UsageFault_IRQHandler	/* Undefined instrukction, illegal state */
	.word 0				/* - */
	.word 0				/* - */
	.word 0				/* - */
	.word 0				/* - */
	.word SVCall_IRQHandler		/* swi instruction */
	.word DebugMonitor_IRQHandler	/* Debug monitor */
	.word 0				/* - */
	.word PendSV_IRQHandler		/* Pendable system service request */
	.word SysTick_IRQHandler	/* System timer */
/* PERIPHERALS */
	.word WWDG_IRQHander		/* Window Watchdog interrupt */
	.word PVD_IRQHandler		/* PVD interrupt */
	.word TAMP_STAMP_IRQHandler	/* Tamper and timestamp interrupts */
	.word RTC_WKUP_IRQHandler	/* RTC wakeup interrupt */
	.word FLASH_IRQHandler		/* Global flash interrupt */
	.word RCC_IRQHandler		/* Global RCC interrupt */
	.word EXTI0_IRQHandler		/* EXTI0 interrupt */
	.word EXTI1_IRQHandler		/* EXTI1 interrupt */
	.word EXTI2_IRQHandler		/* EXTI2 interrupt */
	.word EXTI3_IRQHandler		/* EXTI3 interrupt */
	.word EXTI4_IRQHandler		/* EXTI4 interrupt */
	.word DMA1_Stream0_IRQHandler	/* DMA1 stream 0 interrupt */
	.word DMA1_Stream1_IRQHandler	/* DMA1 stream 1 interrupt */
	.word DMA1_Stream2_IRQHandler	/* DMA1 stream 2 interrupt */
	.word DMA1_Stream3_IRQHandler	/* DMA1 stream 3 interrupt */
	.word DMA1_Stream4_IRQHandler	/* DMA1 stream 4 interrupt */
	.word DMA1_Stream5_IRQHandler	/* DMA1 stream 5 interrupt */
	.word DMA1_Stream6_IRQHandler	/* DMA1 stream 6 interrupt */
	.word ADC_IRQHandler		/* ADC1, ADC2 and ADC3 interrupts */
	.word CAN1_TX_IRQHandler	/* CAN1 TX interrupts */
	.word CAN1_RX1_IRQHandler	/* CAN1 RX1 interrupts */
	.word CAN1_RX2_IRQHandler	/* CAN1 RX2 interrupt */
	.word CAN1_SCE_IRQHandler	/* CAN1 SCE interrupt */
	.word EXTI9_5_IRQHandler	/* EXTI5..EXTI9 interrupt */
	.word TIM1_BRK_TIM9_IRQHandler	/* TIM1 break + TIM9 interrupt */
	.word TIM1_UP_TIM10_IRQHandler	/* TIM1 update + TIM10 interrupt */
	.word TIM1_TRG_COM_TIM11_IRQHandler	/* TIM1 trigger and communication + TIM11 interrupt */
	.word TIM1_CC_IRQHandler	/* TIM1 capture compare interrupt */
	.word TIM2_IRQHandler		/* TIM2 interrupt */
	.word TIM3_IRQHandler		/* TIM3 interrupt */
	.word TIM4_IRQHandler		/* TIM4 interrupt */
	.word I2C1_EV_IRQHandler	/* I2C1 event */
	.word I2C1_ER_IRQHandler	/* I2C1 error */
	.word I2C2_EV_IRQHandler	/* I2C2 event */
	.word I2C2_ER_IRQHandler	/* I2C2 error */
	.word SPI1_IRQHandler		/* SPI1 interrupt */
	.word SPI2_IRQHandler		/* SPI2 interrupt */
	.word USART1_IRQHandler		/* USART1 interrupt */
	.word USART2_IRQHandler		/* USART2 interrupt */
	.word USART3_IRQHandler		/* USART3 interrupt */
	.word EXTI15_10			/* EXTI10..EXTI15 interrupt */
	.word RTC_Alarm_IRQHandler	/* RTC Alarm interrupt */
	.word OTG_FS_WKUP_IRQHandler	/* USB OTG FS wakeup interrupt */
	.word TIM8_BRK_TIM12_IRQHandler	/* TIM8 break + TIM12 interrupt */
	.word TIM8_UP_TIM13_IRQHandler	/* TIM8 update + TIM13 interrupt */
	.word TIM8_TRG_COM_TIM14_IRQHandler	/* TIM8 trigger and communication + TIM14 interrupt */
	.word TIM8_CC_IRQHandler	/* TIM8 capture compare interrupt */
	.word DMA1_Stream7_IRQHandler	/* DMA1 stream 7 interrupt */
	.word FSMC_IRQHandler		/* FSMC interrupt */
	.word SDIO_IRQHandler		/* SDIO interrupt */
	.word TIM5_IRQHandler		/* TIM5 interrupt */
	.word SPI3_IRQHandler		/* SPI3 interrupt */
	.word UART4_IRQHandler		/* UART4 interrupt */
	.word UART5_IRQHandler		/* UART5 interrupt */
	.word TIM6_DAC_IRQHandler	/* TIM6 + DAC1 and DAC2 underrun */
	.word TIM7_IRQHandler		/* TIM7 interrupt */
	.word DMA2_Stream0_IRQHandler	/* DMA2 stream 0 interrupt */
	.word DMA2_Stream1_IRQHandler	/* DMA2 stream 1 interrupt */
	.word DMA2_Stream2_IRQHandler	/* DMA2 stream 2 interrupt */
	.word DMA2_Stream3_IRQHandler	/* DMA2 stream 3 interrupt */
	.word DMA2_Stream4_IRQHandler	/* DMA2 stream 4 interrupt */
	.word ETH_IRQHandler		/* Ethernet interrupt */
	.word ETH_WKUP_IRQHandler	/* Ethernet wakeup interrupt */
	.word CAN2_TX_IRQHandler	/* CAN2 TX interrupt */
	.word CAN2_RX0_IRQHandler	/* CAN2 RX0 interrupt */
	.word CAN2_RX1_IRQHandler	/* CAN2 RX1 interrupt */
	.word CAN2_SCE_IRQHandler	/* CAN2 SCE interrupt */
	.word OTG_FS_IRQHandler		/* USB OTG FS interrupt */
	.word DMA2_Stream5_IRQHandler	/* DMA2 stream 5 interrupt */
	.word DMA2_Stream6_IRQHandler	/* DMA2 stream 6 interrupt */
	.word DMA2_Stream7_IRQHandler	/* DMA2 stream 7 interrupt */
	.word USART6_IRQHandler		/* USART6 interrupt */
	.word I2C3_EV_IRQHandler	/* I2C3 event */
	.word I2C3_ER_IRQHandler	/* I2C3 error */
	.word OTG_HS_EP1_OUT_IRQHandler	/* USB OTG HS endpoint 1 (output) interrupt */
	.word OTG_HS_EP1_IN_IRQHandler	/* USG OTG HS endpoint 1 (input) interrupt */
	.word OTG_HS_WKUP_IRQHandler	/* USB OTG HS wakeup interrupt */
	.word OTG_HS_IRQHandler		/* USB OTG HS interrupt */
	.word DCMI_IRQHandler		/* DCMI interrupt */
	.word CRYP_IRQHandler		/* Crypto engine interrupt */
	.word HASH_RNG_IRQHandler	/* Hash and random number generator interrupt */
	.word FPU_IRQHandler		/* Floating point unit interrupt */


/* Weak aliases to set the default handler */
	.thumb_set NMI_IRQHandler, Default_IRQHandler
	.weak NMI_IRQHandler
	.thumb_set HardFault_IRQHandler, Default_IRQHandler
	.weak HardFault_IRQHandler
	.thumb_set MemManage_IRQHandler, Default_IRQHandler
	.weak MemManage_IRQHandler
	.thumb_set BusFault_IRQHandler, Default_IRQHandler
	.weak BusFault_IRQHandler
	.thumb_set UsageFault_IRQHandler, Default_IRQHandler
	.weak UsageFault_IRQHandler
	.thumb_set SVCall_IRQHandler, Default_IRQHandler
	.weak SVCall_IRQHandler
	.thumb_set DebugMonitor_IRQHandler, Default_IRQHandler
	.weak DebugMonitor_IRQHandler
	.thumb_set PendSV_IRQHandler, Default_IRQHandler
	.weak PendSV_IRQHandler
	.thumb_set SysTick_IRQHandler, Default_IRQHandler
	.weak SysTick_IRQHandler
	.thumb_set WWDG_IRQHander, Default_IRQHandler
	.weak WWDG_IRQHander
	.thumb_set PVD_IRQHandler, Default_IRQHandler
	.weak PVD_IRQHandler
	.thumb_set TAMP_STAMP_IRQHandler, Default_IRQHandler
	.weak TAMP_STAMP_IRQHandler
	.thumb_set RTC_WKUP_IRQHandler, Default_IRQHandler
	.weak RTC_WKUP_IRQHandler
	.thumb_set FLASH_IRQHandler, Default_IRQHandler
	.weak FLASH_IRQHandler
	.thumb_set RCC_IRQHandler, Default_IRQHandler
	.weak RCC_IRQHandler
	.thumb_set EXTI0_IRQHandler, Default_IRQHandler
	.weak EXTI0_IRQHandler
	.thumb_set EXTI1_IRQHandler, Default_IRQHandler
	.weak EXTI1_IRQHandler
	.thumb_set EXTI2_IRQHandler, Default_IRQHandler
	.weak EXTI2_IRQHandler
	.thumb_set EXTI3_IRQHandler, Default_IRQHandler
	.weak EXTI3_IRQHandler
	.thumb_set EXTI4_IRQHandler, Default_IRQHandler
	.weak EXTI4_IRQHandler
	.thumb_set DMA1_Stream0_IRQHandler, Default_IRQHandler
	.weak DMA1_Stream0_IRQHandler
	.thumb_set DMA1_Stream1_IRQHandler, Default_IRQHandler
	.weak DMA1_Stream1_IRQHandler
	.thumb_set DMA1_Stream2_IRQHandler, Default_IRQHandler
	.weak DMA1_Stream2_IRQHandler
	.thumb_set DMA1_Stream3_IRQHandler, Default_IRQHandler
	.weak DMA1_Stream3_IRQHandler
	.thumb_set DMA1_Stream4_IRQHandler, Default_IRQHandler
	.weak DMA1_Stream4_IRQHandler
	.thumb_set DMA1_Stream5_IRQHandler, Default_IRQHandler
	.weak DMA1_Stream5_IRQHandler
	.thumb_set DMA1_Stream6_IRQHandler, Default_IRQHandler
	.weak DMA1_Stream6_IRQHandler
	.thumb_set ADC_IRQHandler, Default_IRQHandler
	.weak ADC_IRQHandler
	.thumb_set CAN1_TX_IRQHandler, Default_IRQHandler
	.weak CAN1_TX_IRQHandler
	.thumb_set CAN1_RX1_IRQHandler, Default_IRQHandler
	.weak CAN1_RX1_IRQHandler
	.thumb_set CAN1_RX2_IRQHandler, Default_IRQHandler
	.weak CAN1_RX2_IRQHandler
	.thumb_set CAN1_SCE_IRQHandler, Default_IRQHandler
	.weak CAN1_SCE_IRQHandler
	.thumb_set EXTI9_5_IRQHandler, Default_IRQHandler
	.weak EXTI9_5_IRQHandler
	.thumb_set TIM1_BRK_TIM9_IRQHandler, Default_IRQHandler
	.weak TIM1_BRK_TIM9_IRQHandler
	.thumb_set TIM1_UP_TIM10_IRQHandler, Default_IRQHandler
	.weak TIM1_UP_TIM10_IRQHandler
	.thumb_set TIM1_TRG_COM_TIM11_IRQHandler, Default_IRQHandler
	.weak TIM1_TRG_COM_TIM11_IRQHandler
	.thumb_set TIM1_CC_IRQHandler, Default_IRQHandler
	.weak TIM1_CC_IRQHandler
	.thumb_set TIM2_IRQHandler, Default_IRQHandler
	.weak TIM2_IRQHandler
	.thumb_set TIM3_IRQHandler, Default_IRQHandler
	.weak TIM3_IRQHandler
	.thumb_set TIM4_IRQHandler, Default_IRQHandler
	.weak TIM4_IRQHandler
	.thumb_set I2C1_EV_IRQHandler, Default_IRQHandler
	.weak I2C1_EV_IRQHandler
	.thumb_set I2C1_ER_IRQHandler, Default_IRQHandler
	.weak I2C1_ER_IRQHandler
	.thumb_set I2C2_EV_IRQHandler, Default_IRQHandler
	.weak I2C2_EV_IRQHandler
	.thumb_set I2C2_ER_IRQHandler, Default_IRQHandler
	.weak I2C2_ER_IRQHandler
	.thumb_set SPI1_IRQHandler, Default_IRQHandler
	.weak SPI1_IRQHandler
	.thumb_set SPI2_IRQHandler, Default_IRQHandler
	.weak SPI2_IRQHandler
	.thumb_set USART1_IRQHandler, Default_IRQHandler
	.weak USART1_IRQHandler
	.thumb_set USART2_IRQHandler, Default_IRQHandler
	.weak USART2_IRQHandler
	.thumb_set USART3_IRQHandler, Default_IRQHandler
	.weak USART3_IRQHandler
	.thumb_set EXTI15_10, Default_IRQHandler
	.weak EXTI15_10
	.thumb_set RTC_Alarm_IRQHandler, Default_IRQHandler
	.weak RTC_Alarm_IRQHandler
	.thumb_set OTG_FS_WKUP_IRQHandler, Default_IRQHandler
	.weak OTG_FS_WKUP_IRQHandler
	.thumb_set TIM8_BRK_TIM12_IRQHandler, Default_IRQHandler
	.weak TIM8_BRK_TIM12_IRQHandler
	.thumb_set TIM8_UP_TIM13_IRQHandler, Default_IRQHandler
	.weak TIM8_UP_TIM13_IRQHandler
	.thumb_set TIM8_TRG_COM_TIM14_IRQHandler, Default_IRQHandler
	.weak TIM8_TRG_COM_TIM14_IRQHandler
	.thumb_set TIM8_CC_IRQHandler, Default_IRQHandler
	.weak TIM8_CC_IRQHandler
	.thumb_set DMA1_Stream7_IRQHandler, Default_IRQHandler
	.weak DMA1_Stream7_IRQHandler
	.thumb_set FSMC_IRQHandler, Default_IRQHandler
	.weak FSMC_IRQHandler
	.thumb_set SDIO_IRQHandler, Default_IRQHandler
	.weak SDIO_IRQHandler
	.thumb_set TIM5_IRQHandler, Default_IRQHandler
	.weak TIM5_IRQHandler
	.thumb_set SPI3_IRQHandler, Default_IRQHandler
	.weak SPI3_IRQHandler
	.thumb_set UART4_IRQHandler, Default_IRQHandler
	.weak UART4_IRQHandler
	.thumb_set UART5_IRQHandler, Default_IRQHandler
	.weak UART5_IRQHandler
	.thumb_set TIM6_DAC_IRQHandler, Default_IRQHandler
	.weak TIM6_DAC_IRQHandler
	.thumb_set TIM7_IRQHandler, Default_IRQHandler
	.weak TIM7_IRQHandler
	.thumb_set DMA2_Stream0_IRQHandler, Default_IRQHandler
	.weak DMA2_Stream0_IRQHandler
	.thumb_set DMA2_Stream1_IRQHandler, Default_IRQHandler
	.weak DMA2_Stream1_IRQHandler
	.thumb_set DMA2_Stream2_IRQHandler, Default_IRQHandler
	.weak DMA2_Stream2_IRQHandler
	.thumb_set DMA2_Stream3_IRQHandler, Default_IRQHandler
	.weak DMA2_Stream3_IRQHandler
	.thumb_set DMA2_Stream4_IRQHandler, Default_IRQHandler
	.weak DMA2_Stream4_IRQHandler
	.thumb_set ETH_IRQHandler, Default_IRQHandler
	.weak ETH_IRQHandler
	.thumb_set ETH_WKUP_IRQHandler, Default_IRQHandler
	.weak ETH_WKUP_IRQHandler
	.thumb_set CAN2_TX_IRQHandler, Default_IRQHandler
	.weak CAN2_TX_IRQHandler
	.thumb_set CAN2_RX0_IRQHandler, Default_IRQHandler
	.weak CAN2_RX0_IRQHandler
	.thumb_set CAN2_RX1_IRQHandler, Default_IRQHandler
	.weak CAN2_RX1_IRQHandler
	.thumb_set CAN2_SCE_IRQHandler, Default_IRQHandler
	.weak CAN2_SCE_IRQHandler
	.thumb_set OTG_FS_IRQHandler, Default_IRQHandler
	.weak OTG_FS_IRQHandler
	.thumb_set DMA2_Stream5_IRQHandler, Default_IRQHandler
	.weak DMA2_Stream5_IRQHandler
	.thumb_set DMA2_Stream6_IRQHandler, Default_IRQHandler
	.weak DMA2_Stream6_IRQHandler
	.thumb_set DMA2_Stream7_IRQHandler, Default_IRQHandler
	.weak DMA2_Stream7_IRQHandler
	.thumb_set USART6_IRQHandler, Default_IRQHandler
	.weak USART6_IRQHandler
	.thumb_set I2C3_EV_IRQHandler, Default_IRQHandler
	.weak I2C3_EV_IRQHandler
	.thumb_set I2C3_ER_IRQHandler, Default_IRQHandler
	.weak I2C3_ER_IRQHandler
	.thumb_set OTG_HS_EP1_OUT_IRQHandler, Default_IRQHandler
	.weak OTG_HS_EP1_OUT_IRQHandler
	.thumb_set OTG_HS_EP1_IN_IRQHandler, Default_IRQHandler
	.weak OTG_HS_EP1_IN_IRQHandler
	.thumb_set OTG_HS_WKUP_IRQHandler, Default_IRQHandler
	.weak OTG_HS_WKUP_IRQHandler
	.thumb_set OTG_HS_IRQHandler, Default_IRQHandler
	.weak OTG_HS_IRQHandler
	.thumb_set DCMI_IRQHandler, Default_IRQHandler
	.weak DCMI_IRQHandler
	.thumb_set CRYP_IRQHandler, Default_IRQHandler
	.weak CRYP_IRQHandler
	.thumb_set HASH_RNG_IRQHandler, Default_IRQHandler
	.weak HASH_RNG_IRQHandler
	.thumb_set FPU_IRQHandler, Default_IRQHandler
	.weak FPU_IRQHandler


