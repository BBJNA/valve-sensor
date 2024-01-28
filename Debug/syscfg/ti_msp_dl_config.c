/*
 * Copyright (c) 2021, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 *  ============ ti_msp_dl_config.c =============
 *  Configured MSPM0 DriverLib module definitions
 *
 *  DO NOT EDIT - This file is generated for the MSPM0L130X
 *  by the SysConfig tool.
 */

#include "ti_msp_dl_config.h"

/*
 *  ======== SYSCFG_DL_init ========
 *  Perform any initialization needed before using any board APIs
 */
SYSCONFIG_WEAK void SYSCFG_DL_init(void)
{
    SYSCFG_DL_initPower();
    SYSCFG_DL_GPIO_init();
    /* Module-Specific Initializations*/
    SYSCFG_DL_SYSCTL_init();
    SYSCFG_DL_UART_1_init();
    SYSCFG_DL_FRAM_SPI_init();
}

SYSCONFIG_WEAK void SYSCFG_DL_initPower(void)
{
    DL_GPIO_reset(GPIOA);
    DL_UART_Main_reset(UART_1_INST);
    DL_SPI_reset(FRAM_SPI_INST);

    DL_GPIO_enablePower(GPIOA);
    DL_UART_Main_enablePower(UART_1_INST);
    DL_SPI_enablePower(FRAM_SPI_INST);
    delay_cycles(POWER_STARTUP_DELAY);
}

SYSCONFIG_WEAK void SYSCFG_DL_GPIO_init(void)
{

    DL_GPIO_initPeripheralOutputFunction(
        GPIO_UART_1_IOMUX_TX, GPIO_UART_1_IOMUX_TX_FUNC);
    DL_GPIO_initPeripheralInputFunction(
        GPIO_UART_1_IOMUX_RX, GPIO_UART_1_IOMUX_RX_FUNC);

    DL_GPIO_initPeripheralOutputFunction(
        GPIO_FRAM_SPI_IOMUX_SCLK, GPIO_FRAM_SPI_IOMUX_SCLK_FUNC);
    DL_GPIO_initPeripheralOutputFunction(
        GPIO_FRAM_SPI_IOMUX_PICO, GPIO_FRAM_SPI_IOMUX_PICO_FUNC);
    DL_GPIO_initPeripheralInputFunction(
        GPIO_FRAM_SPI_IOMUX_POCI, GPIO_FRAM_SPI_IOMUX_POCI_FUNC);
    DL_GPIO_initPeripheralOutputFunction(
        GPIO_FRAM_SPI_IOMUX_CS0, GPIO_FRAM_SPI_IOMUX_CS0_FUNC);

    DL_GPIO_initDigitalInput(POWER_MONITOR_PFAIL_IOMUX);

    DL_GPIO_initDigitalInput(QUAD_DECODE_CMP_P1_IOMUX);

    DL_GPIO_initDigitalInput(QUAD_DECODE_CMP_P2_IOMUX);

    DL_GPIO_initDigitalInput(QUAD_DECODE_CMP_P3_IOMUX);

    DL_GPIO_initDigitalInput(QUAD_DECODE_INDEX_N_IOMUX);

    DL_GPIO_initDigitalOutput(USER_INTERFACE_USER_LED1_IOMUX);

    DL_GPIO_initDigitalOutput(USER_INTERFACE_USER_LED2_IOMUX);

    DL_GPIO_initDigitalOutput(FRAM_IO_FRAM_WP_N_IOMUX);

    DL_GPIO_initDigitalOutput(FRAM_IO_FRAM_HOLD_N_IOMUX);

    DL_GPIO_clearPins(GPIOA, FRAM_IO_FRAM_WP_N_PIN |
		FRAM_IO_FRAM_HOLD_N_PIN);
    DL_GPIO_setPins(GPIOA, USER_INTERFACE_USER_LED1_PIN |
		USER_INTERFACE_USER_LED2_PIN);
    DL_GPIO_enableOutput(GPIOA, USER_INTERFACE_USER_LED1_PIN |
		USER_INTERFACE_USER_LED2_PIN |
		FRAM_IO_FRAM_WP_N_PIN |
		FRAM_IO_FRAM_HOLD_N_PIN);
    DL_GPIO_setLowerPinsPolarity(GPIOA, DL_GPIO_PIN_13_EDGE_RISE_FALL |
		DL_GPIO_PIN_14_EDGE_RISE_FALL |
		DL_GPIO_PIN_15_EDGE_RISE_FALL);
    DL_GPIO_setUpperPinsPolarity(GPIOA, DL_GPIO_PIN_18_EDGE_RISE |
		DL_GPIO_PIN_16_EDGE_FALL);
    DL_GPIO_clearInterruptStatus(GPIOA, POWER_MONITOR_PFAIL_PIN |
		QUAD_DECODE_CMP_P1_PIN |
		QUAD_DECODE_CMP_P2_PIN |
		QUAD_DECODE_CMP_P3_PIN |
		QUAD_DECODE_INDEX_N_PIN);
    DL_GPIO_enableInterrupt(GPIOA, POWER_MONITOR_PFAIL_PIN |
		QUAD_DECODE_CMP_P1_PIN |
		QUAD_DECODE_CMP_P2_PIN |
		QUAD_DECODE_CMP_P3_PIN |
		QUAD_DECODE_INDEX_N_PIN);

}



SYSCONFIG_WEAK void SYSCFG_DL_SYSCTL_init(void)
{
    DL_SYSCTL_setSYSOSCFreq(DL_SYSCTL_SYSOSC_FREQ_BASE);

	//Low Power Mode is configured to be SLEEP0
    DL_SYSCTL_setBORThreshold(DL_SYSCTL_BOR_THRESHOLD_LEVEL_0);

}



static const DL_UART_Main_ClockConfig gUART_1ClockConfig = {
    .clockSel    = DL_UART_MAIN_CLOCK_BUSCLK,
    .divideRatio = DL_UART_MAIN_CLOCK_DIVIDE_RATIO_1
};

static const DL_UART_Main_Config gUART_1Config = {
    .mode        = DL_UART_MAIN_MODE_NORMAL,
    .direction   = DL_UART_MAIN_DIRECTION_TX_RX,
    .flowControl = DL_UART_MAIN_FLOW_CONTROL_NONE,
    .parity      = DL_UART_MAIN_PARITY_NONE,
    .wordLength  = DL_UART_MAIN_WORD_LENGTH_8_BITS,
    .stopBits    = DL_UART_MAIN_STOP_BITS_ONE
};

SYSCONFIG_WEAK void SYSCFG_DL_UART_1_init(void)
{
    DL_UART_Main_setClockConfig(UART_1_INST, (DL_UART_Main_ClockConfig *) &gUART_1ClockConfig);

    DL_UART_Main_init(UART_1_INST, (DL_UART_Main_Config *) &gUART_1Config);
    /*
     * Configure baud rate by setting oversampling and baud rate divisors.
     *  Target baud rate: 115200
     *  Actual baud rate: 115211.52
     */
    DL_UART_Main_setOversampling(UART_1_INST, DL_UART_OVERSAMPLING_RATE_16X);
    DL_UART_Main_setBaudRateDivisor(UART_1_INST, UART_1_IBRD_32_MHZ_115200_BAUD, UART_1_FBRD_32_MHZ_115200_BAUD);



    DL_UART_Main_enable(UART_1_INST);
}

static const DL_SPI_Config gFRAM_SPI_config = {
    .mode        = DL_SPI_MODE_CONTROLLER,
    .frameFormat = DL_SPI_FRAME_FORMAT_MOTO4_POL0_PHA0,
    .parity      = DL_SPI_PARITY_NONE,
    .dataSize    = DL_SPI_DATA_SIZE_8,
    .bitOrder    = DL_SPI_BIT_ORDER_MSB_FIRST,
    .chipSelectPin = DL_SPI_CHIP_SELECT_0,
};

static const DL_SPI_ClockConfig gFRAM_SPI_clockConfig = {
    .clockSel    = DL_SPI_CLOCK_BUSCLK,
    .divideRatio = DL_SPI_CLOCK_DIVIDE_RATIO_1
};

SYSCONFIG_WEAK void SYSCFG_DL_FRAM_SPI_init(void) {
    DL_SPI_setClockConfig(FRAM_SPI_INST, (DL_SPI_ClockConfig *) &gFRAM_SPI_clockConfig);

    DL_SPI_init(FRAM_SPI_INST, (DL_SPI_Config *) &gFRAM_SPI_config);

    /* Configure Controller mode */
    /*
     * Set the bit rate clock divider to generate the serial output clock
     *     outputBitRate = (spiInputClock) / ((1 + SCR) * 2)
     *     16000000 = (32000000)/((1 + 0) * 2)
     */
    DL_SPI_setBitRateSerialClockDivider(FRAM_SPI_INST, 0);
    /* Set RX and TX FIFO threshold levels */
    DL_SPI_setFIFOThreshold(FRAM_SPI_INST, DL_SPI_RX_FIFO_LEVEL_1_2_FULL, DL_SPI_TX_FIFO_LEVEL_1_2_EMPTY);

    /* Enable module */
    DL_SPI_enable(FRAM_SPI_INST);
}

