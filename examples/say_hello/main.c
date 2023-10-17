/*
 * Copyright (C) 2023 Freie Universität Berlin
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     examples
 * @{
 *
 * @file
 * @brief       Say-hello application
 *
 * @author      Peng Liu <littlenewton6@gmail.com>
 *
 * @}
 */

#include <stdio.h>
#include <stdbool.h>
#include <board.h>
#include "periph/gpio.h"
#include "periph/uart.h"
#include "xtimer.h"

int main(void)
{
    uart_init(UART_DEV(0), 115200, NULL, NULL);
    while (1)
    {
        printf("Hello, World!\r\n");
        printf("\r\n");
    }
    return 0;
}
