/*Escribe una función inline que retorne el cuadrado de un número double. Usa esta función
en el main para calcular y mostrar el resultado de un número ingresado por el usuario.*/

#include <iostream>
#include <cmath>

using namespace std;

inline double cuadrado (double numero) {
    return pow(numero,2);
}
int main() { 
    double num = 0; cout << "Ingrese un número:\t"; cin >> num; cout << "Cuadrado del número: " << cuadrado(num) << endl; return 0;
}


