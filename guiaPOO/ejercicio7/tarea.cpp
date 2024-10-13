/*Implementar una clase, Tarea, en Arduino para manejar tareas periódicas de manera no
bloqueante. La clase debe permitir configurar un intervalo de tiempo y verificar si ha pasado
ese tiempo para ejecutar la tarea.
a) El constructor debe recibir el período de tiempo.
b) Debe implementar el método esTiempo(), que devolverá true si se ha cumplido el
tiempo correspondiente.
Realizar un ejemplo encendiendo dos Leds con intervalos diferente.*/

#include "tarea.h"
#include <Arduino.h>

tarea::tarea(float m, float s): minutos(m), segundos(s) {segundos += minutosASegundos(minutos);}

float tarea::minutosASegundos(minutos) {return minutos * 60.0;}

void tarea::definirTiempo(float m, float s) {segundos = s + minutosASegundos(m);}

bool tarea::esTiempo () {
  unsigned long tiempoInicio = millis();
  static unsigned long ultimoTiempo = 0;
  bool estadoReturn = false;

  if ((tiempoInicio - ultimoTiempo) >= segundos) {
    estadoReturn = true;
  }

  return estadoReturn;
}




/*
entrada::entrada(char p): pin(p) {
  pinMode(pin, INPUT);
  estado = digitalRead(pin);
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
*/
// temperatura::temperatura(float c, std::string m): temp(c), magnitud(m) {}

// void temperatura::convertirKelvin() {
    
//     if (magnitud == "Celsius") {
//         temp += 273.15;
//     } else if (magnitud == "Fahrenheit") {
//         temp = (temp - 32) * (5.0/9) + 273.15;
//     } 

//     magnitud = "Kelvin";

// }

// void temperatura::convertirFahrenheit() {
//     if (magnitud == "Celsius") {
//         temp = (temp * (9.0/5)) + 32;
//     } else if (magnitud == "Kelvin") {
//         temp = (temp - 273.15) * (9.0/5) + 32;
//     }

//     magnitud = "Fahrenheit";
// }

// void temperatura::mostrarTemperatura() {
//     std::cout << temp << "\t" << magnitud << "\n"<< std::endl;

// }

// vector2D::vector2D(float cx, float cy): x(cx), y(cy) {}

// void vector2D::definirVector2D(float cx, float cy) {
//     x = cx; 
//     y = cy;
// }

// float vector2D::longitudVector2D() {
//     return sqrt(pow(x,2) + pow(y,2));
// }

// void vector2D::imprimirVector() {
//     std::cout << "(" << x << ";" << y << ")\n" << std::endl;
// }

// vector2D vector2D::operator-(const vector2D& otro) const {
//     return vector2D((this->x) - otro.x,(this->y) - otro.y);
// }

// vector2D vector2D::operator+(const vector2D& otro) const {
//     return vector2D(this->x + otro.x, this->y + otro.y);
// }

// vector2D vector2D::operator*(const float n) const {
//     return vector2D((this->x)*n, (this->y)*n);
// }

// producto::producto(std::string n, float p, unsigned int c): nombre(n), precio(p), cantidad(c) {}

// void producto::mostrarDatos () {
//     std::cout << "-------------------------------------------\n";

//     std::cout << "Nombre:\t" << nombre << "\n" << std::endl;

//     if (precio == 0.0) {
//         std::cout << "Precio:\t" << "Desconocido" << "\n" << std::endl;
//     } else {
//         std::cout << "Precio:\t" << precio << "\n" << std::endl;
//     }

//     if (cantidad == 0) {
//         std::cout << "Cantidad:\t" << "Desconocido" << "\n" << std::endl;
//     } else {
//         std::cout << "Cantidad:\t" << cantidad << "\n" << std::endl;
//     }

//     std::cout << "-------------------------------------------\n"; 
    
// }

// float producto::calcularTotal () {
//     return (float)(precio * cantidad);
// }

// cilindro::cilindro(float r, float h): radio(r), altura(h) {}

// float cilindro::calcularVolumen() {
//     return PI*pow(radio,2)*altura;
// }

// void cilindro::dimensionar(float r, float h) {
//     radio = r;
//     altura = h;
// }

// empleado::empleado(std::string n, unsigned int e, double s): nombre(n), edad(e), salario(s) {}

// void empleado::cargarDatosEmpleado (std::string n, unsigned int e, double s) {

//     nombre = n;
//     edad = e;
//     salario = s;

// }

// void empleado::mostrarDatosEmpleado() {

//     std::cout << "---------------------------------------------\n";
//     std::cout << "Nombre:\t" << nombre << "\n" << std::endl;

//     if (edad == 0) {
//     std::cout << "Edad:\t" << "Desconocida\n" << std::endl;
//     } else {
//     std::cout << "Edad:\t" << edad << "\n"  << std::endl;
//     }

//     if (salario == 0) {
//         std::cout << "Salario:\t" << "No asignado\n" << std::endl;
//     } else {
//         std::cout << "Salario:\t" << salario << "\n" << std::endl;
//     }
//     std::cout << "---------------------------------------------\n";

// }

// empleado::~empleado() {}
