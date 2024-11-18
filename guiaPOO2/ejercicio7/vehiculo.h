#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>
class vehiculo {
    public:
        vehiculo(std::string marca, std::string modelo, unsigned int anio);
        void mostrarVehiculo() const;
    private:
        const std::string _marca;
        const std::string _modelo;
        const unsigned int _anio;
};

#endif



