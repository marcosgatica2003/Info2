#ifndef CILINDRO_H
#define CILINDRO_H

class cilindro {
    public:
        cilindro(float radio = 1.0, float altura = 1.0);
        float calcularVolumen();
        void dimensionar(float r, float h );
    private:
        float radio;
        float altura;
};

#endif
