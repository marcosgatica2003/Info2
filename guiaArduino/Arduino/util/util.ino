//Ejercicio 1 - Guía de Arduino

#include "util.h"
#include <Arduino.h>


void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  
 }

void loop() {
  digitalToggle(13);
  demoraLED();
  
}

/*2. Modificar el ejercicio anterior para establecer el tiempo mediante un valor entero pasado por
el puerto serie, donde la PC enviará el dato al Arduino. Dicho valor es el tiempo en mili
segundos.*/

/*3. Conectar tres pulsadores al Arduino y enviar dichos datos, en un entero, a través del puerto
serie. Cada estado de los pulsadores se almacenará en los primeros bits del entero.*/