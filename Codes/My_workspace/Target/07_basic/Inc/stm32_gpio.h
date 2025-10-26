/*
 * stm32_GPIO.h
 *
 *  Created on: Oct 5, 2025
 *      Author: ANAS
 */

#ifndef STM32_GPIO_H_
#define STM32_GPIO_H_

/* #############################    INCLUDING HEADER FILES ##########################################*/

#include "stdint.h"
#include "main.h"



/* #############################    INDIVIDUAL REGISTERS FOR GPIO ###################################*/

/***********************
 * GPIOx_MODER Register
 ***********************/
typedef union
{
    struct
    {
        volatile uint32_t MODER0  :2;   /*!< Port x mode bits (0:1)   */
        volatile uint32_t MODER1  :2;   /*!< Port x mode bits (2:3)   */
        volatile uint32_t MODER2  :2;   /*!< Port x mode bits (4:5)   */
        volatile uint32_t MODER3  :2;   /*!< Port x mode bits (6:7)   */
        volatile uint32_t MODER4  :2;   /*!< Port x mode bits (8:9)   */
        volatile uint32_t MODER5  :2;   /*!< Port x mode bits (10:11) */
        volatile uint32_t MODER6  :2;   /*!< Port x mode bits (12:13) */
        volatile uint32_t MODER7  :2;   /*!< Port x mode bits (14:15) */
        volatile uint32_t MODER8  :2;   /*!< Port x mode bits (16:17) */
        volatile uint32_t MODER9  :2;   /*!< Port x mode bits (18:19) */
        volatile uint32_t MODER10 :2;   /*!< Port x mode bits (20:21) */
        volatile uint32_t MODER11 :2;   /*!< Port x mode bits (22:23) */
        volatile uint32_t MODER12 :2;   /*!< Port x mode bits (24:25) */
        volatile uint32_t MODER13 :2;   /*!< Port x mode bits (26:27) */
        volatile uint32_t MODER14 :2;   /*!< Port x mode bits (28:29) */
        volatile uint32_t MODER15 :2;   /*!< Port x mode bits (30:31) */
    } bits;

    volatile uint32_t all; /*!< Full 32-bit register access */
} MODE_REG_TYPE;


/***********************
 * GPIOx_OTYPER Register
 ***********************/
typedef union
{
    struct
    {
        volatile uint32_t OT0  :1;   /*!< Port x output type bit 0   */
        volatile uint32_t OT1  :1;   /*!< Port x output type bit 1   */
        volatile uint32_t OT2  :1;   /*!< Port x output type bit 2   */
        volatile uint32_t OT3  :1;   /*!< Port x output type bit 3   */
        volatile uint32_t OT4  :1;   /*!< Port x output type bit 4   */
        volatile uint32_t OT5  :1;   /*!< Port x output type bit 5   */
        volatile uint32_t OT6  :1;   /*!< Port x output type bit 6   */
        volatile uint32_t OT7  :1;   /*!< Port x output type bit 7   */
        volatile uint32_t OT8  :1;   /*!< Port x output type bit 8   */
        volatile uint32_t OT9  :1;   /*!< Port x output type bit 9   */
        volatile uint32_t OT10 :1;   /*!< Port x output type bit 10  */
        volatile uint32_t OT11 :1;   /*!< Port x output type bit 11  */
        volatile uint32_t OT12 :1;   /*!< Port x output type bit 12  */
        volatile uint32_t OT13 :1;   /*!< Port x output type bit 13  */
        volatile uint32_t OT14 :1;   /*!< Port x output type bit 14  */
        volatile uint32_t OT15 :1;   /*!< Port x output type bit 15  */
        volatile uint32_t RESERVED :16; /*!< Reserved bits (16–31) */
    } bits;

    volatile uint32_t all; /*!< Full 32-bit register access */
} OTYPE_REG_TYPE;


/************************
 * GPIOx_OSPEEDR Register
 ************************/
typedef union
{
    struct
    {
        volatile uint32_t OSPEEDR0  :2;   /*!< Port x speed configuration bits (0:1)   */
        volatile uint32_t OSPEEDR1  :2;   /*!< Port x speed configuration bits (2:3)   */
        volatile uint32_t OSPEEDR2  :2;   /*!< Port x speed configuration bits (4:5)   */
        volatile uint32_t OSPEEDR3  :2;   /*!< Port x speed configuration bits (6:7)   */
        volatile uint32_t OSPEEDR4  :2;   /*!< Port x speed configuration bits (8:9)   */
        volatile uint32_t OSPEEDR5  :2;   /*!< Port x speed configuration bits (10:11) */
        volatile uint32_t OSPEEDR6  :2;   /*!< Port x speed configuration bits (12:13) */
        volatile uint32_t OSPEEDR7  :2;   /*!< Port x speed configuration bits (14:15) */
        volatile uint32_t OSPEEDR8  :2;   /*!< Port x speed configuration bits (16:17) */
        volatile uint32_t OSPEEDR9  :2;   /*!< Port x speed configuration bits (18:19) */
        volatile uint32_t OSPEEDR10 :2;   /*!< Port x speed configuration bits (20:21) */
        volatile uint32_t OSPEEDR11 :2;   /*!< Port x speed configuration bits (22:23) */
        volatile uint32_t OSPEEDR12 :2;   /*!< Port x speed configuration bits (24:25) */
        volatile uint32_t OSPEEDR13 :2;   /*!< Port x speed configuration bits (26:27) */
        volatile uint32_t OSPEEDR14 :2;   /*!< Port x speed configuration bits (28:29) */
        volatile uint32_t OSPEEDR15 :2;   /*!< Port x speed configuration bits (30:31) */
    } bits;

    volatile uint32_t all; /*!< Full 32-bit register access */
} OSPEED_REG_TYPE;


/***********************
 * GPIOx_PUPDR Register
 ***********************/
typedef union
{
    struct
    {
        volatile uint32_t PUPDR0  :2;   /*!< Port x pull-up/pull-down bits (0:1)   */
        volatile uint32_t PUPDR1  :2;   /*!< Port x pull-up/pull-down bits (2:3)   */
        volatile uint32_t PUPDR2  :2;   /*!< Port x pull-up/pull-down bits (4:5)   */
        volatile uint32_t PUPDR3  :2;   /*!< Port x pull-up/pull-down bits (6:7)   */
        volatile uint32_t PUPDR4  :2;   /*!< Port x pull-up/pull-down bits (8:9)   */
        volatile uint32_t PUPDR5  :2;   /*!< Port x pull-up/pull-down bits (10:11) */
        volatile uint32_t PUPDR6  :2;   /*!< Port x pull-up/pull-down bits (12:13) */
        volatile uint32_t PUPDR7  :2;   /*!< Port x pull-up/pull-down bits (14:15) */
        volatile uint32_t PUPDR8  :2;   /*!< Port x pull-up/pull-down bits (16:17) */
        volatile uint32_t PUPDR9  :2;   /*!< Port x pull-up/pull-down bits (18:19) */
        volatile uint32_t PUPDR10 :2;   /*!< Port x pull-up/pull-down bits (20:21) */
        volatile uint32_t PUPDR11 :2;   /*!< Port x pull-up/pull-down bits (22:23) */
        volatile uint32_t PUPDR12 :2;   /*!< Port x pull-up/pull-down bits (24:25) */
        volatile uint32_t PUPDR13 :2;   /*!< Port x pull-up/pull-down bits (26:27) */
        volatile uint32_t PUPDR14 :2;   /*!< Port x pull-up/pull-down bits (28:29) */
        volatile uint32_t PUPDR15 :2;   /*!< Port x pull-up/pull-down bits (30:31) */
    } bits;

    volatile uint32_t all; /*!< Full 32-bit register access */
} PUPD_REG_TYPE;


/***********************
 * GPIOx_IDR Register
 ***********************/
typedef union
{
    struct
    {
        volatile uint32_t IDR0  :1;   /*!< Port input data bit 0  */
        volatile uint32_t IDR1  :1;   /*!< Port input data bit 1  */
        volatile uint32_t IDR2  :1;   /*!< Port input data bit 2  */
        volatile uint32_t IDR3  :1;   /*!< Port input data bit 3  */
        volatile uint32_t IDR4  :1;   /*!< Port input data bit 4  */
        volatile uint32_t IDR5  :1;   /*!< Port input data bit 5  */
        volatile uint32_t IDR6  :1;   /*!< Port input data bit 6  */
        volatile uint32_t IDR7  :1;   /*!< Port input data bit 7  */
        volatile uint32_t IDR8  :1;   /*!< Port input data bit 8  */
        volatile uint32_t IDR9  :1;   /*!< Port input data bit 9  */
        volatile uint32_t IDR10 :1;   /*!< Port input data bit 10 */
        volatile uint32_t IDR11 :1;   /*!< Port input data bit 11 */
        volatile uint32_t IDR12 :1;   /*!< Port input data bit 12 */
        volatile uint32_t IDR13 :1;   /*!< Port input data bit 13 */
        volatile uint32_t IDR14 :1;   /*!< Port input data bit 14 */
        volatile uint32_t IDR15 :1;   /*!< Port input data bit 15 */
        volatile uint32_t RESERVED :16; /*!< Reserved bits (16–31) */
    } bits;

    volatile uint32_t all; /*!< Full 32-bit register access */
} ID_REG_TYPE;


/***********************
 * GPIOx_ODR Register
 ***********************/
typedef union
{
    struct
    {
        volatile uint32_t ODR0  :1;   /*!< Port output data bit 0  */
        volatile uint32_t ODR1  :1;   /*!< Port output data bit 1  */
        volatile uint32_t ODR2  :1;   /*!< Port output data bit 2  */
        volatile uint32_t ODR3  :1;   /*!< Port output data bit 3  */
        volatile uint32_t ODR4  :1;   /*!< Port output data bit 4  */
        volatile uint32_t ODR5  :1;   /*!< Port output data bit 5  */
        volatile uint32_t ODR6  :1;   /*!< Port output data bit 6  */
        volatile uint32_t ODR7  :1;   /*!< Port output data bit 7  */
        volatile uint32_t ODR8  :1;   /*!< Port output data bit 8  */
        volatile uint32_t ODR9  :1;   /*!< Port output data bit 9  */
        volatile uint32_t ODR10 :1;   /*!< Port output data bit 10 */
        volatile uint32_t ODR11 :1;   /*!< Port output data bit 11 */
        volatile uint32_t ODR12 :1;   /*!< Port output data bit 12 */
        volatile uint32_t ODR13 :1;   /*!< Port output data bit 13 */
        volatile uint32_t ODR14 :1;   /*!< Port output data bit 14 */
        volatile uint32_t ODR15 :1;   /*!< Port output data bit 15 */
        volatile uint32_t RESERVED :16; /*!< Reserved bits (16–31) */
    } bits;

    volatile uint32_t all; /*!< Full 32-bit register access */
} OD_REG_TYPE;

/************************
 * GPIOx_BSRR Register
 ************************/
typedef union
{
    struct
    {
        volatile uint32_t BS0  :1;  /*!< Set bit for pin 0   */
        volatile uint32_t BS1  :1;  /*!< Set bit for pin 1   */
        volatile uint32_t BS2  :1;  /*!< Set bit for pin 2   */
        volatile uint32_t BS3  :1;  /*!< Set bit for pin 3   */
        volatile uint32_t BS4  :1;  /*!< Set bit for pin 4   */
        volatile uint32_t BS5  :1;  /*!< Set bit for pin 5   */
        volatile uint32_t BS6  :1;  /*!< Set bit for pin 6   */
        volatile uint32_t BS7  :1;  /*!< Set bit for pin 7   */
        volatile uint32_t BS8  :1;  /*!< Set bit for pin 8   */
        volatile uint32_t BS9  :1;  /*!< Set bit for pin 9   */
        volatile uint32_t BS10 :1;  /*!< Set bit for pin 10  */
        volatile uint32_t BS11 :1;  /*!< Set bit for pin 11  */
        volatile uint32_t BS12 :1;  /*!< Set bit for pin 12  */
        volatile uint32_t BS13 :1;  /*!< Set bit for pin 13  */
        volatile uint32_t BS14 :1;  /*!< Set bit for pin 14  */
        volatile uint32_t BS15 :1;  /*!< Set bit for pin 15  */

        volatile uint32_t BR0  :1;  /*!< Reset bit for pin 0   */
        volatile uint32_t BR1  :1;  /*!< Reset bit for pin 1   */
        volatile uint32_t BR2  :1;  /*!< Reset bit for pin 2   */
        volatile uint32_t BR3  :1;  /*!< Reset bit for pin 3   */
        volatile uint32_t BR4  :1;  /*!< Reset bit for pin 4   */
        volatile uint32_t BR5  :1;  /*!< Reset bit for pin 5   */
        volatile uint32_t BR6  :1;  /*!< Reset bit for pin 6   */
        volatile uint32_t BR7  :1;  /*!< Reset bit for pin 7   */
        volatile uint32_t BR8  :1;  /*!< Reset bit for pin 8   */
        volatile uint32_t BR9  :1;  /*!< Reset bit for pin 9   */
        volatile uint32_t BR10 :1;  /*!< Reset bit for pin 10  */
        volatile uint32_t BR11 :1;  /*!< Reset bit for pin 11  */
        volatile uint32_t BR12 :1;  /*!< Reset bit for pin 12  */
        volatile uint32_t BR13 :1;  /*!< Reset bit for pin 13  */
        volatile uint32_t BR14 :1;  /*!< Reset bit for pin 14  */
        volatile uint32_t BR15 :1;  /*!< Reset bit for pin 15  */
    } bits;

    volatile uint32_t all; /*!< Full 32-bit register access */
} BSRR_REG_TYPE;


/************************
 * GPIOx_LCKR Register
 ************************/
typedef union
{
    struct
    {
        volatile uint32_t LCK0  :1;  /*!< Lock bit for pin 0   */
        volatile uint32_t LCK1  :1;  /*!< Lock bit for pin 1   */
        volatile uint32_t LCK2  :1;  /*!< Lock bit for pin 2   */
        volatile uint32_t LCK3  :1;  /*!< Lock bit for pin 3   */
        volatile uint32_t LCK4  :1;  /*!< Lock bit for pin 4   */
        volatile uint32_t LCK5  :1;  /*!< Lock bit for pin 5   */
        volatile uint32_t LCK6  :1;  /*!< Lock bit for pin 6   */
        volatile uint32_t LCK7  :1;  /*!< Lock bit for pin 7   */
        volatile uint32_t LCK8  :1;  /*!< Lock bit for pin 8   */
        volatile uint32_t LCK9  :1;  /*!< Lock bit for pin 9   */
        volatile uint32_t LCK10 :1;  /*!< Lock bit for pin 10  */
        volatile uint32_t LCK11 :1;  /*!< Lock bit for pin 11  */
        volatile uint32_t LCK12 :1;  /*!< Lock bit for pin 12  */
        volatile uint32_t LCK13 :1;  /*!< Lock bit for pin 13  */
        volatile uint32_t LCK14 :1;  /*!< Lock bit for pin 14  */
        volatile uint32_t LCK15 :1;  /*!< Lock bit for pin 15  */
        volatile uint32_t LCKK  :1;  /*!< Lock key bit          */
        volatile uint32_t RES   :15; /*!< Reserved              */
    } bits;

    volatile uint32_t all; /*!< Full 32-bit register access */
} LCKR_REG_TYPE;


/************************
 * GPIOx_AFRL Register
 ************************/
typedef union
{
    struct
    {
        volatile uint32_t AFRL0 :4;  /*!< Alternate function selection for pin 0  */
        volatile uint32_t AFRL1 :4;  /*!< Alternate function selection for pin 1  */
        volatile uint32_t AFRL2 :4;  /*!< Alternate function selection for pin 2  */
        volatile uint32_t AFRL3 :4;  /*!< Alternate function selection for pin 3  */
        volatile uint32_t AFRL4 :4;  /*!< Alternate function selection for pin 4  */
        volatile uint32_t AFRL5 :4;  /*!< Alternate function selection for pin 5  */
        volatile uint32_t AFRL6 :4;  /*!< Alternate function selection for pin 6  */
        volatile uint32_t AFRL7 :4;  /*!< Alternate function selection for pin 7  */
    } bits;

    volatile uint32_t all; /*!< Full 32-bit register access */
} AFRL_REG_TYPE;


/************************
 * GPIOx_AFRH Register
 ************************/
typedef union
{
    struct
    {
        volatile uint32_t AFRH8  :4;  /*!< Alternate function selection for pin 8  */
        volatile uint32_t AFRH9  :4;  /*!< Alternate function selection for pin 9  */
        volatile uint32_t AFRH10 :4;  /*!< Alternate function selection for pin 10 */
        volatile uint32_t AFRH11 :4;  /*!< Alternate function selection for pin 11 */
        volatile uint32_t AFRH12 :4;  /*!< Alternate function selection for pin 12 */
        volatile uint32_t AFRH13 :4;  /*!< Alternate function selection for pin 13 */
        volatile uint32_t AFRH14 :4;  /*!< Alternate function selection for pin 14 */
        volatile uint32_t AFRH15 :4;  /*!< Alternate function selection for pin 15 */
    } bits;

    volatile uint32_t all; /*!< Full 32-bit register access */
} AFRH_REG_TYPE;

/* #############################    STRUCTURE FOR GPIO ##############################################*/

typedef struct
{
    volatile uint32_t MODER;    // Mode register                 		(offset 0x00)
    volatile uint32_t OTYPER;   // Output type register           		(offset 0x04)
    volatile uint32_t OSPEEDR;  // Output speed register          		(offset 0x08)
    volatile uint32_t PUPDR;    // Pull-up/pull-down register     		(offset 0x0C)
    volatile uint32_t IDR;      // Input data register            		(offset 0x10)
    volatile OD_REG_TYPE ODR;      // Output data register           		(offset 0x14)
    volatile uint32_t BSRR;     // Bit set/reset register         		(offset 0x18)
    volatile uint32_t LCKR;     // Configuration lock register    		(offset 0x1C)
    volatile uint32_t AFRL;     // Alternate function low register		(offset 0x20)
    volatile uint32_t AFRH;     // Alternate function high register		(offset 0x24)
}GPIO_TypeDef;




/* #############################    BASE ADDRESSES FOR EACH GPIO BLOCK ################################*/

#define GPIOA_BASEADDRESS 0x40020000UL
#define GPIOB_BASEADDRESS 0x40020400UL
#define GPIOC_BASEADDRESS 0x40020800UL
#define GPIOD_BASEADDRESS 0x40020C00UL
#define GPIOE_BASEADDRESS 0x40021000UL
#define GPIOF_BASEADDRESS 0x40021400UL
#define GPIOG_BASEADDRESS 0x40021800UL
#define GPIOH_BASEADDRESS 0x40021C00UL
#define GPIOI_BASEADDRESS 0x40022000UL


/* #############################    POINTERS FOR EACH GPIO PERIPHERAL MEMMAP(HW) ######################*/

#define GPIOA	((GPIO_TypeDef*)GPIOA_BASEADDRESS)
#define GPIOB   ((GPIO_TypeDef*)GPIOB_BASEADDRESS)
#define GPIOC   ((GPIO_TypeDef*)GPIOC_BASEADDRESS)
#define GPIOD   ((GPIO_TypeDef*)GPIOD_BASEADDRESS)
#define GPIOE   ((GPIO_TypeDef*)GPIOE_BASEADDRESS)
#define GPIOF   ((GPIO_TypeDef*)GPIOF_BASEADDRESS)
#define GPIOG   ((GPIO_TypeDef*)GPIOG_BASEADDRESS)
#define GPIOH   ((GPIO_TypeDef*)GPIOH_BASEADDRESS)
#define GPIOI   ((GPIO_TypeDef*)GPIOI_BASEADDRESS)

/* #############################    GLOBAL VARIABLES ##################################################*/


/* #############################    FUNCTION DECLARATIONS #############################################*/

extern void init_config_gpio(void);

#endif /* STM32_GPIO_H_ */
