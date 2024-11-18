#ifndef ALIMENTO_H
#define ALIMENTO_H

#include "fecha.h"
#include "producto.h"
#include <string>

/**
 * @class alimento
 * @brief clase que almacena un producto alimenticio.
 * Almacena el nombre, precio y la fecha de caducidad.
 */

class alimento {
    public:

        /**
         * @brief Constructor de la clase alimento.
         * @param std::string nombre: almacena el nombre en un string de la bilbioteca estándar.
         * @param float precio: almacena el precio en un flotante.
         * @param unsigned int dia, mes y anio: almacena la fecha de caducidad.
         */

        alimento(std::string nombre, float precio, unsigned int dia, unsigned int mes, unsigned int anio);

        /**
         *  @brief void mostrarAlimento() const
         *  Función constante que muestra datos del alimento en salida estándar.
         */

        void mostrarAlimento() const;
    private:
        const fecha _caducidad; ///< Atributo objeto privado fecha que almacena la fecha de caducidad.
        const producto _alimento; ///< Atributo objeto privado que almacena datos del producto.
};

#endif

