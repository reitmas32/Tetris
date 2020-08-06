#ifndef CUADRO_HPP
#define CUADRO_HPP

#include <iostream>

#include <Graphics_Engine/miniwin.h>

#include <Graphics_Engine/Coordenada.hpp>

#include <Graphics_Engine/Colors.hpp>

class Cuadro
{
protected:
    Coordenada posicion;

    Color::Colors color;

    int tam;
public:
    Cuadro(/* args */);

    Cuadro(int x, int y,int tam, Color::Colors color);

    ~Cuadro();

    Coordenada getPosicion(){return this->posicion;}

    Color::Colors getColor(){return this->color;}

    void setPosicion(int x, int y){posicion.set_x(x); posicion.set_y(y);}

    void setColor(Color::Colors color){
        this->color = color;
    }

    void pinta();

    void pintaPosReal();

};

#endif  //CUADRO_HPP