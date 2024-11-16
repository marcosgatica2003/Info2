#ifndef PAR_H
#define PAR_H

template <typename T>

class par {
    public:
        par(T valor0, T valor1);
        par(T valor0, T valor1, T valor2, T valor3);

        void mostrar() const;

    private:
        const T _valor0;
        const T _valor1;
        const T _valor2;
        const T _valor3;
};

#endif

