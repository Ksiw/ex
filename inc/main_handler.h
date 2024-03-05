#pragma once
/*модуль обработки основных событий, логики*/
void main_handler_init(void);
void main_handler_process(void);
//коллбеки, по приему-передаче соощения через юарт
void uart_rx_callback(uint8_t *data, uint8_t len);
void uart_tx_callback(void);