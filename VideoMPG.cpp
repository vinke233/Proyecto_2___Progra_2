//
// Created by chino on 24/5/2026.
//

#include "VideoMPG.h"

void VideoMPG::copiarRuta(const char* ruta) {
    if (ruta == 0) {
        ruta = "";
    }

    rutaArchivo = new char[std::strlen(ruta) + 1];
    std::strcpy(rutaArchivo, ruta);
}

VideoMPG::VideoMPG(const char* rutaArchivo) {
    this->rutaArchivo = 0;
    copiarRuta(rutaArchivo);
}

VideoMPG::VideoMPG(const VideoMPG& other) {
    rutaArchivo = 0;
    copiarRuta(other.rutaArchivo);
}

VideoMPG& VideoMPG::operator=(const VideoMPG& other) {
    if (this != &other) {
        delete[] rutaArchivo;
        rutaArchivo = 0;
        copiarRuta(other.rutaArchivo);
    }
    return *this;
}

VideoMPG::~VideoMPG() {
    delete[] rutaArchivo;
}

void VideoMPG::playAntiguo() {
    std::cout << "Reproduciendo MPG antiguo..." << std::endl;
}

const char* VideoMPG::getRutaArchivo() const {
    return rutaArchivo;
}