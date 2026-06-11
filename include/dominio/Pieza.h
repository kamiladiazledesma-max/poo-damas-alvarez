#ifndef PIEZA_H
#define PIEZA_H

// los colores posibles de una pieza
enum Color {
    BLANCO,
    NEGRO
};

// esta es la clase base de todas las piezas del juego
// es abstracta porque tiene un metodo virtual puro
class Pieza {

protected:
    Color color;
    int fila;
    int columna;
    bool esReina;

public:
    // constructor
    Pieza(Color color, int fila, int columna);
    
    // destructor virtual para que funcione bien con herencia
    virtual ~Pieza();

    // para obtener los datos de la pieza
    Color getColor() const;
    int getFila() const;
    int getColumna() const;
    bool getEsReina() const;

    // para modificar los datos de la pieza
    void setFila(int nuevaFila);
    void setColumna(int nuevaColumna);
    void setEsReina(bool valor);

    // cada tipo de pieza se mueve diferente
    // por eso este metodo lo implementa cada clase hija
    virtual bool puedeMoverse(int filaDestino, int columnaDestino) const = 0;
};

#endif