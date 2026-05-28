//
// Created by chino on 24/5/2026.
//

#ifndef PROYECTO_2___PROGRA_2_VIDEOMP4_H
#define PROYECTO_2___PROGRA_2_VIDEOMP4_H

#include "Utilities.h"
#include"Video.h"

class VideoMP4: public Video {
private:
    char* rutaArchivo;
    void copiarRuta(const char* ruta);

public:
    VideoMP4(const char* nombre,const char* descripcion,const char* canal,const char* rutaArchivo);
    VideoMP4(const VideoMP4& other);
    VideoMP4& operator=(const VideoMP4& other);
    ~VideoMP4();
    void play() override;

    const char* getRutaArchivo() const;
};


#endif //PROYECTO_2___PROGRA_2_VIDEOMP4_H