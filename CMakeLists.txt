cmake_minimum_required(VERSION 4.1)
project(Proyecto_2___Progra_2)

set(CMAKE_CXX_STANDARD 20)

add_executable(Proyecto_2___Progra_2 main.cpp
        Usuario.cpp
        Usuario.h
        Fachada.cpp
        Fachada.h
        Canal.cpp
        Canal.h
        SistemaNotificaciones.cpp
        SistemaNotificaciones.h
        GestorArchivos.cpp
        GestorArchivos.h
        ListaVideos.cpp
        ListaVideos.h
        ListaUsuarios.cpp
        ListaUsuarios.h
        Suscriptor.cpp
        Suscriptor.h
        Video.cpp
        Video.h
        AdapterMPG.cpp
        AdapterMPG.h
        VideoMP4.cpp
        VideoMP4.h
        VideoMPG.cpp
        VideoMPG.h
        Iterador.h
        Utilities.h
)
