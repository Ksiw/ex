#pragma once
#include "main.h"
#include "board.h"

/*работа c gpio*/

void gpio_init(void);
void gpio_set(GPIO_TypeDef* port, uint32_t pin, bool state);
void gpio_toggle(GPIO_TypeDef* port, uint32_t pin);
void gpio_process(void);
uint32_t* gpio_get();