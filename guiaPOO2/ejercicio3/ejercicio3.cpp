#include <iostream>
#include "par.h"

int main()  {
    par<int> enteros(4, 5);
    par<float> flotantes(3.14, 2.71);

    enteros.mostrar();
    flotantes.mostrar();

    return 0;
}


