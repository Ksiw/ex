#pragma once
/*модуль, описывающий доступные регистры Modbus устройства*/

//Модуль, описывающий доступные регистры Modbus устройства

// Адреса регистров
#define REG_INPUT_START             1000    //Начальный адрес для входных регистров
#define REG_HOLDING_START           2000    //Начальный адрес для хранящихся регистров
#define REG_COILS_START             3000    //Начальный адрес для регистров реле
#define REG_DISCRETE_START          4000    //Начальный адрес для дискретных регистров

//Примеры регистров
//Дискретные регистры (Read-only)
#define DISCRETE_REGISTER_SENSOR1   REG_DISCRETE_START  // Регистр для чтения состояния реле 1
/*...*/

//Регистры катушек (Coils) (Read/Write)
#define COIL_REGISTER_RELAY1        REG_COILS_START  // Регистр для управления реле #1
#define COIL_REGISTER_RELAY2        (REG_COILS_START + 1)  // Регистр для управления реле #2
/*...*/

