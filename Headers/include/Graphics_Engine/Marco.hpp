#ifndef MARCO_HPP
#define MARCO_HPP

#include "Colors.hpp"

#include "Cuadro.hpp"

class Marco
{
private:
    int pos_x;
    int pos_y;
    int dif_x;
    int dif_y;
    int tam;
    Color::Colors color;
public:
    Marco(/* args */);
    Marco(int pos_x, int pos_y, int dif_x, int dif_y, int tam, Color::Colors color);
    ~Marco();
    void pinta();
};

#endif  //MARCO_HPP