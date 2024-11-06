#include "util.h"

#define TAM 12
#define BAUDIOS 9600

entrada input(13);

const int pinesLed[TAM] = {2,3,4,5,
                           6,7,8,9,
                           10,11,12
};

tarea Leds[TAM];

void setup() {

  Serial.begin(BAUDIOS);

  for (int i = 0; i < TAM; ++i) {
    static unsigned int j = 1;

    pinMode(pinesLed[i], OUTPUT);
    digitalWrite(pinesLed[i], LOW);
    Leds[i].definirTiempo(0, j);
    ++j;
  }
}

void loop() {
  for (int i = 0; i < TAM; ++i) {
    if(Leds[i].esTiempo()) {
      digitalWrite(pinesLed[i], !digitalRead(pinesLed[i]));
    }
  }
  if (input.cambioDisponible()) {
    Serial.println(input.getEstado(500)); 
    Serial.println(input.getFlancoAsc());
    Serial.println(input.getFlancoDes()); 
  }
}


