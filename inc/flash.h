#pragma once
#include "main.h"
#include "board.h"
/*модуль работы с память, сохранение настроек*/

typedef struct {
    uint8_t field1;
    uint8_t field2;
    /*...*/
}config_t;


void flash_init(void);
void flash_save(config_t*);
void flash_load(config_t*);
void flash_process(void);