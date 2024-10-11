#include "empleado.h"
#include <iostream>
#include <string>

// cilindro::cilindro(float r, float h): radio(r), altura(h) {}

// float cilindro::calcularVolumen() {
//     return PI*pow(radio,2)*altura;
// }

// void cilindro::dimensionar(float r, float h) {
//     radio = r;
//     altura = h;
// }

empleado::empleado(std::string n, unsigned int e, double s): nombre(n), edad(e), salario(s) {}

void empleado::cargarDatosEmpleado (std::string n, unsigned int e, double s) {

    nombre = n;
    edad = e;
    salario = s;

}

void empleado::mostrarDatosEmpleado() {

    std::cout << "---------------------------------------------\n";
    std::cout << "Nombre:\t" << nombre << "\n" << std::endl;

    if (edad == 0) {
    std::cout << "Edad:\t" << "Desconocida\n" << std::endl;
    } else {
    std::cout << "Edad:\t" << edad << "\n"  << std::endl;
    }

    if (salario == 0) {
        std::cout << "Salario:\t" << "No asignado\n" << std::endl;
    } else {
        std::cout << "Salario:\t" << salario << "\n" << std::endl;
    }
    std::cout << "---------------------------------------------\n";

}

empleado::~empleado() {}
