//
// Created by chino on 24/5/2026.
//

#include "ListaUsuarios.h"

ListaUsuarios::ListaUsuarios() {
    capacidad = 5;
    cantidad = 0;
    usuarios = new Usuario*[capacidad];
}

ListaUsuarios::~ListaUsuarios() {
    delete[] usuarios;
}

void ListaUsuarios::aumentarCapacidad() {
    capacidad = capacidad * 2;
    Usuario** nuevoArreglo = new Usuario*[capacidad];
    for (int i = 0; i < cantidad; i++) {
        nuevoArreglo[i] = usuarios[i];
    }
    delete[] usuarios;
    usuarios = nuevoArreglo;
}

void ListaUsuarios::agregarUsuario(Usuario* usuario) {
    if (usuario == 0) {return;}
    if (cantidad >= capacidad) {
        aumentarCapacidad();
    }
    usuarios[cantidad] = usuario;
    cantidad++;
}

Usuario* ListaUsuarios::buscarPorCorreo(const char* correo) const {
    for (int i = 0; i < cantidad; i++) {
        if (strcmp(usuarios[i]->getCorreo(), correo) == 0) {
            return usuarios[i];
        }
    }
    return 0;
}

Usuario* ListaUsuarios::buscarPorNombre(const char* nombre) const {
    for (int i = 0; i < cantidad; i++) {
        if (strcmp(usuarios[i]->getNombre(), nombre) == 0) {
            return usuarios[i];
        }
    }
    return 0;
}

Usuario* ListaUsuarios::getUsuario(int indice) const {
    if (indice < 0 || indice >= cantidad) {
        return 0;
    }
    return usuarios[indice];
}

int ListaUsuarios::getCantidad() const {
    return cantidad;
}

Iterador<Usuario> ListaUsuarios::obtenerIterador() {
    return Iterador<Usuario>(usuarios, cantidad);
}