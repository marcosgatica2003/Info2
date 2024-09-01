#include "util.h"
#include <Arduino.h>

void digitalToggle (int pin) {
    int estadoActual = digitalRead(pin);
    digitalWrite(pin, !estadoActual);
}

void demoraLED (void) {
  unsigned int demora = 0;
  if (Serial.available() > 0) {
    demora = Serial.parseInt();
  }
  delay(demora);
}

