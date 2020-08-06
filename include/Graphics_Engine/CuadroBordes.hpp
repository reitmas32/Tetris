#ifndef CUADRO_BORDES_HPP
#define CUADRO_BORDES_HPP

#include <Graphics_Engine/Cuadro.hpp>

class CuadroBordes : Cuadro{
private:
    Color::Colors colorFondo;
    int b_sup;
    int b_inf;
    int b_rigth;
    int b_left;
public:
    CuadroBordes();
    CuadroBordes(int x, int y, int tam, Color::Colors color,Color::Colors colorFondo,int b_sup, int b_inf, int b_rigth, int b_left);
    ~CuadroBordes();
    void pintaPosReal();
};


#endif  //CUADRO_BORDES_HPP