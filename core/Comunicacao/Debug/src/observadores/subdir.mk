################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/observadores/ObservadorSerial.cpp 

OBJS += \
./src/observadores/ObservadorSerial.o 

CPP_DEPS += \
./src/observadores/ObservadorSerial.d 


# Each subdirectory must supply rules for building sources it contributes
src/observadores/%.o: ../src/observadores/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/andre/workspace/RFSUS/Comunicacao/include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


