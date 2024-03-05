#pragma once
#include <stdint.h>
/*реализация пересчета crc*/
uint16_t modb_crc16(uint8_t* data, uint16_t len);