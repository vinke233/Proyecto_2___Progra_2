//
// Created by chino on 24/5/2026.
//

#include "Canal.h"

void Canal::copiarTexto(char*& destino, const char* fuente) {
    if (fuente == 0) {fuente = "";}
    destino = new char[strlen(fuente) + 1];
    strcpy(destino, fuente);
}

Canal::Canal(const char* nombreCanal,Usuario* propietario) {
    this->nombreCanal = 0;
    copiarTexto(this->nombreCanal,nombreCanal);
    this->propietario = propietario;
    capacidadVideos = 5;
    cantidadVideos = 0;
    videos = new Video*[capacidadVideos];
    capacidadSuscriptores = 5;
    cantidadSuscriptores = 0;
    suscriptores = new Suscriptor*[capacidadSuscriptores];
}

Canal::~Canal() {
    for (int i = 0; i < cantidadVideos; i++) {
        delete videos[i];
    }
    delete[] videos;
    delete[] nombreCanal;
}

void Canal::aumentarCapacidadVideos() {
    capacidadVideos =capacidadVideos * 2;
    Video** nuevoArreglo =
        new Video*[capacidadVideos];
    for (int i = 0;
         i < cantidadVideos;
         i++) {
        nuevoArreglo[i] = videos[i];
         }
    delete[] videos;
    videos = nuevoArreglo;
}

void Canal::aumentarCapacidadSuscriptores() {
    capacidadSuscriptores = capacidadSuscriptores * 2;
    Suscriptor** nuevoArreglo = new Suscriptor*[capacidadSuscriptores];
    for (int i = 0; i < cantidadSuscriptores; i++) {
        nuevoArreglo[i] = suscriptores[i];
         }
    delete[] suscriptores;
    suscriptores = nuevoArreglo;
}

void Canal::agregarVideo(Video* video) {
    if (video == 0) {
        return;
    }
    if (cantidadVideos >= capacidadVideos) {
        aumentarCapacidadVideos();
    }
    videos[cantidadVideos] = video;
    cantidadVideos++;
    notificar("Nuevo video publicado");
}

Video* Canal::getVideo(int indice) const {
    if (indice < 0 || indice >= cantidadVideos) {
        return 0;
    }
    return videos[indice];
}

int Canal::getCantidadVideos() const {
    return cantidadVideos;
}

void Canal::agregarSuscriptor(Suscriptor *suscriptor) {
    if (suscriptor == 0) {
        return;
    }
    if (cantidadSuscriptores >= capacidadSuscriptores) {
        aumentarCapacidadSuscriptores();
    }
    suscriptores[cantidadSuscriptores] = suscriptor;
    cantidadSuscriptores++;
}

void Canal::eliminarSuscriptor(Suscriptor *suscriptor) {
    int posicion = -1;
    for (int i = 0; i < cantidadSuscriptores; i++) {
        if (suscriptores[i] == suscriptor) {
            posicion = i; break;
        }
    }
    if (posicion == -1) {
        return;
    }
    for (int i = posicion; i < cantidadSuscriptores - 1; i++) {
        suscriptores[i] = suscriptores[i + 1];
    }

    cantidadSuscriptores--;
}

void Canal::notificar(const char *mensaje) {
    for (int i = 0; i < cantidadSuscriptores; i++) {
        suscriptores[i]->actualizar(mensaje);
    }
}

const char* Canal::getNombreCanal() const {
    return nombreCanal;
}

Iterador<Video> Canal::obtenerIteradorVideos() {
    return Iterador<Video>(videos, cantidadVideos);
}
