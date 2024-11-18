#include "coche.h"
#include <iostream>
#include <ostream>

coche::coche(unsigned int cantidadPuertas, std::string marca, std::string modelo, unsigned int anio):
    _cantidadPuertas(cantidadPuertas),
    _coche(marca, modelo, anio) {}

void coche::mostrarCoche() const {
std::cout << "Puertas:\t" << _cantidadPuertas << "\n" << std::endl;
    _coche.mostrarVehiculo();
}

