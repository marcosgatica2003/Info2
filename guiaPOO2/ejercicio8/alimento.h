#ifndef ALIMENTO_H
#define ALIMENTO_H

#include "fecha.h"
#include "producto.h"
#include <string>

class alimento {
    public:
        alimento(std::string nombre, float precio, unsigned int dia, unsigned int mes, unsigned int anio);
        void mostrarAlimento() const;
    private:
        const fecha _caducidad;
        const producto _alimento;
};

#endif

