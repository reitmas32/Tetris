#ifndef MARCO_TETRIS_HPP
#define MARCO_TETRIS_HPP
#include <Graphics_Engine/Marco.hpp>

class MarcoTetris
{
private:
    int pos_x;
    int pos_y;
    int dif_x;
    int dif_y;
    Color::Colors colorMarco;
    Color::Colors color;
public:
    MarcoTetris(/* args */);
    MarcoTetris(int pos_x, int pos_y, int dif_x, int dif_y, Color::Colors color, Color::Colors colorMarco);
    ~MarcoTetris();
    void pinta();
};

#endif  //MARCO_TETRIS_HPP