#include "producto.h"
#include <iostream>
#include <string>

producto::producto(std::string n, float p, unsigned int c): nombre(n), precio(p), cantidad(c) {}

void producto::mostrarDatos () {
    std::cout << "-------------------------------------------\n";

    std::cout << "Nombre:\t" << nombre << "\n" << std::endl;

    if (precio == 0.0) {
        std::cout << "Precio:\t" << "Desconocido" << "\n" << std::endl;
    } else {
        std::cout << "Precio:\t" << precio << "\n" << std::endl;
    }

    if (cantidad == 0) {
        std::cout << "Cantidad:\t" << "Desconocido" << "\n" << std::endl;
    } else {
        std::cout << "Cantidad:\t" << cantidad << "\n" << std::endl;
    }

    std::cout << "-------------------------------------------\n"; 
    
}

float producto::calcularTotal () {
    return (float)(precio * cantidad);
}

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
