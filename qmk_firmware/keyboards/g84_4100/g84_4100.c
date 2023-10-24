#include "g84_4100.h"

void turn_on_led(pin_t pin)
{
    writePinHigh(pin);
}

void turn_off_led(pin_t pin)
{
    writePinLow(pin);
}