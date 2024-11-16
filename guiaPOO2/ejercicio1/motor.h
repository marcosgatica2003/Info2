#ifndef MOTOR_H
#define MOTOR_H

class motor {
    public:
        motor(float cilindrada, float caballosFuerza);
        void mostrarMotor() const;
    private:
        const float _cc;
        const float _HP;
};

#endif

