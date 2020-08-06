#ifndef TABLERO_HPP
#define TABLERO_HPP

#include <sstream>

#include <Graphics_Engine/Piezas.hpp>

#include <Graphics_Engine/Palabra.hpp>

const int FILAS = 20;
const int COLUMNAS = 12;

class Tablero
{
private:
    Color::Colors tablero[COLUMNAS][FILAS];
    Color::Colors tableroDecora[COLUMNAS][FILAS];
    Color::Colors colorFondo;
    void setColor();
    
public:
    Level level;
    int puntos;
    Tablero(/* args */);
    Tablero(Color::Colors colorFondo, Level level);
    ~Tablero();
    void vacia();
    void pinta();
    void incrustaPieza(Pieza pieza);
    bool colision(Pieza pieza);
    bool fila_llena(int fila);
    void colapsa(int fila);
    void cuentaLineas();
    void pintaSig(Pieza sig);
    void pintaPiezas();
};


#endif  //TABLERO_HPP