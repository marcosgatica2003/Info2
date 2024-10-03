/*Modificar el ejercicio anterior para escalar el dato convertido
de 0 (para 0V) a 1023 (para 5V) en un valor de temperatura 
equivalente de 0°C a 100°C. Luego enviar dicho valor de
temperatura por el puerto serie con el mensaje, por ejemplo: 
"Temperatura actual: 37°C".*/

/*

Si 1023 -> 100ºC
	var -> X = \frac {var.100ºC} {1023}

*/

const char pinA = A0;

int valorPinA0 = 0;

float convertirBitsACelsius (int bits) {
  return ((float)bits*100)/1023;
}


void setup() {
  Serial.begin(9600);
}

void loop() {
  valorPinA0 = analogRead(pinA);
    Serial.print("Temperatura actual: " + String(convertirBitsACelsius(valorPinA0)) + " C\n");
    delay(1000);
}
