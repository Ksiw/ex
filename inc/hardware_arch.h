#pragma once

/*переопределения для упрощения переноса на другой камень*/
/*псевдокод:*/
#include "stm32f7xx_hal.h"

#define GPIO_MODE_DIGITAL_IN        GPIO_MODE_INPUT
#define GPIO_MODE_DIGITAL_OUT       GPIO_MODE_OUTPUT_PP
#define GPIO_MODE_DIGITAL_OD        GPIO_MODE_OUTPUT_OD
#define GPIO_MODE_ALTERNATE         GPIO_MODE_AF_PP
#define GPIO_MODE_PU                GPIO_PULLUP
#define GPIO_MODE_PD                GPIO_PULLDOWN
#define GPIO_MODE_NP                GPIO_NOPULL

typedef UART_HandleTypeDef          usart_dev_t;
typedef GPIO_TypeDef                gpio_dev_t;
typedef DMA_HandleTypeDef           dma_channel_t;
typedef CAN_HandleTypeDef           can_dev_t;
typedef ADC_HandleTypeDef           adc_dev_t;
typedef TIM_HandleTypeDef           tim_dev_t;

#endif /* CORE_INCLUDE_HW_ARCH_H_ */