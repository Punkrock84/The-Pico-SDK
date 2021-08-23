// THIS HEADER FILE IS AUTOMATICALLY GENERATED -- DO NOT EDIT

/*
 * Copyright (c) 2021 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _HARDWARE_STRUCTS_SYSTICK_H
#define _HARDWARE_STRUCTS_SYSTICK_H

#include "hardware/address_mapped.h"
#include "hardware/regs/m0plus.h"

// reference to datasheet: https://datasheets.raspberrypi.org/rp2040/rp2040-datasheet.pdf#tab-registerlist_m0plus
// BITMASK : FIELDNAME [BITRANGE] (RESETVALUE): DESCRIPTION

typedef struct {
    _REG_(M0PLUS_SYST_CSR_OFFSET)
    // Use the SysTick Control and Status Register to enable the SysTick features
    // 0x00010000 [16]    : COUNTFLAG (0): Returns 1 if timer counted to 0 since last time this was read
    // 0x00000004 [2]     : CLKSOURCE (0): SysTick clock source
    // 0x00000002 [1]     : TICKINT (0): Enables SysTick exception request:
    // 0x00000001 [0]     : ENABLE (0): Enable SysTick counter:
    io_rw_32 csr;

    _REG_(M0PLUS_SYST_RVR_OFFSET)
    // Use the SysTick Reload Value Register to specify the start value to load into the current value...
    // 0x00ffffff [0-23]  : RELOAD (0): Value to load into the SysTick Current Value Register when the...
    io_rw_32 rvr;

    _REG_(M0PLUS_SYST_CVR_OFFSET)
    // Use the SysTick Current Value Register to find the current value in the register
    // 0x00ffffff [0-23]  : CURRENT (0): Reads return the current value of the SysTick counter
    io_rw_32 cvr;

    _REG_(M0PLUS_SYST_CALIB_OFFSET)
    // Use the SysTick Calibration Value Register to enable software to scale to any required speed...
    // 0x80000000 [31]    : NOREF (0): If reads as 1, the Reference clock is not provided - the...
    // 0x40000000 [30]    : SKEW (0): If reads as 1, the calibration value for 10ms is inexact (due to...
    // 0x00ffffff [0-23]  : TENMS (0): An optional Reload value to be used for 10ms (100Hz) timing,...
    io_ro_32 calib;

} systick_hw_t;

#define systick_hw ((systick_hw_t *const)(PPB_BASE + M0PLUS_SYST_CSR_OFFSET))

#endif
