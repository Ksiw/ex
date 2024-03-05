#pragma once
#include "main.h"
#include "hardware_arch.h"
/*инклюды перефирии контроллера*/
#include "stm32f4xx_ll_usart.h"
/*...*/

//Файл, описывающий особенности платы
//Плата несложная, пины периферии можно собрать в одном файле
//Определение пинов процессора - относящиеся к UART, LED, реле.*/
//псевдокод:
#define LED1                  {GPIOA, GPIO_PIN_4}
#define LED2                  {GPIOA, GPIO_PIN_5}
#define LED3                  {GPIOA, GPIO_PIN_6}

#define USART3_TX             {GPIOD, GPIO_PIN_8}
#define USART3_RX             {GPIOD, GPIO_PIN_9}
#define USART3_RE             {GPIOX, GPIO_PIN_X} 
#define USART3_DE             {GPIOX, GPIO_PIN_X}

#define RELAY1                {GPIOX, GPIO_PIN_X}
/*...*/
#define LOOPBACK1             {GPIOX, GPIO_PIN_X} //обратная связь, для контроля переключений
/*...*/

void board_init(void); //настройка тактирования платы