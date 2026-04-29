#include <stdio.h>
#include "pico/stdlib.h"

int main()
{
    stdio_init_all();
    
    const uint BUTTON_PIN = 15;
    gpio_init(BUTTON_PIN);
    gpio_set_dir(BUTTON_PIN, GPIO_IN);
    while (true) {
        bool ingedrukt = gpio_get(BUTTON_PIN);
        printf("Knopstatus: %d\n", ingedrukt);
        sleep_ms(200);
    }
}
