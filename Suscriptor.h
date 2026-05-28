//
// Created by chino on 24/5/2026.
//

#ifndef PROYECTO_2___PROGRA_2_SUSCRIPTOR_H
#define PROYECTO_2___PROGRA_2_SUSCRIPTOR_H

#include "Utilities.h"
/*
 *Hereda a Usuario
*/
class Suscriptor {
public:
    virtual ~Suscriptor() {}
    virtual void actualizar(const char* mensaje) = 0;
};


#endif //PROYECTO_2___PROGRA_2_SUSCRIPTOR_H