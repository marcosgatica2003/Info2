#include "electro.h"
#include <iostream>
#include <ostream>
#include <string>

electro::electro(std::string nombre, float precio, unsigned int voltaje):
    _voltaje(voltaje),
    _electro(nombre, precio) {}

void electro::mostrarElectro() const {
    std::cout << "Electrodoméstico:\n" << std::endl;
    _electro.mostrarProducto();
    std::cout << "Voltaje:\t" << _voltaje << std::endl;
}
