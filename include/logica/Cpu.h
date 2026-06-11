#ifndef CPU_H
#define CPU_H

#include <cstdlib>
#include <ctime>
#include <vector>
#include <climits>
#include "../../include/dominio/Jugador.h"
#include "../../include/logica/ReglasJuego.h"
#include "../../include/dominio/Tablero.h"
#include "../../include/dominio/PiezaNormal.h"
#include "../../include/dominio/Reina.h"

using namespace std;

class Cpu : public Jugador {

private:
    ReglasJuego* reglas;
    Tablero* tablero;

    int evaluar();
    int minimax(int profundidad, bool esMaximizador);
    vector<pair<pair<int,int>, pair<int,int>>> obtenerMovimientos(Color c);

public:
    Cpu(string nombre, Color color, ReglasJuego* reglas, Tablero* tablero);
    ~Cpu();

    bool esCPU() const;
    void realizarMovimiento();
};

#endif