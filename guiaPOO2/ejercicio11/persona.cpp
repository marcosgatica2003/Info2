#include "persona.h"

persona::persona(std::string nombre, unsigned int edad): 
    _nombre(nombre), _edad(edad) {}

bool persona::operator==(persona person) const {
    return (this->_edad == person._edad && this->_nombre == person._nombre);
}

