################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/CryptoEngine/CMD.c \
../Src/CryptoEngine/GRP.c 

OBJS += \
./Src/CryptoEngine/CMD.o \
./Src/CryptoEngine/GRP.o 

C_DEPS += \
./Src/CryptoEngine/CMD.d \
./Src/CryptoEngine/GRP.d 


# Each subdirectory must supply rules for building sources it contributes
Src/CryptoEngine/%.o Src/CryptoEngine/%.su Src/CryptoEngine/%.cyclo: ../Src/CryptoEngine/%.c Src/CryptoEngine/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32F401xE -c -I../Inc -I"../$(ProjDirPath)/Headers/CMSIS/Include" -I"../$(ProjDirPath)/Headers/CMSIS/Device/ST/STM32F4xx/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-CryptoEngine

clean-Src-2f-CryptoEngine:
	-$(RM) ./Src/CryptoEngine/CMD.cyclo ./Src/CryptoEngine/CMD.d ./Src/CryptoEngine/CMD.o ./Src/CryptoEngine/CMD.su ./Src/CryptoEngine/GRP.cyclo ./Src/CryptoEngine/GRP.d ./Src/CryptoEngine/GRP.o ./Src/CryptoEngine/GRP.su

.PHONY: clean-Src-2f-CryptoEngine

