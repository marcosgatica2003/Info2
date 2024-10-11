#include <iostream>
#include "cilindro.h"

int main()  {
   
    float radio = 0.0, altura = 0.0;

    cilindro c1;

    std::cout << "Ingrese el radio del cilindro: ";
    std::cin >> radio;
    std::cout << "Ingrese la altura del cilindro: ";
    std::cin >> altura;

    c1.dimensionar(radio, altura);
    std::cout << "Su volumen es: " << c1.calcularVolumen() << std::endl;

    return 0;
}


