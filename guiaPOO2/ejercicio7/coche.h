#ifndef COCHE_H
#define COCHE_H

#include "vehiculo.h"
#include <string>

class coche {
    public:
        coche(unsigned int cantidadPuertas, std::string marca, std::string modelo, unsigned int anio);
        void mostrarCoche() const;
    private:
        const vehiculo _coche;
        const unsigned int _cantidadPuertas;
};

#endif


