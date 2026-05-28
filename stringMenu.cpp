//
// Created by ESCINF on 28/05/2026.
//

#include "stringMenu.h"

void stringMenu::stringMenuPrincipal() {
    std::cout << "   \nMenu Principal\n"
    << "\n 1) Manejo de Usuarios\n"
    << " 2) Manejo de Videos\n"
    << " 3) Guardar Datos Manualmente\n"
    << " 4) Salir\n\n";
}
void stringMenu::limpiarConsola() {
    for (int i = 0; i < 10; i++) {
        std::cout << "\n";
    }
}

void stringMenu::stringMenuVideos() {
    std::cout << "   \nMenu de Videos\n"
    << "\n 1) Buscar Videos por Nombre\n"
    << " 2) Buscar Videos por Canal de Usuario\n"
    << " 3) Reproducir Video\n"
    << " 4) Salir\n\n";
}

void stringMenu::stringMenuUsuarios() {
    std::cout << "   \nMenu de Usuarios\n"
    << "\n 1) Crear Usuario\n"
    << " 2) Hacer Login en el Sistema \n"
    << " 3) Subir Video a mi Cana\n"
    << " 4) Suscribirme a un Canal\n"
    << " 5) Desuscribirme de un Canal\n"
    << " 6) Salir\n\n";
}
/**/