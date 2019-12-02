#ifndef PALABRA_HPP
#define PALABRA_HPP

#include <iostream>
#include "Letras.hpp"

class Palabra
{
private:
    std::string palabra;
    int pos_x;
    int pos_y;
    int tam;
    Color::Colors colorPalabra;
    Color::Colors colorFondo;
public:
    Palabra(/* args */);
    Palabra(std::string palabra, int x, int y, int tam, Color::Colors colorPalabra, Color::Colors colorFondo);
    ~Palabra();
    void pinta();
};
#endif  //PALABRA_HPP