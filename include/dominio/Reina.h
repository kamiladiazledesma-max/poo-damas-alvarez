#ifndef REINA_H
#define REINA_H

#include "Pieza.h"

class Reina : public Pieza {

public:
    Reina(Color color, int fila, int columna);
    
    ~Reina();

    bool puedeMoverse(int filaDestino, int columnaDestino) const;
};

#endif