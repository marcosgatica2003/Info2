/*Escribe una función plantilla que devuelva el valor absoluto de un número. La función debe
 * manejar tipos numéricos como int, float y double.*/

#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
T absoluto(T);

int main()  {
    int entero = 0;
    float flotante = 0.0;
    double doble = 0.0;

    cout << "Ingrese un entero:\t"; cin >> entero;
    cout << "Ingrese un flotante:\t"; cin >> flotante;
    cout << "Ingrese un doble:\t"; cin >> doble;

    cout
    << "Entero absoluto:\t"
    << absoluto(entero) << "\n"
    << "Flotante absoluto:\t"
    << absoluto(flotante) << "\n"
    << "Doble absoluto:\t" 
    << absoluto(doble) << "\n"
    << endl;

    return 0;
}

template <typename T>
T absoluto (T var) {
    return abs(var);
}


