/*
 * STM32_GPT.h
 *
 *  Created on: Oct 19, 2025
 *      Author: ANAS
 */

#ifndef INC_STM32_GPT_H_
#define INC_STM32_GPT_H_


#include <stdint.h>

typedef struct
{
	volatile uint32_t TIMx_CR1;      // 0x00: Control register 1
	volatile uint32_t TIMx_CR2;      // 0x04: Control register 2
	volatile uint32_t TIMx_SMCR;     // 0x08: Slave mode control register
	volatile uint32_t TIMx_DIER;     // 0x0C: DMA/Interrupt enable register
	volatile uint32_t TIMx_SR;       // 0x10: Status register
	volatile uint32_t TIMx_EGR;      // 0x14: Event generation register
	volatile uint32_t TIMx_CCMR1;    // 0x18: Capture/compare mode register 1
	volatile uint32_t TIMx_CCMR2;    // 0x1C: Capture/compare mode register 2
	volatile uint32_t TIMx_CCER;     // 0x20: Capture/compare enable register
	volatile uint32_t TIMx_CNT;      // 0x24: Counter register
	volatile uint32_t TIMx_PSC;      // 0x28: Prescaler
	volatile uint32_t TIMx_ARR;      // 0x2C: Auto-reload register
	volatile uint32_t RESERVED0;     // 0x30: Reserved (RCR only for advanced timers)
	volatile uint32_t TIMx_CCR1;     // 0x34: Capture/compare register 1
	volatile uint32_t TIMx_CCR2;     // 0x38: Capture/compare register 2
	volatile uint32_t TIMx_CCR3;     // 0x3C: Capture/compare register 3
	volatile uint32_t TIMx_CCR4;     // 0x40: Capture/compare register 4
	volatile uint32_t RESERVED1;     // 0x44: Reserved (BDTR for advanced timers)
	volatile uint32_t TIMx_DCR;      // 0x48: DMA control register
	volatile uint32_t TIMx_DMAR;     // 0x4C: DMA address for full transfer
	volatile uint32_t TIMx_OR; 	   // 0x50: Option register
} gpt_structure;


/// Address of the GPT

#define GPT2_BASEADDRESS	0x40000000


/// Pointer to the GPT Structure

#define gpt2_ptr	((gpt_structure*)(GPT2_BASEADDRESS))


/// Macros
#define CLK_FREQEUNCY		16000 					/// (16MHz)
#define TIMER_ON			1						/// Turn on the timer
#define ENABLE_ARR			128						/// Turn on ARR
/// Function declarions

extern void timer2_init(uint32_t clock_frequency);



#endif /* INC_STM32_GPT_H_ */
