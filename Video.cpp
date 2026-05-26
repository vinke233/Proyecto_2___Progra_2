//
// Created by chino on 24/5/2026.
//

#include "Video.h"

void Video::copiarTexto(char*& destino, const char* fuente) {
    if (fuente == 0) {
        fuente = "";
    }

    destino = new char[std::strlen(fuente) + 1];
    std::strcpy(destino, fuente);
}

Video::Video(const char* nombre, const char* descripcion, const char* canal) {
    this->nombre = 0;
    this->descripcion = 0;
    this->canal = 0;

    copiarTexto(this->nombre, nombre);
    copiarTexto(this->descripcion, descripcion);
    copiarTexto(this->canal, canal);
}

Video::Video(const Video& other) {
    nombre = 0;
    descripcion = 0;
    canal = 0;

    copiarTexto(nombre, other.nombre);
    copiarTexto(descripcion, other.descripcion);
    copiarTexto(canal, other.canal);
}

Video& Video::operator=(const Video& other) {
    if (this != &other) {
        delete[] nombre;
        delete[] descripcion;
        delete[] canal;

        nombre = 0;
        descripcion = 0;
        canal = 0;

        copiarTexto(nombre, other.nombre);
        copiarTexto(descripcion, other.descripcion);
        copiarTexto(canal, other.canal);
    }
    return *this;
}

Video::~Video() {
    delete[] nombre;
    delete[] descripcion;
    delete[] canal;
}

const char* Video::getNombre() const {
    return nombre;
}

const char* Video::getCanal() const {
    return canal;
}