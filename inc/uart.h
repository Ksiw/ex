#pragma once
#include "main.h"
#include "board.h"

void uart_init(UART_HandleTypeDef*);
void uart_deinit(UART_HandleTypeDef*);
void uart_send(UART_HandleTypeDef*, uint8_t *data, uint8_t len);
void uart_set_rx_callback(UART_HandleTypeDef*, void (*callback)(uint8_t *data, uint8_t len));
void uart_set_tx_callback(UART_HandleTypeDef*, void (*callback)(uint8_t *data, uint8_t len));