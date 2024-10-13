/*Implementar una clase, Tarea, en Arduino para manejar tareas periódicas de manera no
bloqueante. La clase debe permitir configurar un intervalo de tiempo y verificar si ha pasado
ese tiempo para ejecutar la tarea.
a) El constructor debe recibir el período de tiempo.
b) Debe implementar el método esTiempo(), que devolverá true si se ha cumplido el
tiempo correspondiente.
Realizar un ejemplo encendiendo dos Leds con intervalos diferente.*/

#include "tarea.h"

tarea LED1(1,0);
tarea LED2(2,0);

void setup() {
  Serial.begin(9600);
}

void loop() {
  
  if (ent.cambioDisponible()) {
    Serial.println(ent.getEstado()); 
    Serial.println(ent.getFlancoAsc());
    Serial.println(ent.getFlancoDes()); 
  }
}
