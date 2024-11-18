#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>

/**
 * @class: producto
 * @brief Clase para manejar un producto.
 * Guarda el nombre y el precio de un artículo del mercado.
 */

class producto {
    public:
        /**
         * @brief Constructor clase producto
         * @param std::string: Nombre del producto pasado como string de la biblioteca estándar.
         * @param precio: almacena el precio del producto como flotante.
         */

        producto(std::string nombre, float precio);
        /**
         * @brief void mostrarProducto() const: función constante que muestra el producto almacenado (nombre y precio).
         */
        void mostrarProducto() const;

    private:
        const std::string _nombre; ///< Atributo privado constante string de la clase estándar que almacena el nombre.
        const float _precio; ///< Atributo privado constante float que almacena el precio.
};

#endif

