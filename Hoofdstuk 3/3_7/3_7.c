#include <stdio.h>
#include "pico/stdlib.h"

int main()
{
    const uint LED_PIN = 16;
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    while (true) {
        gpio_put(LED_PIN, 1); // led aan
        sleep_ms(500);
        gpio_put(LED_PIN, 0); // led uit
        sleep_ms(500);
    }
}
