/*Escribe una función plantilla que devuelva el valor máximo de tres valores proporcionados.
Probar el correcto funcionamiento empleandos datos del tipo int y luego float.*/

#include <iostream>

using namespace std;

template <typename T>
void determinarMayor (T, T);

int main()  {
    
    int entero1 = 0, entero2 = 0;
    float flotante1 = 0.0, flotante2 = 0.0;
    
    cout << "Ingrese entero1:\t"; cin >> entero1;
    cout << "Ingrese entero2:\t"; cin >> entero2;
    cout << "Ingrese flotante1:\t"; cin >> flotante1;
    cout << "Ingrese flotante2:\t"; cin >> flotante2;

    cout << "Enteros:\n"; determinarMayor(entero1, entero2);
    cout << "Flotantes:\n"; determinarMayor(flotante1, flotante2);

    return 0;
}

template <typename T>
void determinarMayor (T n0, T n1) {
    if (n0 > n1) {
        cout << n0 << "\tes mayor que\t" << n1 << endl;
    } else if (n0 < n1){
        cout << n1 << "\tes mayor que\t" << n0 << endl;
        } else {
            cout << "Los números son iguales.\n";
            }
}
