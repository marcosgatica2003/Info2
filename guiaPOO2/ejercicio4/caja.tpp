#include <iostream>

template <typename T>

caja<T>::caja(T valorCaja): _valorCaja(valorCaja) {}

template <typename T>

T caja<T>::getCaja() const {return _valorCaja;}
