//Guía de Arduino

#include "util.h"
#include <Arduino.h>

unsigned int demoraDefault = 500;//Ejercicio 1-2
//Estos botones corresponden a cada entrada del ardu
const int botonUno = 2;
const int botonDos = 3;
const int botonTres = 4;

const int led1 = 8;
const int led2= 9;
const int led3= 10;

int estadoUno, estadoDos, estadoTres;
unsigned int enteroSerie = 0;

void setup() {
  Serial.begin(9600);
//pinMode(13, OUTPUT); //Ejercicio 1-2
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  pinMode(botonUno, INPUT_PULLUP);
  pinMode(botonDos, INPUT_PULLUP);
  pinMode(botonTres, INPUT_PULLUP);
  
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

  if (Serial.available()){ 
    Serial.read();
    enteroSerie = 0;
  	digitalWrite(led1, 1);
    digitalWrite(led2, 1);
    digitalWrite(led3, 1);
    delay(1000);
 	digitalToggle(led1);
    digitalToggle(led2);
    digitalToggle(led3);
    Serial.println("Entero puesto en 0.");
  }
    
  if (enteroSerie == 1){
	digitalWrite(led1, 1);
    digitalWrite(led2, 0);
    digitalWrite(led3, 0);
  }
  
  if (enteroSerie == 2) {
  	digitalWrite(led1, 0);
    digitalWrite(led2, 1);
    digitalWrite(led3, 0);
  }
  
    if (enteroSerie == 4) {
  	digitalWrite(led1, 0);
    digitalWrite(led2, 0);
    digitalWrite(led3, 1);
  }


  Serial.println(enteroSerie);
  delay(demoraDefault);
}
