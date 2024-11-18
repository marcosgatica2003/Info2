#include "alimento.h"
#include <iostream>
#include <ostream>
#include <string>

alimento::alimento(std::string nombre, float precio, unsigned int dia, unsigned int mes, unsigned int anio):
    _caducidad(dia, mes, anio),
    _alimento(nombre, precio) {}

void alimento::mostrarAlimento() const {
    std::cout << "Alimento:\n"; _alimento.mostrarProducto();
    std::cout << "Caducidad:\n"; _caducidad.mostrarFecha();
}

