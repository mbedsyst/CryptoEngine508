################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/ATECC508A/operations/atecc508a_crypto.c \
../Src/ATECC508A/operations/atecc508a_device_ops.c \
../Src/ATECC508A/operations/atecc508a_encryption.c \
../Src/ATECC508A/operations/atecc508a_key_management.c \
../Src/ATECC508A/operations/atecc508a_random.c \
../Src/ATECC508A/operations/atecc508a_sign_verify.c 

OBJS += \
./Src/ATECC508A/operations/atecc508a_crypto.o \
./Src/ATECC508A/operations/atecc508a_device_ops.o \
./Src/ATECC508A/operations/atecc508a_encryption.o \
./Src/ATECC508A/operations/atecc508a_key_management.o \
./Src/ATECC508A/operations/atecc508a_random.o \
./Src/ATECC508A/operations/atecc508a_sign_verify.o 

C_DEPS += \
./Src/ATECC508A/operations/atecc508a_crypto.d \
./Src/ATECC508A/operations/atecc508a_device_ops.d \
./Src/ATECC508A/operations/atecc508a_encryption.d \
./Src/ATECC508A/operations/atecc508a_key_management.d \
./Src/ATECC508A/operations/atecc508a_random.d \
./Src/ATECC508A/operations/atecc508a_sign_verify.d 


# Each subdirectory must supply rules for building sources it contributes
Src/ATECC508A/operations/%.o Src/ATECC508A/operations/%.su Src/ATECC508A/operations/%.cyclo: ../Src/ATECC508A/operations/%.c Src/ATECC508A/operations/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32F401xE -c -I../Inc -I"../$(ProjDirPath)/Headers/CMSIS/Include" -I"../$(ProjDirPath)/Headers/CMSIS/Device/ST/STM32F4xx/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-ATECC508A-2f-operations

clean-Src-2f-ATECC508A-2f-operations:
	-$(RM) ./Src/ATECC508A/operations/atecc508a_crypto.cyclo ./Src/ATECC508A/operations/atecc508a_crypto.d ./Src/ATECC508A/operations/atecc508a_crypto.o ./Src/ATECC508A/operations/atecc508a_crypto.su ./Src/ATECC508A/operations/atecc508a_device_ops.cyclo ./Src/ATECC508A/operations/atecc508a_device_ops.d ./Src/ATECC508A/operations/atecc508a_device_ops.o ./Src/ATECC508A/operations/atecc508a_device_ops.su ./Src/ATECC508A/operations/atecc508a_encryption.cyclo ./Src/ATECC508A/operations/atecc508a_encryption.d ./Src/ATECC508A/operations/atecc508a_encryption.o ./Src/ATECC508A/operations/atecc508a_encryption.su ./Src/ATECC508A/operations/atecc508a_key_management.cyclo ./Src/ATECC508A/operations/atecc508a_key_management.d ./Src/ATECC508A/operations/atecc508a_key_management.o ./Src/ATECC508A/operations/atecc508a_key_management.su ./Src/ATECC508A/operations/atecc508a_random.cyclo ./Src/ATECC508A/operations/atecc508a_random.d ./Src/ATECC508A/operations/atecc508a_random.o ./Src/ATECC508A/operations/atecc508a_random.su ./Src/ATECC508A/operations/atecc508a_sign_verify.cyclo ./Src/ATECC508A/operations/atecc508a_sign_verify.d ./Src/ATECC508A/operations/atecc508a_sign_verify.o ./Src/ATECC508A/operations/atecc508a_sign_verify.su

.PHONY: clean-Src-2f-ATECC508A-2f-operations

