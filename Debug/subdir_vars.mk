################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Add inputs and outputs from these tool invocations to the build variables 
SYSCFG_SRCS += \
../valve-sensor.syscfg 

LDS_SRCS += \
../mspm0l1306.lds 

C_SRCS += \
../valve-sensor.c \
./syscfg/ti_msp_dl_config.c 

GEN_FILES += \
./syscfg/ti_msp_dl_config.c 

GEN_MISC_DIRS += \
./syscfg 

C_DEPS += \
./valve-sensor.d \
./syscfg/ti_msp_dl_config.d 

OBJS += \
./valve-sensor.o \
./syscfg/ti_msp_dl_config.o 

GEN_MISC_FILES += \
./syscfg/ti_msp_dl_config.h \
./syscfg/Event.dot 

GEN_MISC_DIRS__QUOTED += \
"syscfg" 

OBJS__QUOTED += \
"valve-sensor.o" \
"syscfg\ti_msp_dl_config.o" 

GEN_MISC_FILES__QUOTED += \
"syscfg\ti_msp_dl_config.h" \
"syscfg\Event.dot" 

C_DEPS__QUOTED += \
"valve-sensor.d" \
"syscfg\ti_msp_dl_config.d" 

GEN_FILES__QUOTED += \
"syscfg\ti_msp_dl_config.c" 

C_SRCS__QUOTED += \
"../valve-sensor.c" \
"./syscfg/ti_msp_dl_config.c" 

SYSCFG_SRCS__QUOTED += \
"../valve-sensor.syscfg" 


