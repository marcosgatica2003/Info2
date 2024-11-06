#include <iostream>
#include <vector>

// Función para encontrar el mayor número en un vector de enteros

template < typename T >
T encontrarMayor(const std::vector<T>& vec) {
    T mayor = vec[0];
    for (std::size_t i = 1; i < vec.size(); i++) {
        if (vec[i] > mayor) {
            mayor = vec[i];
        }
    }
    return mayor;
}

// int encontrarMayor(const std::vector<int>& vec) {
//     int mayor = vec[0];
//     for (std::size_t i = 1; i < vec.size(); i++) {
//         if (vec[i] > mayor) {
//             mayor = vec[i];
//         }
//     }
//     return mayor;
// }

int main() {
    std::vector<int> vecEnteros;
    vecEnteros.push_back(3);
    vecEnteros.push_back(7);
    vecEnteros.push_back(2);
    vecEnteros.push_back(9);

    std::cout << "El mayor número en el vector de enteros es: " << encontrarMayor(vecEnteros) << std::endl;

    std::vector<float> vecFlotante;
    vecFlotante.push_back(2.0);
    vecFlotante.push_back(2.3);
    vecFlotante.push_back(2.2);
    vecFlotante.push_back(2.1);

    std::cout << "El mayor número en el vector de float es: " << encontrarMayor(vecFlotante) << std::endl;

    std::vector<long> vecLong;
    vecLong.push_back(313121145);
    vecLong.push_back(7768658);
    vecLong.push_back(275765676);
    vecLong.push_back(90000000000000);

    std::cout << "El mayor número en el vector de long es: " << encontrarMayor(vecLong) << std::endl;



    return 0;
}
