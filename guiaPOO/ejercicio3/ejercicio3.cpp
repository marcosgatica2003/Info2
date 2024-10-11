// Crea una clase Producto con los atributos nombre, precio y cantidad. Implementa métodos
// para:
// a) Establecer y obtener los valores de los atributos.
// b) Un método calcularTotal() que retorne el precio total (precio * cantidad).
// En el main, crea un objeto Producto, establece sus valores, y muestra el total calculado.
#include <iostream>
#include "producto.h"

#define TAM 3

int main()  {
        
    producto gondola[TAM] = {
        producto(),
        producto("papas", 30, 3),
        producto("mate", 150, 200)
    };

    gondola[0].mostrarDatos();
    gondola[1].mostrarDatos();
    gondola[2].mostrarDatos();

    for (int i = 0; i < TAM; ++i) {
        std::cout << "Valor: \t" << gondola[i].calcularTotal() << "\n" << std::endl;
    }

    return 0;
}


