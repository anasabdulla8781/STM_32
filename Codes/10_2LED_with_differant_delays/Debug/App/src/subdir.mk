################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../App/src/app_main.c 

OBJS += \
./App/src/app_main.o 

C_DEPS += \
./App/src/app_main.d 


# Each subdirectory must supply rules for building sources it contributes
App/src/%.o App/src/%.su App/src/%.cyclo: ../App/src/%.c App/src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F407G_DISC1 -DSTM32F4 -DSTM32F407VGTx -c -I../Inc -I"D:/Anas_Embedded system/STM32_Activities/Codes/10_2LED_with_differant_delays/Services/inc" -I"D:/Anas_Embedded system/STM32_Activities/Codes/10_2LED_with_differant_delays/App/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-App-2f-src

clean-App-2f-src:
	-$(RM) ./App/src/app_main.cyclo ./App/src/app_main.d ./App/src/app_main.o ./App/src/app_main.su

.PHONY: clean-App-2f-src

