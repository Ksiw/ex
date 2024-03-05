#pragma once
#include "main.h"
#include "board.h"

/*модуль работы с ватчдогом*/
void watchdog_init(void);
void watchdog_enable(void);
void watchdog_disable(void);
void watchdog_reset(void);
