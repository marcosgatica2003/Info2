/*Escribe un conjunto de funciones sobrecargadas llamadas convertir que realicen
conversiones entre diferentes unidades de medida:
a) Centímetros a Metros: Toma un valor double en centímetros y devuelve su
equivalente en metros (double).
b) Gramos a Kilogramos: Toma un valor int en gramos y devuelve su equivalente en
kilogramos como double (double).
c) Celsius a Fahrenheit: Toma un valor double en grados Celsius y devuelve su
equivalente en grados Fahrenheit (double).*/

#include <iostream>
using namespace std;

double convertir (double);
double convertir (int);
double convertir (double, char);

void imprimirEnPantasha (double, double, double);

int main()  {
    double centimetros = 0.0;
    int gramos = 0;
    double gradosCelsius = 0.0;

    cout << "Ingrese centimetros:\t"; cin >> centimetros;
    cout << "Ingrese gramos:\t"; cin >> gramos;
    cout << "Ingrese grados Celsius:\t"; cin >> gradosCelsius;

    imprimirEnPantasha(convertir(centimetros), convertir(gramos), convertir(gradosCelsius, 'f'));

    return 0;
}

double convertir (double longitud) {
    return longitud/100;
}
double convertir (int masa) {
    return (double)masa/1000;
}
double convertir (double celsius, char caracter) {
    return ((celsius + (9.0/5)) + 32);
}

void imprimirEnPantasha (double longitud, double masa, double fahrenheit) {

    cout << "Longitud en kilometros:\t" << longitud << "km\n" << "Masa en kilogramos:\t" << masa << "kg\n" << "Temperatura en Fahrenheit:\t" << fahrenheit << "ºF\n" <<  endl;
}
