#ifndef TABLERO_H
#define TABLERO_H

#include <vector>
#include "Pieza.h"
#include "PiezaNormal.h"
#include "Reina.h"

using namespace std;

class Tablero {

protected:
    vector<vector<Pieza*>> cuadricula;
    int cantPiezasBlancas;
    int cantPiezasNegras;
    
public:
    Tablero();
    ~Tablero();
    Tablero* copiar();

    void inicializar();
    Pieza* getPieza(int fila, int columna) const;
    void setPieza(int fila, int columna, Pieza* pieza);
    void moverPieza(int filaOrigen, int columnaOrigen, int filaDestino, int columnaDestino);
    void eliminarPieza(int fila, int columna);
    void coronarPieza(int fila, int columna);
    int getCantPiezasBlancas() const;
    int getCantPiezasNegras() const;
    bool estaVacia(int fila, int columna) const;
    bool dentroDelTablero(int fila, int columna) const;
};

#endif