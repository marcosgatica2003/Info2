#include <iostream>
#include "alimento.h"
#include "electro.h"

int main()  {
    electro lavarropas("Soni", 14000, 220);
    alimento papas("papas", 100, 15, 9, 2003);

    lavarropas.mostrarElectro();
    std::cout << "\n" << std::endl;
    papas.mostrarAlimento();
    return 0;
}


