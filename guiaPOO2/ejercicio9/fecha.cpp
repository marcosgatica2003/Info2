#include "fecha.h"
#include <iostream>

fecha::fecha(unsigned int dia, unsigned int mes, unsigned int anio): _dia(dia), _mes(mes), _anio(anio) {}

void fecha::mostrarFecha() const {
    std::cout 
        << "--------------------------------------\n" 
        << "|    DIA    |    MES    |    ANIO    |\n"
        << "--------------------------------------\n"
        << "|    " << _dia << "    |    " << _mes << "   |   " << _anio << "   |\n"
        << "--------------------------------------\n"
        << std::endl;
}

