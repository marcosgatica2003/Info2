//Leds según I/O digital del Arduino
const int led1 = 8;
const int led2 = 9;
const int led3 = 10;

const int botonUno = 2;
const int botonDos = 3;
const int botonTres = 4;

int estadoUno = 0;
int estadoDos = 0;
int estadoTres = 0;

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
  pinMode(botonDos, INPUT_PULLUP);
  pinMode(botonTres, INPUT_PULLUP);

}

void loop() {
  
  estadoUno = digitalRead(botonUno);
  estadoDos = digitalRead(botonDos);
  estadoTres = digitalRead(botonTres);
  
  if (estadoUno == 1 || estadoDos == 1 || estadoTres == 1) {
    numeroSerie = 0;
    numeroSerie |= (estadoUno == LOW) << 0;
    numeroSerie |= (estadoDos == LOW) << 1;
    numeroSerie |= (estadoTres == LOW) << 2;
    
    bit0 = (numeroSerie >> 0) & 1;
    bit1 = (numeroSerie >> 1) & 1;
    bit2 = (numeroSerie >> 2) & 1;
    Serial.println(bit0); Serial.println(bit1); Serial.println(bit2);

  }
  
  if (Serial.available()) {
    numeroSerie = 0;
    numeroSerie = Serial.parseInt();
    bit0 = (numeroSerie >> 0) & 1;
    bit1 = (numeroSerie >> 1) & 1;
    bit2 = (numeroSerie >> 2) & 1;
    Serial.println(bit0); Serial.println(bit1); Serial.println(bit2);
  }
  
  digitalWrite(led1, bit0);
  digitalWrite(led2, bit1);
  digitalWrite(led3, bit2);
  
  delay(300);
}

