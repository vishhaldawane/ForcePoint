################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/FriendClass.cpp \
../src/FriendFunctionAsOperator.cpp \
../src/FriendFunctionsProject.cpp 

OBJS += \
./src/FriendClass.o \
./src/FriendFunctionAsOperator.o \
./src/FriendFunctionsProject.o 

CPP_DEPS += \
./src/FriendClass.d \
./src/FriendFunctionAsOperator.d \
./src/FriendFunctionsProject.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


