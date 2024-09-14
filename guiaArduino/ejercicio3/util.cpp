#include "util.h"
#include <Arduino.h>

unsigned int demora = 0;

void digitalToggle (int pin) {
    int estadoActual = digitalRead(pin);
    digitalWrite(pin, !estadoActual);
}

<<<<<<< HEAD
unsigned int demoraLED (void) {
  if (Serial.available() > 0) {
    demora = Serial.parseInt();
    return demora;
=======
void demoraLED (void) {
  if (Serial.available()) {
    unsigned char demora = Serial.parseInt(); 
    delay(demora);
>>>>>>> e41d399 (Ejercicios de bajo nivel y puerto serie)
  }
}
