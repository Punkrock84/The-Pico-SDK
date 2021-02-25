/*
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

// -----------------------------------------------------
// NOTE: THIS HEADER IS ALSO INCLUDED BY ASSEMBLER SO
//       SHOULD ONLY CONSIST OF PREPROCESSOR DIRECTIVES
// -----------------------------------------------------

#ifndef _BOARDS_PIMORONI_TINY2040_H
#define _BOARDS_PIMORONI_TINY2040_H

// For board detection
#define PIMORONI_TINY2040

#ifndef PICO_DEFAULT_UART
#define PICO_DEFAULT_UART 0
#endif

#ifndef PICO_DEFAULT_UART_TX_PIN
#define PICO_DEFAULT_UART_TX_PIN 0
#endif

#ifndef PICO_DEFAULT_UART_RX_PIN
#define PICO_DEFAULT_UART_RX_PIN 1
#endif

// Included so basic examples will work, and set it to the green LED
#ifndef PICO_DEFAULT_LED_PIN
#define PICO_DEFAULT_LED_PIN 19
#endif

#ifndef TINY2040_LED_R_PIN
#define TINY2040_LED_R_PIN 18
#endif

#ifndef TINY2040_LED_G_PIN
#define TINY2040_LED_G_PIN 19
#endif

#ifndef TINY2040_LED_B_PIN
#define TINY2040_LED_B_PIN 20
#endif

#ifndef TINY2040_USER_SW_PIN
#define TINY2040_USER_SW_PIN 23
#endif

#ifndef TINY2040_A0_PIN
#define TINY2040_A0_PIN 26
#endif

#ifndef TINY2040_A1_PIN
#define TINY2040_A1_PIN 27
#endif

#ifndef TINY2040_A2_PIN
#define TINY2040_A2_PIN 28
#endif

#ifndef TINY2040_A3_PIN
#define TINY2040_A3_PIN 29
#endif

#ifndef TINY2040_NUM_IO_PINS
#define TINY2040_NUM_IO_PINS 8
#endif

#ifndef TINY2040_NUM_ADC_PINS
#define TINY2040_NUM_ADC_PINS 4
#endif

#ifndef PICO_FLASH_SPI_CLKDIV
#define PICO_FLASH_SPI_CLKDIV 2
#endif

#ifndef PICO_FLASH_SIZE_BYTES
#define PICO_FLASH_SIZE_BYTES (8 * 1024 * 1024)
#endif

#ifndef PICO_FLOAT_SUPPORT_ROM_V1
#define PICO_FLOAT_SUPPORT_ROM_V1 0
#endif

#ifndef PICO_DOUBLE_SUPPORT_ROM_V1
#define PICO_DOUBLE_SUPPORT_ROM_V1 0
#endif

#endif
