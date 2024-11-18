#ifndef ELECTRO_H
#define ELECTRO_H

#include "producto.h"
#include <string>

class electro {
    public:
        electro(std::string nombre, float precio, unsigned int voltaje);
        void mostrarElectro() const;
    private:
        const unsigned int _voltaje;
        const producto _electro;
};

#endif


