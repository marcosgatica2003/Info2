/*6. Para Arduino, crear una clase Entrada, la misma debe implementar:
a) Un constructor el cual debe indicarse el pin a utilizar.
b) getEstado: que devuelva el estado actual de la entrada
c) getFlancoAsc: que devuelva si se ha detectado un flanco ascendente
d) getFlancoDes: que devuelva si se ha detectado un flanco descendentee)
Sobrecarga getEstado para que, de manera no bloqueante (con millis), 
implemente un tiempo antirrebote el cual debe ser pasado por parámetro 
y tener un valor defecto.*/

#ifndef ENTRADA_H
#define ENTRADA_H

#include <Arduino.h>

class entrada {
    public:
        entrada(char = 13);
        void definirEntrada(char);
        String getEstado(unsigned long = 1000);
        String getFlancoAsc();
        String getFlancoDes();
        int cambioDisponible();
        
    private:
        char pin;
        int estado;
        unsigned long tiempoAntirrebote;
};



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
