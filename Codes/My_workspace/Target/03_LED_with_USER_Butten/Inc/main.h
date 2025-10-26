/*
 * main.h
 *
 *  Created on: Sep 13, 2025
 *      Author: ANAS
 */

#ifndef MAIN_H_
#define MAIN_H_

/// Set and clear macros
#define SET_GPIOAEN_RCC		0x01
#define SET_GPIODEN_RCC		0x08
#define CLEAR_MODER15_GPIOD	0x3FFFFFFF
#define CLEAR_MODER14_GPIOD	0xCFFFFFFF
#define CLEAR_MODER0_GPIOA	0xFFFFFFFC
#define SET_MODER15_GPIOD	0x40000000
#define SET_MODER14_GPIOD	0x10000000
#define SET_ODR15_GPIOD		0x8000
#define SET_ODR14_GPIOD		0x4000
#define SET_MODER0_GPIOA	0x00
#define CLEAR_ODR15_GPIOD	0x7FFF
#define CLEAR_ODR14_GPIOD	0xBFFF


/// Base addresses
#define	GPIOA_BASEADDRESS	0x40020000
#define	GPIOD_BASEADDRESS	0x40020C00
#define RCC_BASEADDRESS		0x40023800


/// Register structures
/* 1. GPIO
 * 2. RCC
 * 3. EXTI
 */
typedef struct
{
	volatile uint32_t mode_reg;
	volatile uint32_t output_type_reg;
	volatile uint32_t output_speed_reg;
	volatile uint32_t pullup_pulldown_reg;
	volatile uint32_t input_data_reg;
	volatile uint32_t output_data_reg;
}GPIO;

typedef struct
{
	volatile uint32_t clock_control_reg;
	volatile uint32_t PLL_config_reg;
	volatile uint32_t clock_config_reg;
	volatile uint32_t clock_interrupt_reg;
	volatile uint32_t AHB1_peripheral_reset_reg;
	volatile uint32_t AHB2_peripheral_reset_reg;
	volatile uint32_t AHB3_peripheral_reset_reg;
	volatile uint32_t Reserved0;
	volatile uint32_t APB1_peripheral_reset_reg;
	volatile uint32_t APB2_peripheral_reset_reg;
	volatile uint32_t Reserved1;
	volatile uint32_t Reserved2;
	volatile uint32_t AHB1_peripheral_clock_enable_reg;
}RCC;

typedef struct
{
	volatile uint32_t EXTI_interrupt_mask_register;
	volatile uint32_t EXTI_event_mask_register;
	volatile uint32_t EXTI_RTSR;
	volatile uint32_t EXTI_FTSR;
	volatile uint32_t EXTI_SWIER;
	volatile uint32_t EXTI_PR;
}EXTI;

#define GPIOA	((GPIO*)GPIOA_BASEADDRESS)
#define GPIOD	((GPIO*)GPIOD_BASEADDRESS)
#define RCC		((RCC*)RCC_BASEADDRESS)



#endif /* MAIN_H_ */
