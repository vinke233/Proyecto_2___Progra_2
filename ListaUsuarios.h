//
// Created by chino on 24/5/2026.
//

#ifndef PROYECTO_2___PROGRA_2_LISTAUSUARIOS_H
#define PROYECTO_2___PROGRA_2_LISTAUSUARIOS_H
#include "Utilities.h"
#include "Usuario.h"
#include "Iterador.h"
/*
 * Crea Iterador
 */
class ListaUsuarios {
private:
    Usuario** usuarios;
    int cantidad;
    int capacidad;
    void aumentarCapacidad();
public:
    ListaUsuarios();
    ~ListaUsuarios();
    void agregarUsuario(Usuario* usuario);
    Usuario* buscarPorCorreo(const char* correo) const;
    Usuario* buscarPorNombre(const char* nombre) const;
    Usuario* getUsuario(int indice) const;
    int getCantidad() const;

    Iterador<Usuario> obtenerIterador();
};


#endif //PROYECTO_2___PROGRA_2_LISTAUSUARIOS_H