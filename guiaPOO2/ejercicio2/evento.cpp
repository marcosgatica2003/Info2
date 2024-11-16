#include "evento.h"
#include <string>

evento::evento(std::string nombreEvento, unsigned int dia, unsigned int mes, unsigned int anio): _nombreEvento(nombreEvento),
                             _fechaEvento(dia, mes, anio) {}

void evento::mostrarEvento() const {
    std::cout << "--------------------------------------\n" 
              << "NOMBRE EVENTO: " << _nombreEvento << "|\n" << std::endl; 
    _fechaEvento.mostrarFecha();
}

