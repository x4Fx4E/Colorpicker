################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Test/Test/mock_obj/ldr_driver/ldr_driver.c 

OBJS += \
./Test/Test/mock_obj/ldr_driver/ldr_driver.o 

C_DEPS += \
./Test/Test/mock_obj/ldr_driver/ldr_driver.d 


# Each subdirectory must supply rules for building sources it contributes
Test/Test/mock_obj/ldr_driver/%.o: ../Test/Test/mock_obj/ldr_driver/%.c
	gcc -O2 -g -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"

