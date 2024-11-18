#ifndef ELECTRO_H
#define ELECTRO_H

#include "producto.h"
#include <string>

/**
 * @class electro
 * @brief Clase para almacenar datos de un producto electrodoméstico.
 * Almacena el nombre del electrodoméstico, su precio y el voltaje con el que funciona.
 */

class electro {
    public:

        /**
         * @brief Constructor de la clase electro
         * @param std::string nombre: almacena el nombre del electrodoméstico en una variable string de la clase estándar.
         * @param float precio: almaceena el precio en un flotante.
         * @param unsigned int voltaje: almacena el voltaje de funcionamiento.
         */

        electro(std::string nombre, float precio, unsigned int voltaje);

        /**
         * @brief void mostrarElectro() const: función contrante que muestra datos del electrodoméstico.
         * Imprime en salida estándar datos del voltaje y el producto.
         */

        void mostrarElectro() const;

    private:
        const unsigned int _voltaje; ///< Atrivuto privado constante que almacena el voltaje de funcionamiento.
        const producto _electro; ///< Atrivuto objeto privado constante de la clase producto, almacena el precio y el nombre.
};

#endif


