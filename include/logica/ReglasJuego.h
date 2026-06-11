#ifndef REGLASJUEGO_H
#define REGLASJUEGO_H

#include <vector>
#include <set>
#include "../../include/dominio/Tablero.h"
#include "../../include/dominio/Jugador.h"

using namespace std;

class ReglasJuego {

private:
    Tablero* tablero;

public:
    ReglasJuego(Tablero* tablero);
    ~ReglasJuego();

    set<pair<int,int>> getMovimientosValidos(int fila, int columna);
    bool hayCaptura(int fila, int columna);
    bool hayCapturaPosible(Color color);
    bool realizarMovimiento(int filaOrigen, int columnaOrigen, int filaDestino, int columnaDestino);
    bool verificarCorona(int fila, int columna);
    bool juegoTerminado(Color colorTurno);
    Color getGanador();
};

#endif