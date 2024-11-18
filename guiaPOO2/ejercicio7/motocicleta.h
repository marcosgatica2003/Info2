#ifndef MOTOCICLETA_H
#define MOTOCICLETA_H

#include "vehiculo.h"
#include <string>

class motocicleta {
    public:
        motocicleta(unsigned int cilindrada, std::string marca, std::string modelo, unsigned int anio);

        void mostrarMoto() const;
    private:
        const vehiculo _motocicleta;
        const unsigned int _cilindrada;
};

#endif


