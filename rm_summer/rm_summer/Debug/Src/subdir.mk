################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/can.c \
../Src/gpio.c \
../Src/main.c \
../Src/mecanum.c \
../Src/motor.c \
../Src/pid.c \
../Src/spi.c \
../Src/stm32f4xx_hal_msp.c \
../Src/stm32f4xx_it.c \
../Src/system_stm32f4xx.c \
../Src/tim.c \
../Src/usart.c 

OBJS += \
./Src/can.o \
./Src/gpio.o \
./Src/main.o \
./Src/mecanum.o \
./Src/motor.o \
./Src/pid.o \
./Src/spi.o \
./Src/stm32f4xx_hal_msp.o \
./Src/stm32f4xx_it.o \
./Src/system_stm32f4xx.o \
./Src/tim.o \
./Src/usart.o 

C_DEPS += \
./Src/can.d \
./Src/gpio.d \
./Src/main.d \
./Src/mecanum.d \
./Src/motor.d \
./Src/pid.d \
./Src/spi.d \
./Src/stm32f4xx_hal_msp.d \
./Src/stm32f4xx_it.d \
./Src/system_stm32f4xx.d \
./Src/tim.d \
./Src/usart.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o: ../Src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 '-D__weak=__attribute__((weak))' '-D__packed=__attribute__((__packed__))' -DUSE_HAL_DRIVER -DSTM32F427xx -I"C:/stm32workspace/rm_summer/Inc" -I"C:/stm32workspace/rm_summer/Drivers/STM32F4xx_HAL_Driver/Inc" -I"C:/stm32workspace/rm_summer/Drivers/STM32F4xx_HAL_Driver/Inc/Legacy" -I"C:/stm32workspace/rm_summer/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/stm32workspace/rm_summer/Drivers/CMSIS/Include"  -Og -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


