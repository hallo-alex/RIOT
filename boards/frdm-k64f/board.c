/*
 * Copyright (C) 2014 Freie Universität Berlin
 * Copyright (C) 2014 PHYTEC Messtechnik GmbH
 *
 * This file is subject to the terms and conditions of the GNU Lesser General
 * Public License v2.1. See the file LICENSE in the top level directory for more
 * details.
 */

/**
 * @ingroup     board_frdm-k64f
 * @{
 *
 * @file
 * @brief       Board specific implementations for the FRDM-K64F
 *
 * @author      Johann Fischer <j.fischer@phytec.de>
 *
 * @}
 */

#include "board.h"
#include "periph/gpio.h"

void board_init(void)
{
    /* initialize the CPU core */
    cpu_init();

    /* initialize and turn off the on-board RGB-LED */
    gpio_init(LED0_PIN, GPIO_OUT);
    gpio_init(LED1_PIN, GPIO_OUT);
    gpio_init(LED2_PIN, GPIO_OUT);
    gpio_set(LED0_PIN);
    gpio_set(LED1_PIN);
    gpio_set(LED2_PIN);
}
