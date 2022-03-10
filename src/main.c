#include "pico/stdlib.h"

#define RED 16
#define BLUE 17
#define GREEN 18

#define loop for(;;)

int main() {
    /* To indicate device power status */
    gpio_init(PICO_DEFAULT_LED_PIN);
    gpio_set_dir(PICO_DEFAULT_LED_PIN, GPIO_OUT);
    gpio_put(PICO_DEFAULT_LED_PIN, true);

    /* Initialize all GPIO pins */
    gpio_init(RED);
    gpio_set_dir(RED, GPIO_OUT);
    gpio_init(BLUE);
    gpio_set_dir(BLUE, GPIO_OUT);
    gpio_init(GREEN);
    gpio_set_dir(GREEN, GPIO_OUT);

    loop {
        /* Red */
        gpio_put(RED, true);
        gpio_put(GREEN, false);
        gpio_put(BLUE, false);
        sleep_ms(1000 / 7);

        /* Yellow */
        gpio_put(RED, true);
        gpio_put(GREEN, true);
        gpio_put(BLUE, false);
        sleep_ms(1000 / 7);

        /* Green */
        gpio_put(RED, false);
        gpio_put(GREEN, true);
        gpio_put(BLUE, false);
        sleep_ms(1000 / 7);

        /* Cyan */
        gpio_put(RED, false);
        gpio_put(GREEN, true);
        gpio_put(BLUE, true);
        sleep_ms(1000 / 7);

        /* Blue */
        gpio_put(RED, false);
        gpio_put(GREEN, false);
        gpio_put(BLUE, true);
        sleep_ms(1000 / 7);

        /* Magenta */
        gpio_put(RED, true);
        gpio_put(GREEN, false);
        gpio_put(BLUE, true);
        sleep_ms(1000 / 7);

        /* White */
        gpio_put(RED, true);
        gpio_put(GREEN, true);
        gpio_put(BLUE, true);
        sleep_ms(1000 / 7);
    }
}
