/*Implementar una clase, Tarea, en Arduino para manejar tareas periódicas de manera no
bloqueante. La clase debe permitir configurar un intervalo de tiempo y verificar si ha pasado
ese tiempo para ejecutar la tarea.
a) El constructor debe recibir el período de tiempo.
b) Debe implementar el método esTiempo(), que devolverá true si se ha cumplido el
tiempo correspondiente.
Realizar un ejemplo encendiendo dos Leds con intervalos diferente.*/

#ifndef TAREA_H
#define TAREA_H

#include <Arduino.h>

class tarea {
  public:
    tarea(float minutos = 0.0, float segundos = 0.0);
    bool esTiempo();
    void definirTiempo(float, float);

  private:
    float minutos, segundos;
    float minutosASegundos(minutos);
}





/*class entrada {
    public:
        entrada(char pin = 13);
        void definirEntrada(char pin);
        String getEstado(unsigned long tiempoAntirrebote = 1000);
        String getFlancoAsc();
        String getFlancoDes();
        int cambioDisponible();
        
    private:
        char pin;
        int estado;
        unsigned long tiempoAntirrebote;
};*/



// #include <iostream>
// class temperatura {
//     public:
//         temperatura(float temp = -273.15, std::string magnitud = "Celsius");
//         void convertirFahrenheit();
//         void convertirKelvin();
//         void mostrarTemperatura();
//     private:
//         float temp;
//         std::string magnitud;

// };


// class vector2D {
//     public:
//         vector2D(float x = 1.0, float y = 1.0);
//         void definirVector2D(float cx, float cy);
//         float longitudVector2D();
//         void imprimirVector();
        
//         vector2D operator-(const vector2D& otro) const;
//         vector2D operator+(const vector2D& otro) const;
//         vector2D operator*(const float n) const;
//     private:
//         float x, y;
// };

// class producto {
//     public:
//         producto(std::string nombre = "Desconocido", float precio = 0.0, unsigned int cantidad = 0);
//         void mostrarDatos ();
//         float calcularTotal ();
//     private:
//         std::string nombre;
//         float precio;
//         unsigned int cantidad;
// };



// class cilindro {
//     public:
//         cilindro(float radio = 1.0, float altura = 1.0);
//         float calcularVolumen();
//         void dimensionar(float r, float h );
//     private:
//         float radio;
//         float altura;
// };

// #include <string>
// class empleado {
//     public:
//         empleado(std::string nombre = "desconocido", unsigned int edad = 0, double salario = 0);
//         void cargarDatosEmpleado(std::string, unsigned int, double);
//         void mostrarDatosEmpleado();

//         ~empleado();

//     private:
//         std::string nombre;
//         unsigned int edad;
//         double salario;

// };

#endif
