/*6. Para Arduino, crear una clase Entrada, la misma debe implementar:
a) Un constructor el cual debe indicarse el pin a utilizar.
b) getEstado: que devuelva el estado actual de la entrada
c) getFlancoAsc: que devuelva si se ha detectado un flanco ascendente
d) getFlancoDes: que devuelva si se ha detectado un flanco descendentee)
Sobrecarga getEstado para que, de manera no bloqueante (con millis), 
implemente un tiempo antirrebote el cual debe ser pasado por parámetro 
y tener un valor defecto.*/

#include "entrada.h"

entrada ent(13);

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
