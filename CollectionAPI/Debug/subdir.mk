################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../ArrayList.cpp \
../Collection.cpp \
../Iterable.cpp \
../Iterator.cpp \
../List.cpp \
../TestCollection.cpp 

OBJS += \
./ArrayList.o \
./Collection.o \
./Iterable.o \
./Iterator.o \
./List.o \
./TestCollection.o 

CPP_DEPS += \
./ArrayList.d \
./Collection.d \
./Iterable.d \
./Iterator.d \
./List.d \
./TestCollection.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


