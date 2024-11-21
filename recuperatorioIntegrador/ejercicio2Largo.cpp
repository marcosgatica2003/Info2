#include <iostream>
#include <cmath>
class Punto2D {
    public:
        Punto2D(float x = 0, float y = 0);
        void imprimir() const;
        float getX() const;
        float getY() const;
        void setX(float newX);
        void setY(float newY);
        float distancia() const;
        float distancia(Punto2D) const;
    private:
        float _x;
        float _y;
};

Punto2D::Punto2D(float x, float y): _x(x), _y(y) {}

float Punto2D::getX() const { return _x; }
float Punto2D::getY() const { return _y; }

void Punto2D::setY(float newY) { _y = newY; } 
void Punto2D::setX(float newX) { _x = newX; }

void Punto2D::imprimir() const {
    std::cout << "(" << this->_x << ";" << this->_y << ")" << std::endl;
}

float Punto2D::distancia() const {
    float deltaX = pow(this->_x, 2);
    float deltaY = pow(this->_y, 2);
    return sqrt(deltaX + deltaY);
}

float Punto2D::distancia(Punto2D punto) const {
    float deltaX = pow(punto._x - this->_x, 2);
    float deltaY = pow(punto._y - this->_y, 2);
    return sqrt(deltaX + deltaY);
}


int main()  {
    Punto2D centro;
    Punto2D p1(30, 40);
    Punto2D p2(1, 2);

    std::cout << "Distancia cetro:\t" << centro.distancia() << std::endl;
    std::cout << "Distancia punto 1:\t" << p1.distancia() << std::endl;
    std::cout << "Distancia punto 2:\t" << p2.distancia() << std::endl;
    std::cout << "Distancia entre p1 y p2:\t" << p1.distancia(p2) << std::endl;
    centro.imprimir();
    p1.imprimir();
    p2.imprimir();

    std::cout << "X:\t" << p1.getX() << "\n" << std::endl;
    std::cout << "Y:\t" << p1.getY() << "\n" << std::endl;

    return 0;
}


