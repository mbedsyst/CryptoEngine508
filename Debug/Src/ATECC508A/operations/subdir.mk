################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/ATECC508A/operations/atecc508a_random.c 

OBJS += \
./Src/ATECC508A/operations/atecc508a_random.o 

C_DEPS += \
./Src/ATECC508A/operations/atecc508a_random.d 


# Each subdirectory must supply rules for building sources it contributes
Src/ATECC508A/operations/%.o Src/ATECC508A/operations/%.su Src/ATECC508A/operations/%.cyclo: ../Src/ATECC508A/operations/%.c Src/ATECC508A/operations/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32F401xE -c -I../Inc -I"../$(ProjDirPath)/Headers/CMSIS/Include" -I"../$(ProjDirPath)/Headers/CMSIS/Device/ST/STM32F4xx/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-ATECC508A-2f-operations

clean-Src-2f-ATECC508A-2f-operations:
	-$(RM) ./Src/ATECC508A/operations/atecc508a_random.cyclo ./Src/ATECC508A/operations/atecc508a_random.d ./Src/ATECC508A/operations/atecc508a_random.o ./Src/ATECC508A/operations/atecc508a_random.su

.PHONY: clean-Src-2f-ATECC508A-2f-operations

