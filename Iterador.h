//
// Created by chino on 24/5/2026.
//

#ifndef PROYECTO_2___PROGRA_2_ITERADOR_H
#define PROYECTO_2___PROGRA_2_ITERADOR_H
#include "Utilities.h"
#include "Usuario.h"
#include "Video.h"

template <class T>
class Iterador {
private:
    T** elementos;
    int cantidad;
    int posicion;
public:
    Iterador(T** elementos = 0, int cantidad = 0);
    bool hasNext() const;
    T* next();
    void reset();
};

template <class T>
Iterador<T>::Iterador(T** elementos, int cantidad) {
    this->elementos = elementos;
    this->cantidad = cantidad;
    posicion = 0;
}

template <class T>
bool Iterador<T>::hasNext() const {
    return elementos != 0 && posicion < cantidad;
}

template <class T>
T* Iterador<T>::next() {
    if (!hasNext()) {
        return 0;
    }
    T* actual = elementos[posicion];
    posicion++;
    return actual;
}

template <class T>
void Iterador<T>::reset() {
    posicion = 0;
}

// Instancias explícitas para las clases que se usarán
template class Iterador<Usuario>;
template class Iterador<Video>;

#endif //PROYECTO_2___PROGRA_2_ITERADOR_H