/*Es sabido que se pueden conectar varios pulsadores a una entrada analógica a través de
divisores resistivos. Conecte tres pulsadores a la entrada analógica y realice el programa
correspondiente para encender tres leds, uno por cada pulsador. Considere que sólo un
pulsador se ha de presionar a la vez.*/

/*
	5v -> 1023
    3v -> ~314
    1v -> ~205
*/

const int pinA0 = A0;
const int pin2 = 2;
const int pin3 = 3;
const int pin4 = 4;

int valorPinA0 = 0;

void setup() {
    Serial.begin(9600);
    pinMode(pin2, OUTPUT);
    pinMode(pin3, OUTPUT);
    pinMode(pin4, OUTPUT);
}

void loop() {
    valorPinA0 = analogRead(pinA0);
    Serial.println(valorPinA0);

    if (valorPinA0 == 131) {
        digitalWrite(pin4, HIGH);
        digitalWrite(pin3, LOW);
        digitalWrite(pin2, LOW);
    } else {
      digitalWrite(pin4, LOW);
    }

  if (valorPinA0 == 279) {
        digitalWrite(pin4, LOW);
        digitalWrite(pin3, HIGH);
        digitalWrite(pin2, LOW);
    } else {
      digitalWrite(pin3, LOW);
    }

    if (valorPinA0 == 614) {
        digitalWrite(pin4, LOW);
        digitalWrite(pin3, LOW);
        digitalWrite(pin2, HIGH);
    } else {
      digitalWrite(pin2, LOW);
    }

  delay(500);
}
