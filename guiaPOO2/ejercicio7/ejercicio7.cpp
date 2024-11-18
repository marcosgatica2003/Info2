#include <iostream>
#include "motocicleta.h"
#include "coche.h"

int main()  {
    motocicleta moto(500, "Honda", "Z12", 2002);
    coche autito(2, "Fiat", "Uno", 2024);

    moto.mostrarMoto();
    autito.mostrarCoche();
    return 0;
}


