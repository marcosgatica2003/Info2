#include <iostream>
#include "caja.h"

int main()  {
    caja<double> doble(2.312345);
    caja<long> largo(1 << 10);
    caja<char> caracter('t');

    std::cout << "Valores:\n" << doble.getCaja() << "\n" 
              << largo.getCaja() << "\n"
              << caracter.getCaja() << "\n"
              << std::endl;
    return 0;
}


