#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
class producto {    
    public:
        producto(std::string nombre, float precio);
        void mostrarProducto() const;

    private:
        const std::string _nombre;
        const float _precio;
};

#endif

