#include "util.h"

tarea::tarea(int m, int s): tiempoMilisegundos(0), ultimoTiempo(0) {
  definirTiempo(m, s);
}

void tarea::definirTiempo(int m, int s) {
  tiempoMilisegundos = (s + m*60) *1000;  
}

bool tarea::esTiempo () {
  unsigned long tiempoActual = millis();

  if((tiempoActual - ultimoTiempo) >= tiempoMilisegundos){
      ultimoTiempo = tiempoActual;
    return true;
  }
  return false;
}

entrada::entrada(char p) {
    definirEntrada(p);
}

void entrada::definirEntrada(char p){
  pin = p;
  pinMode(pin, INPUT);
  estado = digitalRead(pin);
}

String entrada::getEstado(unsigned long tA) {
  tiempoAntirrebote = tA;
  unsigned long tiempoActual = millis();
  static unsigned long ultimoTiempo = 0;
  String estadoReturn = "";

  if (tiempoActual - ultimoTiempo >= tiempoAntirrebote){
    estado = digitalRead(pin);
    //Serial.println(estado);

    ultimoTiempo = tiempoActual;
    static bool datoAnterior = estado;

    Serial.read();
    Serial.flush();

    if (estado == 1){
      estadoReturn = "HIGH";
    } else if (estado == 0) {
      estadoReturn = "LOW";
  } 

  return estadoReturn;

  }

}

int entrada::cambioDisponible () {
  estado = digitalRead(pin);
  static bool estadoAnterior = LOW;

  if (estado != estadoAnterior){
    estadoAnterior = estado;
    return 1;
  } else {
    return 0;
  }

}

String entrada::getFlancoDes() {
  estado = digitalRead(pin);
  static bool datoAnterior = HIGH;
  if (datoAnterior == HIGH && estado == LOW) {
    datoAnterior = estado; return "Flanco descendente!";
  }
  datoAnterior = estado; return "";
}

String entrada::getFlancoAsc(){
  estado = digitalRead(pin);
  static bool datoAnterior = LOW;
  if (estado == HIGH && datoAnterior == LOW) {
    datoAnterior = estado; return "Flanco ascendente!";
  }
  datoAnterior = estado; return "";
}


