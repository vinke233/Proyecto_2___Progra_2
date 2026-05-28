//
// Created by chino on 24/5/2026.
//

#ifndef PROYECTO_2___PROGRA_2_CANAL_H
#define PROYECTO_2___PROGRA_2_CANAL_H
#include "Utilities.h"
#include "Video.h"
#include "Suscriptor.h"
#include "Iterador.h"
/*
 * Contiene Video
 * Observer Subscriptor
 * Desarrolla subs
 * Tiene "Dueño"
 * itera
 */
class Usuario;
class Canal {
private:
    char* nombreCanal;
    Usuario* propietario;
    Video** videos;
    int cantidadVideos;
    int capacidadVideos;
    void aumentarCapacidadVideos();
    Suscriptor** suscriptores;
    int cantidadSuscriptores;
    int capacidadSuscriptores;
    void aumentarCapacidadSuscriptores();
    void copiarTexto(char*& destino, const char* fuente);
public:
    Canal(const char* nombreCanal,Usuario* propietario);
    ~Canal();
    void agregarVideo(Video* video);
    Video* getVideo(int indice) const;
    int getCantidadVideos() const;
    void agregarSuscriptor(Suscriptor* suscriptor);
    void eliminarSuscriptor(Suscriptor* suscriptor);
    void notificar(const char* mensaje);
    const char* getNombreCanal() const;

    Iterador<Video> obtenerIteradorVideos();
};


#endif //PROYECTO_2___PROGRA_2_CANAL_H