#include "cilindro.h"
#include <cmath>

#define PI 3.1416

cilindro::cilindro(float r, float h): radio(r), altura(h) {}

float cilindro::calcularVolumen() {
    return PI*pow(radio,2)*altura;
}

void cilindro::dimensionar(float r, float h) {
    radio = r;
    altura = h;
}
