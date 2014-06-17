################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/FileReader.cpp \
../src/TPTServer.cpp \
../src/Unzipper.cpp \
../src/mouvement.cpp \
../src/point.cpp \
../src/utilisateur.cpp 

CXX_SRCS += \
../src/utilisateur-odb.cxx 

OBJS += \
./src/FileReader.o \
./src/TPTServer.o \
./src/Unzipper.o \
./src/mouvement.o \
./src/point.o \
./src/utilisateur-odb.o \
./src/utilisateur.o 

CPP_DEPS += \
./src/FileReader.d \
./src/TPTServer.d \
./src/Unzipper.d \
./src/mouvement.d \
./src/point.d \
./src/utilisateur.d 

CXX_DEPS += \
./src/utilisateur-odb.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"/cal/homes/noret/git/TPTServer/TPTServer/libodb/include" -I"/cal/homes/noret/git/TPTServer/TPTServer/libodbmysql/include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cxx
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"/cal/homes/noret/git/TPTServer/TPTServer/libodb/include" -I"/cal/homes/noret/git/TPTServer/TPTServer/libodbmysql/include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


