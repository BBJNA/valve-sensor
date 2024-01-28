################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: GNU Compiler'
	"C:/ti/gcc_arm_none_eabi_9_2_1/bin/arm-none-eabi-gcc-9.2.1.exe" -c -mcpu=cortex-m0plus -march=armv6-m -mthumb -mfloat-abi=soft -D__MSPM0L1306__ -I"C:/Users/jesma/workspace_v12/valve-sensor" -I"C:/Users/jesma/workspace_v12/valve-sensor/Debug" -I"C:/ti/mspm0_sdk_1_10_01_05/source/third_party/CMSIS/Core/Include" -I"C:/ti/mspm0_sdk_1_10_01_05/source" -I"C:/ti/gcc_arm_none_eabi_9_2_1/arm-none-eabi/include/newlib-nano" -I"C:/ti/gcc_arm_none_eabi_9_2_1/arm-none-eabi/include" -O2 -ffunction-sections -fdata-sections -g -gdwarf-3 -gstrict-dwarf -Wall -MMD -MP -MF"$(basename $(<F)).d_raw" -MT"$(@)" -I"C:/Users/jesma/workspace_v12/valve-sensor/Debug/syscfg" -std=c99 $(GEN_OPTS__FLAG) -o"$@" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

build-1828619937: ../valve-sensor.syscfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: SysConfig'
	"C:/ti/ccs1240/ccs/utils/sysconfig_1.17.0/sysconfig_cli.bat" --script "C:/Users/jesma/workspace_v12/valve-sensor/valve-sensor.syscfg" -o "syscfg" -s "C:/ti/mspm0_sdk_1_10_01_05/.metadata/product.json" --compiler gcc
	@echo 'Finished building: "$<"'
	@echo ' '

syscfg/ti_msp_dl_config.c: build-1828619937 ../valve-sensor.syscfg
syscfg/ti_msp_dl_config.h: build-1828619937
syscfg/Event.dot: build-1828619937
syscfg: build-1828619937

syscfg/%.o: ./syscfg/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: GNU Compiler'
	"C:/ti/gcc_arm_none_eabi_9_2_1/bin/arm-none-eabi-gcc-9.2.1.exe" -c -mcpu=cortex-m0plus -march=armv6-m -mthumb -mfloat-abi=soft -D__MSPM0L1306__ -I"C:/Users/jesma/workspace_v12/valve-sensor" -I"C:/Users/jesma/workspace_v12/valve-sensor/Debug" -I"C:/ti/mspm0_sdk_1_10_01_05/source/third_party/CMSIS/Core/Include" -I"C:/ti/mspm0_sdk_1_10_01_05/source" -I"C:/ti/gcc_arm_none_eabi_9_2_1/arm-none-eabi/include/newlib-nano" -I"C:/ti/gcc_arm_none_eabi_9_2_1/arm-none-eabi/include" -O2 -ffunction-sections -fdata-sections -g -gdwarf-3 -gstrict-dwarf -Wall -MMD -MP -MF"syscfg/$(basename $(<F)).d_raw" -MT"$(@)" -I"C:/Users/jesma/workspace_v12/valve-sensor/Debug/syscfg" -std=c99 $(GEN_OPTS__FLAG) -o"$@" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


