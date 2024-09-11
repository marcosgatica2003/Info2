//Guía de Arduino

#include "util.h"
#include <Arduino.h>

unsigned int demoraDefault = 500;//Ejercicio 1-2
//Estos botones corresponden a cada entrada del ardu
const int botonUno = 2;
const int botonDos = 3;
const int botonTres = 4;

int estadoUno, estadoDos, estadoTres;
unsigned int enteroSerie = 0;

void setup() {
  Serial.begin(9600);
//pinMode(13, OUTPUT); //Ejercicio 1-2
  pinMode(botonUno, INPUT_PULLUP);
  pinMode(botonDos, INPUT_PULLUP);
  pinMode(botonTres, INPUT_PULLUP);
  Serial.begin(1200);
  pinMode(13, OUTPUT);
  
 }

void loop() {
/* Ejercicio 1-2  
 *  
  digitalToggle(13);
  unsigned int retardo = demoraLED();
  if (retardo == 0) {
    retardo = demoraDefault;
  }
  delay(retardo);
  */
  estadoUno = digitalRead(botonUno);
  estadoDos = digitalRead(botonDos);
  estadoTres = digitalRead(botonTres);

  enteroSerie |= (estadoUno == LOW) << 0;
  enteroSerie |= (estadoDos == LOW) << 1;
  enteroSerie |= (estadoTres == LOW) << 2;

  Serial.println(enteroSerie);
  delay(demoraDefault);
}
