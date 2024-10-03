/*Escribe una función que intercambie los valores de dos números de punto flotante usando
referencias. Luego, muestra los valores antes y después del intercambio.*/

#include <iostream>
using namespace std;

void intercambiarFloat (float&, float&);

int main()  {
    float flotante1 = 0.0, flotante2 = 0.0;
    cout << "Ingrese el flotante1:\t"; cin >> flotante1;
    cout << "Ingrese el flotante2:\t"; cin >> flotante2;
    
    cout << "Orden inicial:\t" << flotante1 << "\t" << flotante2 << endl;
    intercambiarFloat(flotante1, flotante2);
    cout << "Orden final:\t" << flotante1 << "\t" << flotante2 << endl;

    return 0;
}

void intercambiarFloat (float& f1, float& f2) {
    float temp = f1;
    f1 = f2;
    f2 = temp;
}
