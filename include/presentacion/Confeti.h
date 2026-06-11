#ifndef CONFETI_H
#define CONFETI_H

#include <SFML/Graphics.hpp>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Particula {
    sf::RectangleShape forma;
    float velocidadX;
    float velocidadY;
    float rotacion;
    float velocidadRotacion;
};

class Confeti {

private:
    vector<Particula> particulas;
    int cantParticulas;

public:
    Confeti();
    ~Confeti();

    void iniciar();
    void actualizar();
    void dibujar(sf::RenderWindow* ventana);
};

#endif