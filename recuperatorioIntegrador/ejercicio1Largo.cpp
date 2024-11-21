#include <iostream>
#include <ostream>

template <typename T>
//Recibe un arreglo tipo C, valor a buscar y el tamaño.
int buscarArreglo(T *arreglo, T target, int tamanio) {
    for (int i = 0; i < tamanio; ++i) {
        if (*(arreglo + i) == target) {
            std::cout << "Encontrado!" << std::endl;
            return i;
        }
    }
    return -1; // Valor no encontrado
}

int main()  {
    float arreglo[4] = {1.2, 1.3, 1.4, 1.5};
    float target = arreglo[3];
    std::cout << buscarArreglo(arreglo, target, 4) << std::endl;

    int arregloInt[4] = {1, 2, 3, 4};
    int targetInt = arregloInt[3];
    std::cout << buscarArreglo(arregloInt, targetInt, 4) << std::endl;

    return 0;
}


