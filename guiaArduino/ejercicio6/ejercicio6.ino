//Leds según I/O digital del Arduino
const int led1 = 8;
const int led2 = 9;
const int led3 = 10;

const int botonUno = 2;
const int botonDos = 3;
const int botonTres = 4;

int estadoUno = 0;


int bit0 = 0; //Para el led1
int bit1 = 0; //Para el led2
int bit2 = 0; //Para el led3

unsigned int numeroSerie = 0;

void setup() {
  Serial.begin(9600); //Inicio con 9600 baudios
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  
  pinMode(botonUno, INPUT_PULLUP);


}

void loop() {
  
  if (!digitalRead(botonUno)) {
    bit0 = 1;
    bit1 = 1;
    bit2 = 1;  
    digitalWrite(led1, bit0);
 	delay(1000);
  	digitalWrite(led2, bit1);
  	delay(1000);
  	digitalWrite(led3, bit2);
  	delay(2000);
    Serial.println("LEDS ENCENDIDOS");
    bit0 = 0;
    bit1 = 0;
    bit2 = 0;
    digitalWrite(led1, bit0);
    digitalWrite(led2, bit1);
    digitalWrite(led3, bit2);
  }
}

