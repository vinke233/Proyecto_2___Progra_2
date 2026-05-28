//
// Created by chino on 24/5/2026.
//

#ifndef PROYECTO_2___PROGRA_2_USUARIO_H
#define PROYECTO_2___PROGRA_2_USUARIO_H
#include "Utilities.h"
#include "Suscriptor.h"
/*
 * Posee Canal
 * Puede ser subscriptor
 * Tiene canal
 */
class Canal;
class Usuario: public Suscriptor {
private:
    char* nombre;
    char* correo;
    char* password;
    Canal* canal;
    void copiarTexto(char*& destino, const char* fuente);
public:
    Usuario(const char* nombre,const char* correo,const char* password);
    Usuario(const Usuario& other);
    Usuario& operator=(const Usuario& other);
    ~Usuario();

    const char* getNombre() const;
    const char* getCorreo() const;
    const char* getPassword() const;
    void setCanal(Canal* canal);
    Canal* getCanal() const;
    void actualizar(const char* mensaje) override;
};


#endif //PROYECTO_2___PROGRA_2_USUARIO_H