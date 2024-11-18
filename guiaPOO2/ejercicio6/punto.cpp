#include "punto.h"

punto::punto(float x, float y): _x(x), _y(y) {}

float punto::getX() const { return _x; }
float punto::getY() const { return _y; }

bool sonIguales(const punto& equis, const punto& ye) {
    return (equis._x == ye._x && equis._y == ye._y);
}

