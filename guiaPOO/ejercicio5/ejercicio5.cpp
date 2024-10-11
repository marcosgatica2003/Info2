// Crea una clase Temperatura que almacene la temperatura en grados Celsius. Implementa
// métodos para:
// a) Convertir la temperatura a Fahrenheit.
// b) Convertir la temperatura a Kelvin.
// c) Mostrar la temperatura en Celsius, Fahrenheit y Kelvin.
// En el main, crea un objeto Temperatura, establece un valor en Celsius, y muestra sus
// equivalentes en las otras escalas.

#include <iostream>
#include "temperatura.h"

int main()  {
    temperatura v1;
    temperatura v2(30);
    temperatura v3(270, "Kelvin");

    std::cout << "Temperaturas sin convertir\n\n";
    v1.mostrarTemperatura();
    v2.mostrarTemperatura();
    v3.mostrarTemperatura();
    
    std::cout << "Temperaturas a Kelvin\n\n";
    v1.convertirKelvin();
    v2.convertirKelvin();
    v3.convertirKelvin();

    v1.mostrarTemperatura();
    v2.mostrarTemperatura();
    v3.mostrarTemperatura();

    std::cout << "Temperaturas a Fahrenheit\n\n";
    v1.convertirFahrenheit();
    v2.convertirFahrenheit();
    v3.convertirFahrenheit();

    v1.mostrarTemperatura();
    v2.mostrarTemperatura();
    v3.mostrarTemperatura();

    return 0;
}


