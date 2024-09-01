#include "util.h"
#include <Arduino.h>

void digitalToggle (int pin) {
    int estadoActual = digitalRead(pin);
    digitalWrite(pin, !estadoActual);
}
