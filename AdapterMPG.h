//
// Created by chino on 24/5/2026.
//

#ifndef PROYECTO_2___PROGRA_2_ADAPTERMPG_H
#define PROYECTO_2___PROGRA_2_ADAPTERMPG_H


/*
 * Adapta VideoMPG
 */

#include "Video.h"
#include "VideoMPG.h"

class AdapterMPG:public Video {
private:
    VideoMPG* videoMPG;
public:
    AdapterMPG(const char* nombre,const char* descripcion,const char* canal,VideoMPG* videoMPG);
    ~AdapterMPG();
    void play() override;
};


#endif //PROYECTO_2___PROGRA_2_ADAPTERMPG_H