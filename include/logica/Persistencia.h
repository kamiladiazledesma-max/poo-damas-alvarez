#ifndef PERSISTENCIA_H
#define PERSISTENCIA_H

#include <fstream>
#include <string>
#include "../../include/logica/Partida.h"

using namespace std;

class Persistencia {

public:
    Persistencia();
    ~Persistencia();

    bool guardarPartida(Partida* partida, string nombreArchivo);
    bool cargarPartida(Partida* partida, string nombreArchivo);
};

#endif