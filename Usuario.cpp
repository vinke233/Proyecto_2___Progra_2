//
// Created by chino on 24/5/2026.
//

#include "Usuario.h"

void Usuario::copiarTexto(char*& destino, const char* fuente) {
    if (fuente == 0) {fuente = "";}
    destino = new char[strlen(fuente) + 1];
    strcpy(destino, fuente);
}

Usuario::Usuario(const char* nombre,const char* correo,const char* password) {
    this->nombre = 0;
    this->correo = 0;
    this->password = 0;

    copiarTexto(this->nombre, nombre);
    copiarTexto(this->correo, correo);
    copiarTexto(this->password, password);
    canal = 0;
}

Usuario::Usuario(const Usuario& other) {
    nombre = 0;
    correo = 0;
    password = 0;

    copiarTexto(nombre, other.nombre);
    copiarTexto(correo, other.correo);
    copiarTexto(password, other.password);
    canal = other.canal;
}

Usuario& Usuario::operator=(const Usuario& other) {
    if (this != &other) {
        delete[] nombre;
        delete[] correo;
        delete[] password;

        nombre = 0;
        correo = 0;
        password = 0;

        copiarTexto(nombre, other.nombre);
        copiarTexto(correo, other.correo);
        copiarTexto(password, other.password);
        canal = other.canal;
    }

    return *this;
}

Usuario::~Usuario() {
    delete[] nombre;
    delete[] correo;
    delete[] password;
}

const char* Usuario::getNombre() const {
    return nombre;
}

const char* Usuario::getCorreo() const {
    return correo;
}

const char* Usuario::getPassword() const {
    return password;
}

void Usuario::setCanal(Canal* canal) {
    this->canal = canal;
}

Canal* Usuario::getCanal() const {
    return canal;
}

void Usuario::actualizar(const char *mensaje) {
    std::cout << "\n [Notificacion] " << nombre << ": " << mensaje << std::endl;
}
