#ifndef FECHA_H
#define FECHA_H

#include <iostream>

class fecha {
    public:
        fecha(unsigned int dia, unsigned int mes, unsigned int anio);
        void mostrarFecha() const;
    private:
        const unsigned int _dia;
        const unsigned int _mes;
        const unsigned int _anio;
};

#endif

