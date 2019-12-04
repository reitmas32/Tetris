#ifndef CUADRO_TETRIS_HPP
#define CUADRO_TETRIS_HPP

#include "Cuadro.hpp"

const int TAM = 20;

class CuadroTetris : Cuadro{
private:
    Color::Colors colorDecora;
public:
    CuadroTetris(/* args */);
    CuadroTetris(int x, int y,int tam, Color::Colors color, Color::Colors colorDecora);
    void pintaPosReal();
    ~CuadroTetris();
};

#endif