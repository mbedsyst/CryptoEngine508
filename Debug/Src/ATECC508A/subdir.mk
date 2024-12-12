################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/ATECC508A/atecc508a_crc.c \
../Src/ATECC508A/atecc508a_group.c \
../Src/ATECC508A/atecc508a_packet.c \
../Src/ATECC508A/atecc508a_utility.c 

OBJS += \
./Src/ATECC508A/atecc508a_crc.o \
./Src/ATECC508A/atecc508a_group.o \
./Src/ATECC508A/atecc508a_packet.o \
./Src/ATECC508A/atecc508a_utility.o 

C_DEPS += \
./Src/ATECC508A/atecc508a_crc.d \
./Src/ATECC508A/atecc508a_group.d \
./Src/ATECC508A/atecc508a_packet.d \
./Src/ATECC508A/atecc508a_utility.d 


# Each subdirectory must supply rules for building sources it contributes
Src/ATECC508A/%.o Src/ATECC508A/%.su Src/ATECC508A/%.cyclo: ../Src/ATECC508A/%.c Src/ATECC508A/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32F401xE -c -I../Inc -I"../$(ProjDirPath)/Headers/CMSIS/Include" -I"../$(ProjDirPath)/Headers/CMSIS/Device/ST/STM32F4xx/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-ATECC508A

clean-Src-2f-ATECC508A:
	-$(RM) ./Src/ATECC508A/atecc508a_crc.cyclo ./Src/ATECC508A/atecc508a_crc.d ./Src/ATECC508A/atecc508a_crc.o ./Src/ATECC508A/atecc508a_crc.su ./Src/ATECC508A/atecc508a_group.cyclo ./Src/ATECC508A/atecc508a_group.d ./Src/ATECC508A/atecc508a_group.o ./Src/ATECC508A/atecc508a_group.su ./Src/ATECC508A/atecc508a_packet.cyclo ./Src/ATECC508A/atecc508a_packet.d ./Src/ATECC508A/atecc508a_packet.o ./Src/ATECC508A/atecc508a_packet.su ./Src/ATECC508A/atecc508a_utility.cyclo ./Src/ATECC508A/atecc508a_utility.d ./Src/ATECC508A/atecc508a_utility.o ./Src/ATECC508A/atecc508a_utility.su

.PHONY: clean-Src-2f-ATECC508A

