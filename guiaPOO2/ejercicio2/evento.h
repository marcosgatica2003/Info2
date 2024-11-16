#ifndef EVENTO_H
#define EVENTO_H

#include <iostream>
#include <string>
#include "fecha.h"

class evento {
    public:
        evento(std::string nombreEvento, unsigned int dia, unsigned int mes, unsigned int anio);
        void mostrarEvento() const;
    private:
        const std::string _nombreEvento;
        fecha _fechaEvento;
};

#endif



