#ifndef MARCO_HPP
#define MARCO_HPP

#include <Graphics_Engine/Colors.hpp>

#include <Graphics_Engine/Cuadro.hpp>

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