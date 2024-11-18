#include <iostream>
#include "rectangulo.h"

int main()  {
    rectangulo manzana(20.5, 10);
    std::cout << "Dimensiones:\n"
    << "Ancho:\t" << manzana.getAncho()
    << "\n"
    << "Largo:\t" << manzana.getLargo() 
    << "\n"
    << "Area:\t" << calcularArea(manzana) << std::endl;

    return 0;
}


