################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/BowlingGame.cpp \
../src/Frame.cpp \
../src/main.cpp 

CPP_DEPS += \
./src/BowlingGame.d \
./src/Frame.d \
./src/main.d 

OBJS += \
./src/BowlingGame.o \
./src/Frame.o \
./src/main.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I../include/ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/BowlingGame.d ./src/BowlingGame.o ./src/Frame.d ./src/Frame.o ./src/main.d ./src/main.o

.PHONY: clean-src

