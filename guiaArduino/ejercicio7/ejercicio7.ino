//Leds según I/O digital del Arduino
const int led1 = 8;
const int botonUno = 2;

bool ledEncendido = false;
bool estadoActualDelBoton = false;
bool botonPresionado = false;
int tiempoInicio = 0;
int tiempoEncendido = 1000; 

void setup() {
  Serial.begin(9600); //Inicio con 9600 baudios
  pinMode(led1, OUTPUT);
  pinMode(botonUno, INPUT_PULLUP);
}

void loop() {
  
  estadoActualDelBoton = !digitalRead(botonUno);
  
  if (!digitalRead(botonUno) && !ledEncendido && !botonPresionado) {
    ledEncendido = true;
    botonPresionado = true;
  	digitalWrite(led1, HIGH);
	tiempoInicio = millis();	
  }
  
  if (ledEncendido && (millis() - tiempoInicio >= tiempoEncendido)) {
    digitalWrite(led1, LOW);  
    ledEncendido = false;     
  }
  if (!estadoActualDelBoton)
    botonPresionado = false;
}

//Leds según I/O digital del Arduino
const int led1 = 8;
const int led2 = 9;
const int led3 = 10;

const int botonUno = 2;

bool botonPresionado = false;
bool estadoActualDelBoton = false;
bool led1Encendido = false;
bool led2Encendido = false;
bool led3Encendido = false;

int tiempoDeInicio = 0;

void setup() {
  Serial.begin(9600); //Inicio con 9600 baudios
  pinMode(led1, OUTPUT);
  pinMode(botonUno, INPUT_PULLUP);
}

void loop() {
  
  estadoActualDelBoton = !digitalRead(botonUno);
  
  if (!digitalRead(botonUno) && !led1Encendido  && !led2Encendido && !led3Encendido && !botonPresionado) {
    led1Encendido = true;
    led2Encendido = true;
    led3Encendido = true;
    
    botonPresionado = true;
    
  	digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    
    tiempoDeInicio = millis();
    
    if (tiempoDeInicio >= 1000)
      digitalWrite(led1, LOW);
    if (tiempoDeInicio >= 2000)
      digitalWrite(led2, LOW);
    if (tiempoDeInicio >= 3000)
      digitalWrite(led3, LOW);
  }
  
  if (!estadoActualDelBoton)
    botonPresionado = false;
}

