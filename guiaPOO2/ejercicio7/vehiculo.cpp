#include "vehiculo.h"
#include <iostream>
#include <ostream>
#include <string>

vehiculo::vehiculo(std::string marca, std::string modelo, unsigned int anio): _marca(marca), _modelo(modelo), _anio(anio) {}

void vehiculo::mostrarVehiculo() const { 
    std::cout 
        << "Modelo:\t" << _modelo << "\n"
        << "Marca:\t" << _marca << "\n"
        << "Anio:\t" << _anio << "\n"
        << std::endl;
}

