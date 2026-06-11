#ifndef PIEZANORMAL_H
#define PIEZANORMAL_H

#include "Pieza.h"

class PiezaNormal : public Pieza {

public:
    PiezaNormal(Color color, int fila, int columna);
    
    ~PiezaNormal();

    bool puedeMoverse(int filaDestino, int columnaDestino) const;
};

#endif