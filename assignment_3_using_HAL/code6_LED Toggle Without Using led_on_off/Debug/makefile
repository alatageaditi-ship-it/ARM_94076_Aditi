################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32F4xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := code6_LED Toggle Without Using led_on_off
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
code6_LED\ Toggle\ Without\ Using\ led_on_off.elf \

MAP_FILES += \
code6_LED\ Toggle\ Without\ Using\ led_on_off.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
code6_LED\ Toggle\ Without\ Using\ led_on_off.list \


# All Target
all: main-build

# Main-build Target
main-build: code6_LED\ Toggle\ Without\ Using\ led_on_off.elf secondary-outputs

# Tool invocations
code6_LED\ Toggle\ Without\ Using\ led_on_off.elf code6_LED\ Toggle\ Without\ Using\ led_on_off.map: $(OBJS) $(USER_OBJS) C:\Users\aditi\OneDrive\Desktop\Sunbeam_Internship\ARM_94076_Aditi\assignment_3_using\ HAL\code6_LED\ Toggle\ Without\ Using\ led_on_off\STM32F407VGTX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "code6_LED Toggle Without Using led_on_off.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"C:\Users\aditi\OneDrive\Desktop\Sunbeam_Internship\ARM_94076_Aditi\assignment_3_using HAL\code6_LED Toggle Without Using led_on_off\STM32F407VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="code6_LED Toggle Without Using led_on_off.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

code6_LED\ Toggle\ Without\ Using\ led_on_off.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "code6_LED Toggle Without Using led_on_off.list"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) code6_LED\ Toggle\ Without\ Using\ led_on_off.elf code6_LED\ Toggle\ Without\ Using\ led_on_off.list code6_LED\ Toggle\ Without\ Using\ led_on_off.map code6_LED\\ Toggle\\ Without\\ Using\\ led_on_off.elf default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
