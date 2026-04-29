#include <stdio.h>
#include "pico/stdlib.h"

int main()
{
    stdio_init_all();
    int leeftijd = 17;
    float temperatuur = 36.5;
    bool isPicoCool = true;
    while (true) {
        printf("Leeftijd: %d\n", leeftijd);
        printf("Temperatuur: %.1f\n", temperatuur);
        printf("Is Pico cool? %s\n", isPicoCool ? "Ja" : "Nee");
        sleep_ms(1000);
    }
}
