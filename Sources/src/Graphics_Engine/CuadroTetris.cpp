#include "../../../Headers/include/Graphics_Engine/CuadroTetris.hpp"

CuadroTetris::CuadroTetris(/* args */)
{
}

CuadroTetris::CuadroTetris(int x, int y,int tam, Color::Colors color, Color::Colors colorDecora){
    this->tam = tam;
    this->setPosicion(x,y);
    this->setColor(color);
    this->colorDecora = colorDecora;
}

void CuadroTetris::pintaPosReal(bool reflejo){
    Color(this->color);
    if(reflejo){
        miniwin::rectangulo_lleno( + 1 + this->getPosicion().get_x(),
                                + 1 + this->getPosicion().get_y(),
                                + this->getPosicion().get_x() + tam - 0,
                                + this->getPosicion().get_y() + tam - 0);        
    }else
    {
        miniwin::rectangulo_lleno( + 0 + this->getPosicion().get_x(),
                                + 0 + this->getPosicion().get_y(),
                                + this->getPosicion().get_x() + tam - 0,
                                + this->getPosicion().get_y() + tam - 0);    
    }
    

    Color(this->colorDecora);
    miniwin::rectangulo_lleno( + 3 + this->getPosicion().get_x(),
                               + 3 + this->getPosicion().get_y(),
                               + this->getPosicion().get_x() + tam - 3,
                               + this->getPosicion().get_y() + tam - 3);
    if(reflejo){
        Color(Color::Colors::GrayLigth);
        miniwin::rectangulo_lleno( + 0 + this->getPosicion().get_x(),
                                + 0 + this->getPosicion().get_y(),
                                + this->getPosicion().get_x() + 3 - 0,
                                + this->getPosicion().get_y() + 3 - 0);
        miniwin::rectangulo_lleno( + 3 + this->getPosicion().get_x(),
                                + 3 + this->getPosicion().get_y(),
                                + this->getPosicion().get_x() + 6 - 0,
                                + this->getPosicion().get_y() + 6 - 0);
        miniwin::rectangulo_lleno( + 6 + this->getPosicion().get_x(),
                                + 3 + this->getPosicion().get_y(),
                                + this->getPosicion().get_x() + 9 - 0,
                                + this->getPosicion().get_y() + 6 - 0);
        miniwin::rectangulo_lleno( + 3 + this->getPosicion().get_x(),
                                + 6 + this->getPosicion().get_y(),
                                + this->getPosicion().get_x() + 6 - 0,
                                + this->getPosicion().get_y() + 9 - 0);        
    }
    miniwin::refresca();
}

CuadroTetris::~CuadroTetris()
{
}