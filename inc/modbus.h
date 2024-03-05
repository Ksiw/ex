#pragma once
#include "modb_crc.h"
/*модуль, реализующий функционал модбаса*/

void modb_init(uint16_t* buf1, uint16_t* buf2);
void modb_process(void);
void modb_send(uint8_t* data, uint16_t len);