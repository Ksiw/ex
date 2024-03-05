#include "main.h"
#include "main_handler.h"
#include "bootloader.h"
#include "flash.h"
#include "gpio.h"
#include "timers.h"
#include "config.h"
#include "watchdog.h"

void led_live(void);

void main()
{
#if (WATCHDOG == true)
    watchdog_init();
#endif
    __enable_irq();
    flash_init();
    gpio_init();
    timers_init();
    main_handler_init();

#if (BOOTLOADER == true)
    bootloader_init();
#endif

    while (1)
    {
        watchdog_reset();
        timers_process();
        gpio_process();
        main_handler_process();
        led_live();
    }
}

void led_live(void)
{
    static uint32_t last_millis;
    if (get_millis() - last_millis > LED_TOGGLE_MS)
    {
        last_millis = get_millis();
        gpio_toggle(LED1.port, LED1.pin);
    }
}

void Error_Handler(void)
{
    __disable_irq();
    while (1)
    {
    }
}