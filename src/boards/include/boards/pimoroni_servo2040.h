/*
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

// -----------------------------------------------------
// NOTE: THIS HEADER IS ALSO INCLUDED BY ASSEMBLER SO
//       SHOULD ONLY CONSIST OF PREPROCESSOR DIRECTIVES
// -----------------------------------------------------

#ifndef _BOARDS_PIMORONI_SERVO2040_H
#define _BOARDS_PIMORONI_SERVO2040_H

// For board detection
#define PIMORONI_SERVO2040

// --- BOARD SPECIFIC ---
#ifndef SERVO2040_SERVO_1_PIN
#define SERVO2040_SERVO_1_PIN 0
#endif

#ifndef SERVO2040_SERVO_2_PIN
#define SERVO2040_SERVO_2_PIN 1
#endif

#ifndef SERVO2040_SERVO_3_PIN
#define SERVO2040_SERVO_3_PIN 2
#endif

#ifndef SERVO2040_SERVO_4_PIN
#define SERVO2040_SERVO_4_PIN 3
#endif

#ifndef SERVO2040_SERVO_5_PIN
#define SERVO2040_SERVO_5_PIN 4
#endif

#ifndef SERVO2040_SERVO_6_PIN
#define SERVO2040_SERVO_6_PIN 5
#endif

#ifndef SERVO2040_SERVO_7_PIN
#define SERVO2040_SERVO_7_PIN 6
#endif

#ifndef SERVO2040_SERVO_8_PIN
#define SERVO2040_SERVO_8_PIN 7
#endif

#ifndef SERVO2040_SERVO_9_PIN
#define SERVO2040_SERVO_9_PIN 8
#endif

#ifndef SERVO2040_SERVO_10_PIN
#define SERVO2040_SERVO_10_PIN 9
#endif

#ifndef SERVO2040_SERVO_11_PIN
#define SERVO2040_SERVO_11_PIN 10
#endif

#ifndef SERVO2040_SERVO_12_PIN
#define SERVO2040_SERVO_12_PIN 11
#endif

#ifndef SERVO2040_SERVO_13_PIN
#define SERVO2040_SERVO_13_PIN 12
#endif

#ifndef SERVO2040_SERVO_14_PIN
#define SERVO2040_SERVO_14_PIN 13
#endif

#ifndef SERVO2040_SERVO_15_PIN
#define SERVO2040_SERVO_15_PIN 14
#endif

#ifndef SERVO2040_SERVO_16_PIN
#define SERVO2040_SERVO_16_PIN 15
#endif

#ifndef SERVO2040_SERVO_17_PIN
#define SERVO2040_SERVO_17_PIN 16
#endif

#ifndef SERVO2040_SERVO_18_PIN
#define SERVO2040_SERVO_18_PIN 17
#endif

#ifndef SERVO2040_NUM_SERVOS
#define SERVO2040_NUM_SERVOS 18
#endif

#ifndef SERVO2040_LED_DATA_PIN
#define SERVO2040_LED_DATA_PIN 18
#endif

#ifndef SERVO2040_NUM_LEDS
#define SERVO2040_NUM_LEDS 6
#endif

#ifndef SERVO2040_I2C
#define SERVO2040_I2C 0
#endif

#ifndef SERVO2040_INT_PIN
#define SERVO2040_INT_PIN 19
#endif

#ifndef SERVO2040_SDA_PIN
#define SERVO2040_SDA_PIN 20
#endif

#ifndef SERVO2040_SCL_PIN
#define SERVO2040_SCL_PIN 21
#endif

#ifndef SERVO2040_USER_SW_PIN
#define SERVO2040_USER_SW_PIN 23
#endif

#ifndef SERVO2040_ADC_ADDR_0_PIN
#define SERVO2040_ADC_ADDR_0_PIN 22
#endif

#ifndef SERVO2040_ADC_ADDR_1_PIN
#define SERVO2040_ADC_ADDR_1_PIN 24
#endif

#ifndef SERVO2040_ADC_ADDR_2_PIN
#define SERVO2040_ADC_ADDR_2_PIN 25
#endif

#ifndef SERVO2040_ADC0_PIN
#define SERVO2040_ADC0_PIN 26
#endif

#ifndef SERVO2040_ADC1_PIN
#define SERVO2040_ADC1_PIN 27
#endif

#ifndef SERVO2040_ADC2_PIN
#define SERVO2040_ADC2_PIN 28
#endif

#ifndef SERVO2040_NUM_ADC_PINS
#define SERVO2040_NUM_ADC_PINS 3
#endif

#ifndef SERVO2040_SHARED_ADC_PIN
#define SERVO2040_SHARED_ADC_PIN 29
#endif

#ifndef SERVO2040_SENSOR_1_ADDR
#define SERVO2040_SENSOR_1_ADDR 0b000
#endif

#ifndef SERVO2040_SENSOR_2_ADDR
#define SERVO2040_SENSOR_2_ADDR 0b001
#endif

#ifndef SERVO2040_SENSOR_3_ADDR
#define SERVO2040_SENSOR_3_ADDR 0b010
#endif

#ifndef SERVO2040_SENSOR_4_ADDR
#define SERVO2040_SENSOR_4_ADDR 0b011
#endif

#ifndef SERVO2040_SENSOR_5_ADDR
#define SERVO2040_SENSOR_5_ADDR 0b100
#endif

#ifndef SERVO2040_SENSOR_6_ADDR
#define SERVO2040_SENSOR_6_ADDR 0b101
#endif

#ifndef SERVO2040_NUM_SENSORS
#define SERVO2040_NUM_SENSORS 6
#endif

#ifndef SERVO2040_VOLTAGE_SENSE_ADDR
#define SERVO2040_VOLTAGE_SENSE_ADDR 0b110
#endif

#ifndef SERVO2040_CURRENT_SENSE_ADDR
#define SERVO2040_CURRENT_SENSE_ADDR 0b111
#endif

// --- UART ---
// no PICO_DEFAULT_UART
// no PICO_DEFAULT_UART_TX_PIN
// no PICO_DEFAULT_UART_RX_PIN

// --- LED ---
// no PICO_DEFAULT_LED_PIN
#ifndef PICO_DEFAULT_WS2812_PIN
#define PICO_DEFAULT_WS2812_PIN SERVO2040_LED_DATA_PIN
#endif

// --- I2C ---
#ifndef PICO_DEFAULT_I2C
#define PICO_DEFAULT_I2C SERVO2040_I2C
#endif
#ifndef PICO_DEFAULT_I2C_SDA_PIN
#define PICO_DEFAULT_I2C_SDA_PIN SERVO2040_SDA_PIN
#endif
#ifndef PICO_DEFAULT_I2C_SCL_PIN
#define PICO_DEFAULT_I2C_SCL_PIN SERVO2040_SCL_PIN
#endif

// --- SPI ---
// no PICO_DEFAULT_SPI
// no PICO_DEFAULT_SPI_SCK_PIN
// no PICO_DEFAULT_SPI_TX_PIN
// no PICO_DEFAULT_SPI_RX_PIN
// no PICO_DEFAULT_SPI_CSN_PIN

// --- FLASH ---
#define PICO_BOOT_STAGE2_CHOOSE_W25Q080 1

#ifndef PICO_FLASH_SPI_CLKDIV
#define PICO_FLASH_SPI_CLKDIV 2
#endif

#ifndef PICO_FLASH_SIZE_BYTES
#define PICO_FLASH_SIZE_BYTES (2 * 1024 * 1024)
#endif

// All boards have B1 RP2040
#ifndef PICO_RP2040_B0_SUPPORTED
#define PICO_RP2040_B0_SUPPORTED 0
#endif

#endif
