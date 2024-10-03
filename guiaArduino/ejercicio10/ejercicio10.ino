const char pinA = A0;

int valorPinA0 = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  valorPinA0 = analogRead(pinA);
  Serial.println(valorPinA0);
  delay(1000);
}


