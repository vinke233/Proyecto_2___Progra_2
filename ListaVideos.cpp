//
// Created by chino on 24/5/2026.
//

#include "ListaVideos.h"

ListaVideos::ListaVideos() {
    capacidad = 5;
    cantidad = 0;
    videos = new Video*[capacidad];
}

ListaVideos::~ListaVideos() {
    delete[] videos;
}

void ListaVideos::aumentarCapacidad() {
    capacidad = capacidad * 2;
    Video** nuevoArreglo = new Video*[capacidad];
    for (int i = 0; i < cantidad; i++) {
        nuevoArreglo[i] = videos[i];
    }
    delete[] videos;
    videos = nuevoArreglo;
}

void ListaVideos::agregarVideo(Video* video) {
    if (video == 0) {return;}
    if (cantidad >= capacidad) {
        aumentarCapacidad();
    }
    videos[cantidad] = video;
    cantidad++;
}

Video* ListaVideos::buscarPorNombre(const char* nombre) const {
    for (int i = 0; i < cantidad; i++) {
        if (strcmp(videos[i]->getNombre(), nombre) == 0) {
            return videos[i];
        }
    }
    return 0;
}

Video* ListaVideos::getVideo(int indice) const {
    if (indice < 0 || indice >= cantidad) {
        return 0;
    }
    return videos[indice];
}

int ListaVideos::getCantidad() const {
    return cantidad;
}

Iterador<Video> ListaVideos::obtenerIterador() {
    return Iterador<Video>(videos, cantidad);
}