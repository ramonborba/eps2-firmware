/*
 * uart_interrupt.h
 * 
 * Copyright (C) 2020, SpaceLab.
 * 
 * This file is part of EPS 2.0.
 * 
 * EPS 2.0 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * EPS 2.0 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with EPS 2.0. If not, see <http://www.gnu.org/licenses/>.
 * 
 */

/**
 * \brief UART with interrupt driver definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * \author André M. P. de Mattos <andre.mattos@spacelab.ufsc.br>
 * 
 * \version 0.2.4
 * 
 * \date 2021/08/01
 * 
 * \defgroup uart_interrupt UART Interrupt
 * \ingroup drivers
 * \{
 */

#ifndef UART_INTERRUPT_H_
#define UART_INTERRUPT_H_

#include <stdint.h>

#define UART_INTERRUPT_MODULE_NAME      "UART_INTERRUPT"

#define UART_RX_BUFFER_MAX_SIZE         16                  /**< Number of bytes of the maximum UART RX buffer size. */
#define NOTIFICATION_VALUE_TO_UART_ISR  (1UL << 1UL)        /**< Bit to set on uart notification for tasks. */

/**
 * \brief UART interrupt RX buffer and size.
 */
extern uint8_t uart_rx_buffer[UART_RX_BUFFER_MAX_SIZE];  
extern uint8_t received_data_size;

/**
 * \brief UART ports.
 */
typedef enum
{
    UART_PORT_0=0,          /**< UART port 0. */
    UART_PORT_1,            /**< UART port 1. */
    UART_PORT_2             /**< UART port 2. */
} uart_interrupt_ports_e;

/**
 * \brief Parity configuration.
 */
typedef enum
{
    UART_NO_PARITY=0,       /**< No parity. */
    UART_ODD_PARITY,        /**< Odd parity. */
    UART_EVEN_PARITY        /**< Even parity. */
} uart_interrupt_parity_e;

/**
 * \brief Number of stop bits.
 */
typedef enum
{
    UART_ONE_STOP_BIT=0,    /**< One stop bit. */
    UART_TWO_STOP_BITS      /**< Two stop bits. */
} uart_interrupt_stop_bits_e;

/**
 * \brief UART port configuration parameters.
 */
typedef struct
{
    uint32_t clock;         /**< Reference clock in Hz. */
    uint32_t baudrate;      /**< Baudrate in bps. */
    uint8_t data_bits;      /**< Data bits length. */
    uint8_t parity;         /**< Parity bits. */
    uint8_t stop_bits;      /**< Stop bits. */
} uart_interrupt_config_t;

/**
 * \brief UART port.
 */
typedef uint8_t uart_interrupt_port_t;

/**
 * \brief UART interface initialization.
 *
 * \param[in] port is the UART port to initialize. It can be:
 * \parblock
 *      -\b UART_PORT_0
 *      -\b UART_PORT_1
 *      -\b UART_PORT_2
 *      .
 * \endparblock
 *
 * \param[in] config is the UART port configuration.
 *
 * \return The status/error code.
 */
int uart_interrupt_init(uart_interrupt_port_t port, uart_interrupt_config_t config);

/**
 * \brief Enables the UART interrupt.
 *
 * \param[in] port is the UART port to enables the interrupt . It can be:
 * \parblock
 *      -\b UART_PORT_0
 *      -\b UART_PORT_1
 *      -\b UART_PORT_2
 *      .
 * \endparblock
 *
 * \return The status/error code.
 */
int uart_interrupt_enable(uart_interrupt_port_t port);

/**
 * \brief Disables the UART interrupt.
 *
 * \param[in] port is the UART port to disables the interrupt . It can be:
 * \parblock
 *      -\b UART_PORT_0
 *      -\b UART_PORT_1
 *      -\b UART_PORT_2
 *      .
 * \endparblock
 *
 * \return The status/error code.
 */
int uart_interrupt_disable(uart_interrupt_port_t port);

/**
 * \brief Writes data to a given UART port.
 *
 * \param[in] port is the UART port to write. It can be:
 * \parblock
 *      -\b UART_PORT_0
 *      -\b UART_PORT_1
 *      -\b UART_PORT_2
 *      .
 * \endparblock
 *
 * \param[in] data is the data to write to the UART port.
 *
 * \param[in] len is the number of bytes to write.
 *
 * \return The status/error code.
 */
int uart_interrupt_write(uart_interrupt_port_t port, uint8_t *data, uint16_t len);

#endif /* UART_INTERRUPT_H_ */

/** \} End of uart group */