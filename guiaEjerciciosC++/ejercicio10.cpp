/*Escribe una función que calcule el promedio de un arreglo de enteros de 5 elementos,
inicializado en el main, y use referencias para devolver tanto el promedio como la suma de
los valores.*/

#include <iostream>

#define TAM 5

using namespace std;

void promedioYSuma(int(& arreglo)[TAM], int&, float&);

int main()  {
    
    int arreglo [TAM];

    float promedio = 0.0;
    int sumaElementos = 0;

    for (int i = 0; i < TAM; ++i){
        cout << "Ingrese el elemento Nº" << i << ":\t" << endl;
        cin >> arreglo[i];
    }
    

    promedioYSuma(arreglo, sumaElementos, promedio);
    cout << "Promedio:\t" << promedio << "\n" << "Suma elementos:\t" << sumaElementos << "\n" << endl;
    return 0;
}

void promedioYSuma(int(& arreglo)[TAM], int& suma, float& promedio) {
    for (int i = 0; i<TAM ; ++i) {
        suma += arreglo[i] ;
    }

    promedio = (float)suma/TAM;

}

