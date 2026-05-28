//
// Created by chino on 24/5/2026.
//

#ifndef PROYECTO_2___PROGRA_2_LISTAVIDEOS_H
#define PROYECTO_2___PROGRA_2_LISTAVIDEOS_H
#include "Utilities.h"
#include "Video.h"
#include "Iterador.h"
/*
 * Crea Iterador
 */
class ListaVideos {
private:
    Video** videos;
    int cantidad;
    int capacidad;
    void aumentarCapacidad();
public:
    ListaVideos();
    ~ListaVideos();
    void agregarVideo(Video* video);
    Video* buscarPorNombre(const char* nombre) const;
    Video* getVideo(int indice) const;
    int getCantidad() const;
    Iterador<Video> obtenerIterador();
};


#endif //PROYECTO_2___PROGRA_2_LISTAVIDEOS_H