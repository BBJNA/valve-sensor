################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
gcc/%.o: ../gcc/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: GNU Compiler'
	"C:/ti/gcc_arm_none_eabi_9_2_1/bin/arm-none-eabi-gcc-9.2.1.exe" -c -mcpu=cortex-m0plus -march=armv6-m -mthumb -mfloat-abi=soft -D__MSPM0L1306__ -I"C:/Users/jesma/workspace_v12/valve-sensor" -I"C:/Users/jesma/workspace_v12/valve-sensor/Debug" -I"C:/ti/mspm0_sdk_1_10_01_05/source/third_party/CMSIS/Core/Include" -I"C:/ti/mspm0_sdk_1_10_01_05/source" -I"C:/ti/gcc_arm_none_eabi_9_2_1/arm-none-eabi/include/newlib-nano" -I"C:/ti/gcc_arm_none_eabi_9_2_1/arm-none-eabi/include" -O2 -ffunction-sections -fdata-sections -g -gdwarf-3 -gstrict-dwarf -Wall -MMD -MP -MF"gcc/$(basename $(<F)).d_raw" -MT"$(@)" -I"C:/Users/jesma/workspace_v12/valve-sensor/Debug/syscfg" -std=c99 $(GEN_OPTS__FLAG) -o"$@" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


