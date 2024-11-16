#include "coche.h"

coche::coche(std::string modelo, std::string marca, float cilindrada, float caballosFuerza): 
        _modelo(modelo), 
        _marca(marca), 
        _motor(cilindrada, caballosFuerza) {}

void coche::mostrarCoche() const {
    std::cout << "Modelo: " << _modelo << "\n"
              << "Marca: " << _marca << "\n"
              << std::endl;
   _motor.mostrarMotor(); 
}
