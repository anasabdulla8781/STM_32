/*
 * main.h
 *
 *  Created on: Sep 13, 2025
 *      Author: ANAS
 */

#ifndef MAIN_H_
#define MAIN_H_


#define RCC_BASE_ADDRESS	0x40023800
#define GPIOA_BASE_ADDRESS	0x40020000
#define GPIOD_BASE_ADDRESS	0x40020C00

#define SET_GPIOA_EN				0x01
#define SET_GPIOD_EN				0x08
#define CLEAR_GPIOD_PIN12_MODE		0xFCFFFFFF
#define SET_GPIOD_PIN12_MODE_OUTPUT	0x1000000
#define SET_GPIOD_PIN12_OUTPUT		0x1000
#define CLEAR_GPIOD_PIN12_OUTPUT	0xFFFFEFFF

typedef struct
{
	volatile uint32_t rcc_cr;
	volatile uint32_t rcc_pll_cfgr;
	volatile uint32_t rcc_cfgr;
	volatile uint32_t rcc_cir;
	volatile uint32_t rcc_ahb1_rstr;
	volatile uint32_t rcc_ahb2_rstr;
	volatile uint32_t rcc_ahb3_rstr;
	volatile uint32_t rcc_reserved1;
	volatile uint32_t rcc_apb1_rstr;
	volatile uint32_t rcc_apb2_rstr;
	volatile uint32_t rcc_reserved2;
	volatile uint32_t rcc_reserved3;
	volatile uint32_t rcc_ahb1_enr;
	/// add the remaining
}P_RCC;


typedef struct
{
	volatile uint32_t gpio_mode_reg;
	volatile uint32_t gpio_output_type_reg;
	volatile uint32_t gpio_output_speed_reg;
	volatile uint32_t gpio_pullup_pulldown_reg;
	volatile uint32_t gpio_intput_data_reg;
	volatile uint32_t gpio_output_data_reg;
	/// add the remaining
}P_GPIO;

#define RCC 	((P_RCC*) RCC_BASE_ADDRESS)
#define GPIOA	((P_GPIO*) GPIOA_BASE_ADDRESS)
#define GPIOD	((P_GPIO*) GPIOD_BASE_ADDRESS)


#endif /* MAIN_H_ */
