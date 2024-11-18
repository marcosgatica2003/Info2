#include <iostream>
#include "punto.h"

int main()  {
    punto p1;
    punto p2(5, 4);
    punto p3(0, 0);

    std::cout
        << "Punto:\n"
        << "(" << p1.getX() << ";" << p1.getY() << ")"
        << "(" << p2.getX() << ";" << p2.getY() << ")"
        << "(" << p3.getX() << ";" << p3.getY() << ")"
        << std::endl;

    std::cout 
        << "Son iguales?:\t" << (sonIguales(p1, p2) ? "P1 y P2 son iguales" : "P1 y P2 son distintos") << "\n" 
        << "Son iguales?:\t" << (sonIguales(p1, p3) ? "P1 y P3 son iguales" : "P1 y P3 son distintos") << "\n"
        << std::endl;

    return 0;
}


