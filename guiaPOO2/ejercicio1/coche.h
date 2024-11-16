#ifndef COCHE_H
#define COCHE_H

#include <iostream>
#include <string>
#include "motor.h"

class coche {
    public:
        coche(std::string modelo, std::string marca, float cilindrada, float caballosFuerza);
        void mostrarCoche() const;

    private:
        const std::string _modelo;
        const std::string _marca;
        motor _motor;

};

#endif



