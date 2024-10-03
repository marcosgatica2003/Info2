/*Crea un programa que pida al usuario ingresar dos números y determine si el primer número 
 * es mayor que el segundo. Usa un tipo bool para almacenar el resultado y muestra true o
false explícitamente.*/

#include <iostream>

using namespace std;

int main () {
    
    int num1 = 0, num2 = 0;

    cout << "Ingrese el num1: ";
    cin >> num1;
    cout << "Ingrese el num2: ";
    cin >> num2;

    cout << boolalpha;
    cout << "¿Es num1 mayor que num2?:\t" << (num1 > num2) << endl;
    return 0;
}
