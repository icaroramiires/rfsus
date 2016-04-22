################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ComunicacaoRecepcao.cpp \
../src/Extern.cpp \
../src/Test.cpp 

OBJS += \
./src/ComunicacaoRecepcao.o \
./src/Extern.o \
./src/Test.o 

CPP_DEPS += \
./src/ComunicacaoRecepcao.d \
./src/Extern.d \
./src/Test.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/webmaster/workspace/rfsus/cpp/comunicacaoRecepcao/include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


