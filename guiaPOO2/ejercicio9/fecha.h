#ifndef FECHA_H
#define FECHA_H

#include <iostream>

/**
 *  @class fecha
 *  @brief Clase para almacenar fechas ingresadas por el usuario.
 *  Almacena el día, mes y año.
 */

class fecha {
    public:

        /**
         *  @brief Constructor de la clase fecha
         *  @param unsigned int dia: toma el día.
         *  @param unsigned int mes: toma el mes.
         *  @param unsigned int anio: toma el año.
         */

        fecha(unsigned int dia, unsigned int mes, unsigned int anio);

        /**
         *  @brief void mostrarFecha() const
         *  Función constante que muestra la fecha en salida estándar.
         */

        void mostrarFecha() const;


    private:
        const unsigned int _dia; ///< Atributo unsigned int constante que almacena el día.
        const unsigned int _mes;///< Atributo unsigned int constante que almacena el mes. 
        const unsigned int _anio;///< Atributo unsigned int constante que almacena el año. 
};

#endif

