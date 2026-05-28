//
// Created by chino on 24/5/2026.
//

#include "VideoMP4.h"

void VideoMP4::copiarRuta(const char* ruta) {
    if (ruta == 0) {ruta = "";}
    rutaArchivo = new char[std::strlen(ruta) + 1];
    std::strcpy(rutaArchivo, ruta);
}

VideoMP4::VideoMP4(const char* nombre, const char* descripcion, const char* canal, const char* rutaArchivo)
    : Video(nombre, descripcion, canal) {
    this->rutaArchivo = 0;
    copiarRuta(rutaArchivo);
}

VideoMP4::VideoMP4(const VideoMP4& other)
    : Video(other) {
    rutaArchivo = 0;
    copiarRuta(other.rutaArchivo);
}

VideoMP4& VideoMP4::operator=(const VideoMP4& other) {
    if (this != &other) {
        Video::operator=(other);
        delete[] rutaArchivo;
        rutaArchivo = 0;
        copiarRuta(other.rutaArchivo);
    }
    return *this;
}

VideoMP4::~VideoMP4() {
    delete[] rutaArchivo;
}

void VideoMP4::play() {
    std::cout << "Reproduciendo MP4: " << nombre << std::endl;
}

const char* VideoMP4::getRutaArchivo() const {
    return rutaArchivo;
}