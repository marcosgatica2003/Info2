/*Escribe un conjunto de funciones sobrecargadas llamadas calcularArea para calcular el área
de diferentes figuras geométricas: un círculo, un rectángulo y un triángulo. El programa
debe solicitar al usuario cuál figura geométrica desea calcular, con algún menú del tipo
numérico, para luego solicitar la información necesaria e imprimir el resultado.*/

#include <iostream>
#include <cmath>

#define PI 3.14159265358979323846

using namespace std;

float areaCirculo ();
float areaRectangulo ();
float areaTriangulo ();

int main()  {

    bool continuarMenu = true;
    float area = 0.0;
    char opcion = '0';

    while(continuarMenu) {
        cout << "Cálculos de área:\n" 
        << "-----------------\n" 
        << "Figuras disponibles:\n" 
        << "1 - Círculo\n" 
        << "2 - Rectángulo\n" 
        << "3 - Triángulo\n\n" 
        << "Opción [1,2,3]: \t" 
        << endl;

        do {
            cin >> opcion;
            if (opcion != '1' && opcion != '2' && opcion != '3') {
                cout << "Opción inválida.\n" << "Opción [1,2,3]:\t" << endl;
            }
        } while (opcion != '1' && opcion != '2' && opcion != '3');
        
        switch (opcion) {
    
            case '1': area = areaCirculo();
                    cout << "Area:\t" << area << endl;
                    break;
            case '2': area = areaRectangulo();
                    cout << "Area:\t" << area << endl;
                    break;
            case '3': area = areaTriangulo();
                    cout << "Area:\t" << area << endl;
                    break;
            default: cout << "Ninguna opción seleccionada.\n";
                    break;
        }
        
        cout << "¿Desea continuar? (s/N): \t"; cin >> opcion;
        
        if (opcion == 's' || opcion == 'S'){
            continuarMenu = true; opcion = '0';
        } else {
            continuarMenu = false;
        }

    }      

    return 0;
}

float areaCirculo () {
    float radio = 0.0;
    cout << "Calcular area circulo.\n" << "----------------------\n"<< "Ingrese el radio del circulo:\t";
    cin >> radio;
    return PI*pow(radio, 2);
}
float areaRectangulo () {
    float base = 0.0, altura = 0.0;
    cout << "Calcular area rectangulo.\n" << "----------------------\n"<< "Ingrese la base: \t";
    cin >> base;
    cout << "Ingrese la altura =\t";
    cin >> altura;
    return base*altura;
}
float areaTriangulo () {
    float base = 0.0, altura = 0.0;
    cout << "Calcular area triangulo.\n"<< "---------------------------\n"<< "Ingrese la base: \t";
    cin >> base;
    cout << "Ingrese la altura =\t";
    cin >> altura;
    return (base*altura)/2;
}

