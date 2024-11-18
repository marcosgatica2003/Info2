#ifndef PAR_H
#define PAR_H

#include <iostream>

template <typename T>

class par {
    public:
        par(T valor0, T valor1): _valor0(valor0), _valor1(valor1) {}

        void mostrar() const {
            std::cout << "Valores:\t" << _valor0 << "\t" << _valor1 << std::endl;
            
        }

    private:
        const T _valor0;
        const T _valor1;
};

// par::par(T valor0, T valor1): _valor0(valor0), _valor1(valor1) {}

// void par::mostrar() {
//     std::cout << "Valores:\t" << _valor0 << "\t" << _valor1 << std::endl;
// }

#endif

