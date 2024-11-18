#ifndef CAJA_H
#define CAJA_H

template <typename T>
class caja {
    public:
        caja(T valorCaja);

        T getCaja() const;
    private:
        const T _valorCaja;
};

#include "caja.tpp"

#endif


