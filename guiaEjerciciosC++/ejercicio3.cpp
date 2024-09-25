/*Emplea la sobrecar de funciones para que éstas devuelvan el valor absoluto de un número.
La función debe manejar tipos numéricos como int, float y double.*/

#include <iostream>
#include <cmath>

using namespace std;

int absoluto (int);
float absoluto (float);
double absoluto (double);

int main()  {
    int entero; cout << "Ingrese un entero:\t"; cin >> entero;
    float flotante; cout << "Ingrese un flotante:\t"; cin >> flotante;
    double doble; cout << "Ingrese un doble:\t"; cin >> doble;

    cout << absoluto(entero) << "\n" << absoluto(flotante) << "\n" << absoluto(doble) << endl;
    return 0;
}

int absoluto (int n){
    return abs(n);
}

float absoluto (float n){
    return abs(n);
}

double absoluto (double n){
    return abs(n);
}

