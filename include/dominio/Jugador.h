#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>
#include "Pieza.h"

using namespace std;

class Jugador {

protected:
    string nombre;
    Color color;
    int piezasCapturadas;

public:
    Jugador(string nombre, Color color);
    virtual ~Jugador();

    string getNombre() const;
    Color getColor() const;
    int getPiezasCapturadas() const;
    void aumentarPiezasCapturadas();

    virtual bool esCPU() const;
};

#endif