#include <iostream>

// Macro para encontrar el valor máximo entre dos números
// #define MAXIMO(a, b) ((a) > (b) ? (a) : (b))

template < typename T >

inline T MAXIMO(T a, T b) {

    return ((a) > (b) ? (a) : (b));

}

int main() {
    int num1 = 3, num2 = 7;
    float num3 = 4.5, num4 = 2.3;
    char char1 = 'a', char2 = 'z';

    std::cout << "Máximo entre " << num1 << " y " << num2 << " es: " << MAXIMO(num1, num2) << std::endl;
    std::cout << "Máximo entre " << num3 << " y " << num4 << " es: " << MAXIMO(num3, num4) << std::endl;
    std::cout << "Máximo entre '" << char1 << "' y '" << char2 << "' es: " << MAXIMO(char1, char2) << std::endl;

    return 0;
}
