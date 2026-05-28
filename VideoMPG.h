//
// Created by chino on 24/5/2026.
//

#ifndef PROYECTO_2___PROGRA_2_VIDEOMPG_H
#define PROYECTO_2___PROGRA_2_VIDEOMPG_H

#include "Utilities.h"
class VideoMPG {
private:
    char* rutaArchivo;
    void copiarRuta(const char* ruta);

public:
    VideoMPG(const char* rutaArchivo);
    VideoMPG(const VideoMPG& other);
    VideoMPG& operator=(const VideoMPG& other);
    ~VideoMPG();
    void playAntiguo();

    const char* getRutaArchivo() const;
};


#endif //PROYECTO_2___PROGRA_2_VIDEOMPG_H