#ifndef PUNTO_H
#define PUNTO_H

class punto {
    friend bool sonIguales(const punto& equis, const punto& ye);
    public:
        punto(float x = 0.0, float y = 0.0);
        float getX() const;
        float getY() const;

    private:
        const float _x;
        const float _y;
};

#endif



