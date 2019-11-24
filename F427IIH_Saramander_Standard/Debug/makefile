################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include Drivers/STM32F4xx_HAL_Driver/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
F427IIH_Saramander_Standard.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
F427IIH_Saramander_Standard.list \

OBJCOPY_HEX += \
F427IIH_Saramander_Standard.hex \

OBJCOPY_BIN += \
F427IIH_Saramander_Standard.bin \


# All Target
all: F427IIH_Saramander_Standard.elf secondary-outputs

# Tool invocations
F427IIH_Saramander_Standard.elf: $(OBJS) $(USER_OBJS) C:\Users\ryouma\Documents\GitHub\RoboMaster_Salamander_okadatech\F427IIH_Saramander_Standard\STM32F427IIHX_FLASH.ld
	arm-none-eabi-gcc -o "F427IIH_Saramander_Standard.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"C:\Users\ryouma\Documents\GitHub\RoboMaster_Salamander_okadatech\F427IIH_Saramander_Standard\STM32F427IIHX_FLASH.ld" --specs=nosys.specs -Wl,-Map="F427IIH_Saramander_Standard.map" -Wl,--gc-sections -static -u _printf_float --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

F427IIH_Saramander_Standard.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "F427IIH_Saramander_Standard.list"
	@echo 'Finished building: $@'
	@echo ' '

F427IIH_Saramander_Standard.hex: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "F427IIH_Saramander_Standard.hex"
	@echo 'Finished building: $@'
	@echo ' '

F427IIH_Saramander_Standard.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "F427IIH_Saramander_Standard.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
