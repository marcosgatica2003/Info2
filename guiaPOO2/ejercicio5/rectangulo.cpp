#include "rectangulo.h"

rectangulo::rectangulo(float largo, float ancho): _largo(largo), _ancho(ancho) {}

float rectangulo::getAncho() const { return _ancho;}
float rectangulo::getLargo() const { return _largo; }

float calcularArea(const rectangulo& rect) {
    return (rect._largo * rect._ancho);
}


