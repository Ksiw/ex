#pragma once
#include "main.h"
#include "board.h"

/*дефайны относящеся к настройкам таймеров*/
/*псевдокод*/
#define TIM1_DEV              (&htim1)
#define TIM1_IRQ              TIM1_UP_TIM10_IRQn
#define TIM1_IRQ_HANDLER      TIM1_UP_TIM10_IRQHandler
#define TIM1_CLOCK            HAL_RCC_GetPCLK2Freq()
#define TIM1_CLK_ENABLE()     __HAL_RCC_TIM1_CLK_ENABLE()
#define TIM1_CLK_DISABLE()    __HAL_RCC_TIM1_CLK_DISABLE()

void timer_init(void);
void timer_enable(TIM_HandleTypeDef*);
void timer_disable(TIM_HandleTypeDef*);
void timer_set_callback(TIM_HandleTypeDef*, void (*)(void));
void timer_process(void); //процесс таймера(для какой-либо переодической обработки)
void millis();
