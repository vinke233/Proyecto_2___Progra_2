//
// Created by chino on 24/5/2026.
//

#ifndef PROYECTO_2___PROGRA_2_VIDEO_H
#define PROYECTO_2___PROGRA_2_VIDEO_H
#include "Utilities.h"
/*
 * Hereda AdaptadorMPG
 * Hereda VideoMP4
 */



class Video {
protected:
    char* nombre;
    char* descripcion;
    char* canal;

    void copiarTexto(char*& destino, const char* fuente);

public:
    Video(const char* nombre, const char* descripcion, const char* canal);
    Video(const Video& other);
    Video& operator=(const Video& other);
    virtual ~Video();

    virtual void play() = 0;

    const char* getNombre() const;
    const char* getCanal() const;
};


#endif //PROYECTO_2___PROGRA_2_VIDEO_H