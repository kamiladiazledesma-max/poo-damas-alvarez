#ifndef GESTOREVETOS_H
#define GESTOREVETOS_H

#include <SFML/Graphics.hpp>
#include <set>
#include "../../include/dominio/Tablero.h"
#include "../../include/logica/Partida.h"
#include "../../include/logica/Cpu.h"
#include "../../include/logica/ReglasJuego.h"
#include "../../include/logica/Persistencia.h"
#include "../../include/presentacion/Renderer.h"

using namespace std;

class GestorEventos {

private:
    sf::RenderWindow* ventana;
    Partida* partida;
    Renderer* renderer;
    Persistencia* persistencia;
    int filaSeleccionada;
    int columnaSeleccionada;
    bool hayPiezaSeleccionada;
    set<pair<int,int>> movimientosValidos;
    float tamCelda;
    bool volverAlMenu;

public:
    GestorEventos(sf::RenderWindow* ventana, Partida* partida, Renderer* renderer);
    ~GestorEventos();

    void procesarEventos();
    bool juegoActivo() const;
    bool quiereVolverAlMenu() const;
};

#endif