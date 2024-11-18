#ifndef RECTANGULO_H
#define RECTANGULO_H

class rectangulo {
    friend float calcularArea(const rectangulo& rect);
    public: 
        rectangulo(float largo, float ancho);
        float getLargo() const;
        float getAncho() const;

    private:
           const float _largo;
           const float _ancho;
};

#endif


