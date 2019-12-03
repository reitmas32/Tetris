#include "../../../Headers/include/Graphics_Engine/CuadroBordes.hpp"

CuadroBordes::CuadroBordes(/* args */)
{
}


CuadroBordes::CuadroBordes(int x, int y, int tam, Color::Colors color,Color::Colors colorFondo,int b_sup, int b_inf, int b_rigth, int b_left){
    this->tam = tam;
    this->setPosicion(x,y);
    this->setColor(color);
    this->b_sup = b_sup;
    this->b_inf = b_inf;
    this->b_rigth = b_rigth;
    this->b_left = b_left;
    this->colorFondo = colorFondo;
}
CuadroBordes::~CuadroBordes()
{
}

void CuadroBordes::pintaPosReal(){
    Color(this->colorFondo);
    miniwin::rectangulo_lleno( + 0 + this->getPosicion().get_x(),
                               + 0 + this->getPosicion().get_y(),
                               + this->getPosicion().get_x() + tam - 0,
                               + this->getPosicion().get_y() + tam - 0);
    Color(this->color);
    miniwin::rectangulo_lleno( + b_rigth + this->getPosicion().get_x(),
                               + b_sup + this->getPosicion().get_y(),
                               + this->getPosicion().get_x() + tam - b_left,
                               + this->getPosicion().get_y() + tam - b_inf);
    miniwin::refresca();
}