#ifndef PARTIDA_H
#define PARTIDA_H

#include <map>
#include <string>
#include "../../include/dominio/Tablero.h"
#include "../../include/dominio/Jugador.h"
#include "../../include/logica/ReglasJuego.h"

using namespace std;

class Partida {

private:
    Tablero* tablero;
    Jugador* jugador1;
    Jugador* jugador2;
    Jugador* jugadorActual;
    ReglasJuego* reglas;
    map<string, int> estadisticas;
    bool partidaTerminada;
    string ganador;

public:
    Partida(Jugador* j1, Jugador* j2);
    ~Partida();
    
    
    void iniciar();
    void setJugador2(Jugador* j2);
    bool realizarMovimiento(int filaOrigen, int columnaOrigen, int filaDestino, int columnaDestino);
    void cambiarTurno();
    Jugador* getJugadorActual() const;
    Jugador* getJugador1() const;
    Jugador* getJugador2() const;
    Tablero* getTablero() const;
    ReglasJuego* getReglas() const;
    map<string, int> getEstadisticas() const;
    bool isPartidaTerminada() const;
    string getGanador() const;
    void setPartidaTerminadaCPU(string nombreGanador);
};

#endif