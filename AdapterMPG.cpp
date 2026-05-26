//
// Created by chino on 24/5/2026.
//

#include "AdapterMPG.h"

AdapterMPG::AdapterMPG(const char* nombre,const char* descripcion,const char* canal,VideoMPG* videoMPG)
    : Video(nombre, descripcion, canal) {
    this->videoMPG = videoMPG;
}

AdapterMPG::~AdapterMPG() {
    delete videoMPG;
}

void AdapterMPG::play() {
    if (videoMPG != 0) {
        videoMPG->playAntiguo();
    }
}