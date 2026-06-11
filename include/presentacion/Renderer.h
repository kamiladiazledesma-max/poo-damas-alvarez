#ifndef RENDERER_H
#define RENDERER_H

#include <SFML/Graphics.hpp>
#include <string>
#include "../../include/dominio/Tablero.h"
#include "../../include/logica/Partida.h"
#include "../../include/logica/ReglasJuego.h"
#include "../../include/presentacion/Confeti.h"

using namespace std;

class Renderer {

private:
    sf::RenderWindow* ventana;
    float tamCelda;
    sf::Font fuente;
    Confeti confeti;
    bool confetiIniciado;
    

public:
    Renderer(sf::RenderWindow* ventana);
    ~Renderer();
    

    void dibujarTablero();
    void dibujarPiezas(Tablero* tablero);
    void dibujarMovimientosValidos(set<pair<int,int>> movimientos);
    void dibujarInfo(Partida* partida);
    void dibujarCorona(float x, float y);
    void dibujarPantallaFin(string ganador);
    void limpiar();
    void mostrar();
    void actualizarConfeti();
};

#endif