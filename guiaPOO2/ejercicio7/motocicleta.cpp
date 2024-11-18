#include "motocicleta.h"
#include <iostream>
#include <ostream>
#include <string>

motocicleta::motocicleta(unsigned int cilindrada, std::string marca, std::string modelo, unsigned int anio): _cilindrada(cilindrada), _motocicleta(marca, modelo, anio) {}

void motocicleta::mostrarMoto() const {
    std::cout << "Cilindrada:\t" << _cilindrada << "\n" << std::endl;
    _motocicleta.mostrarVehiculo();
}

