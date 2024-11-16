#include <iostream>
#include <ostream>
#include "motor.h"

motor::motor(float cilindrada, float caballosFuerza): 
    _cc(cilindrada),
    _HP(caballosFuerza)
    {}

void motor::mostrarMotor() const {
    std::cout << "Cilindrada: " << _cc << " cc\n"
              << "Caballos fuerza: " << _HP << " HP\n"
              << std::endl;
}

