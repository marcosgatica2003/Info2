/*Implementar una clase, Tarea, en Arduino para manejar tareas periódicas de manera no
bloqueante. La clase debe permitir configurar un intervalo de tiempo y verificar si ha pasado
ese tiempo para ejecutar la tarea.
a) El constructor debe recibir el período de tiempo.
b) Debe implementar el método esTiempo(), que devolverá true si se ha cumplido el
tiempo correspondiente.
Realizar un ejemplo encendiendo dos Leds con intervalos diferente.*/

#include "tarea.h"

#define TAM 12

const int pines[TAM] = {2,3,4,5,6,7,8,9,10,11,12};
tarea LEDs[TAM];
int incremento = 1;
void setup() {

  for (int i = 0; i < TAM; i++){
    pinMode(pines[i], OUTPUT);
    digitalWrite(pines[i], LOW);
    LEDs[i].definirTiempo(0, incremento);
    incremento++;
  }
}

void loop() {
  for (int i = 0; i < TAM; i++){
    if(LEDs[i].esTiempo()) {
      digitalWrite(pines[i], !digitalRead(pines[i]));
    }
  }

}
