################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include cmocka/subdir.mk
-include Test/request_test/subdir.mk
-include Test/mock_obj/usart/subdir.mk
-include Test/mock_obj/spi/subdir.mk
-include Test/mock_obj/led_mock/subdir.mk
-include Test/mock_obj/led_driver/subdir.mk
-include Test/mock_obj/ldr_driver/subdir.mk
-include Test/mock_obj/i2c/subdir.mk
-include Test/mock_obj/esp_mock/subdir.mk
-include Test/mock_obj/encoder_driver/subdir.mk
-include Test/mock_obj/delay/subdir.mk
-include Test/mock_obj/crc/subdir.mk
-include APL/ring_buffer/subdir.mk
-include APL/request/subdir.mk
-include APL/ldr/subdir.mk
-include APL/i2c_data/subdir.mk
-include APL/encoder/subdir.mk
-include APL/display/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: Test.exe

# Tool invocations
Test.exe: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MinGW C Linker'
	gcc -ftest-coverage -fprofile-arcs -o "Test.exe" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) Test.exe
	-@echo ' '

.PHONY: all clean dependents

-include ../makefile.targets
