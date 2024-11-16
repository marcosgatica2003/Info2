#include <iostream>
#include "motor.h"
#include "coche.h"

int main()  {
    coche vehiculo("Falcon", "Ford", 200, 300.1);
    vehiculo.coche::mostrarCoche(); 
    return 0;
}


