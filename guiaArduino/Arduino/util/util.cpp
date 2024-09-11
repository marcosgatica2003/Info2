#include "util.h"
#include <Arduino.h>

void digitalToggle (int pin) {
    int estadoActual = digitalRead(pin);
    digitalWrite(pin, !estadoActual);
}

void demoraLED (void) {
  if (Serial.available()) {
    unsigned char demora = Serial.parseInt(); 
    delay(demora);
  }
}

