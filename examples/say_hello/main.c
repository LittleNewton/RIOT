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
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <board.h>
#include "periph/gpio.h"
#include "periph/uart.h"
#include "time.h"

bool led_state = false;

void gpio_cb(void)
{
    if (led_state == false) {
        gpio_write(LED0_PIN, 1);
        led_state = true;
        fflush(stdout);
        printf("btn click \r\n");
        printf("btn click \r\n");
        printf("btn click \r\n");
        printf("btn click \r\n");
        printf("btn click \r\n");
        printf("btn click \r\n");
        printf("btn click \r\n");
    }
    else {
        gpio_write(LED0_PIN, 0);
        led_state = false;
        fflush(stdout);
        printf("btn click \r\n");
        printf("btn click \r\n");
        printf("btn click \r\n");
        printf("btn click \r\n");
        printf("btn click \r\n");
        printf("btn click \r\n");
        printf("btn click \r\n");
    }
    
}

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
