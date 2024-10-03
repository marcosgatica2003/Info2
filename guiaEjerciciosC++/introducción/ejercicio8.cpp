/*Escribe un programa que permita al usuario ingresar el tamaño de un arreglo, de enteros, y
luego use new para asignar dinámicamente la memoria. Llena el arreglo con valores
ingresados por el usuario y luego muestra esos valores. Finalmente, libera la memoria
asignada.*/

#include <iostream>

using namespace std;
int main()  {

    unsigned int tam = 0;
    do {
        cout << "Ingrese el tamaño del arreglo:\t"; cin >> tam;
    } while (tam <= 0);

    int* arreglo = new int[tam];

    for (int i = 0; i < tam; ++i) {
        int elemento;
        cout << "Valor del elemento" << i << ":\t" << endl; cin >> elemento;
        arreglo[i] = elemento;
    }

    for (int i = 0; i < tam; ++i) {
        cout << "\n" << "Elemento Nº" << i << ":\t" << arreglo[i] << "\n" << endl;
    }

    delete[] arreglo;

    return 0;
}


