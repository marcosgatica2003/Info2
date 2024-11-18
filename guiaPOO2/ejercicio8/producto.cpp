#include "producto.h"
#include <iostream>
#include <string>

producto::producto(std::string nombre, float precio): _nombre(nombre), _precio(precio) {}

void producto::mostrarProducto() const {
    std::cout 
        << "Nombre:\t" << _nombre << "\n"
        << "Precio:\t" << _precio
        << std::endl;
}

