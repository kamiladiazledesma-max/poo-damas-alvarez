#ifndef MENU_H
#define MENU_H

#include <SFML/Graphics.hpp>
#include <string>

using namespace std;

class Menu {

private:
    sf::RenderWindow* ventana;
    sf::Font fuente;
    sf::Texture fondo;
    sf::Sprite spriteFondo;
    sf::RectangleShape boton1;
    sf::RectangleShape boton2;
    sf::RectangleShape boton3;
    sf::Text textoBoton1;
    sf::Text textoBoton2;
    sf::Text textoBoton3;

public:
    Menu(sf::RenderWindow* ventana);
    ~Menu();

    int mostrar();
};

#endif