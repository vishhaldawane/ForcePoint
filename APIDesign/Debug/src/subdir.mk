################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/APIDesign.cpp \
../src/ArrayList.cpp \
../src/Collection.cpp \
../src/Iterable.cpp \
../src/Iterator.cpp \
../src/List.cpp \
../src/ListIterator.cpp 

OBJS += \
./src/APIDesign.o \
./src/ArrayList.o \
./src/Collection.o \
./src/Iterable.o \
./src/Iterator.o \
./src/List.o \
./src/ListIterator.o 

CPP_DEPS += \
./src/APIDesign.d \
./src/ArrayList.d \
./src/Collection.d \
./src/Iterable.d \
./src/Iterator.d \
./src/List.d \
./src/ListIterator.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


