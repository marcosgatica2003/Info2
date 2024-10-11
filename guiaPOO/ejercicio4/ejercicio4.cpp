// Crea una clase Vector2D que represente un vector en 2D con los atributos x e y. Implementa
// métodos para:
// a) Calcular la longitud del vector.
// b) Sumar y restar otro vector.
// c) Multiplicar el vector por un escalar.
// En el main, crea varios vectores, realiza operaciones entre ellos, y muestra los resultados.


#include <iostream>
#include "vector2D.h"

#define TAM 3

int main()  {
    float escalar = 5.0;
    vector2D campoVectorial[TAM] = {
        vector2D(),
        vector2D(2.5, 2.5),
        vector2D(5, 5)
    };

    //Imprimir vectores
    campoVectorial[0].imprimirVector();
    campoVectorial[1].imprimirVector();
    campoVectorial[2].imprimirVector();

    //Sumar y restar vectores
    std::cout << "Resta de vectores\n";
    vector2D resta = campoVectorial[0] - campoVectorial[1];
    resta.imprimirVector();


    std::cout << "Suma de vectores\n";
    vector2D suma = campoVectorial[1] + campoVectorial[2];
    suma.imprimirVector();

    //Afectado por escalar
    std::cout << "Afectado por escalar\n";
    vector2D vectorEscalar = campoVectorial[0]*escalar;
    vectorEscalar.imprimirVector();

    return 0;
}


