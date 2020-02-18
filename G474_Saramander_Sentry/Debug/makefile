################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32G4xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
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
G474_Saramander_Sentry.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
G474_Saramander_Sentry.list \

OBJCOPY_BIN += \
G474_Saramander_Sentry.bin \


# All Target
all: G474_Saramander_Sentry.elf secondary-outputs

# Tool invocations
G474_Saramander_Sentry.elf: $(OBJS) $(USER_OBJS) C:\Users\ryouma\Documents\GitHub\RoboMaster_Salamander_okadatech\G474_Saramander_Sentry\STM32G474RETX_FLASH.ld
	arm-none-eabi-gcc -o "G474_Saramander_Sentry.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"C:\Users\ryouma\Documents\GitHub\RoboMaster_Salamander_okadatech\G474_Saramander_Sentry\STM32G474RETX_FLASH.ld" --specs=nosys.specs -Wl,-Map="G474_Saramander_Sentry.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

G474_Saramander_Sentry.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "G474_Saramander_Sentry.list"
	@echo 'Finished building: $@'
	@echo ' '

G474_Saramander_Sentry.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "G474_Saramander_Sentry.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
