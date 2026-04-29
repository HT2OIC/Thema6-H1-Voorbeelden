#include <stdio.h>
#include "pico/stdlib.h"

int main()
{
    stdio_init_all();
    int waarde = 8;
    while (true) {
        if (waarde > 10) {
            printf("Waarde is groter dan 10.\n");
        } else if (waarde == 10) {
            printf("Waarde is exact 10.\n");
        } else {
            printf("Waarde is kleiner dan 10.\n");
        }
    }
}
