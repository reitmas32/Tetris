#include "../../../Headers/include/Graphics_Engine/Cuadro.hpp"

Cuadro::Cuadro(/* args */)
{
}

Cuadro::Cuadro(int x, int y,int tam, Color::Colors color)
{
    this->tam = tam;
    this->setPosicion(x,y);
    this->setColor(color);
}

void Cuadro::pinta(){
    
    Color(this->color);
    miniwin::rectangulo_lleno( + 1 + this->getPosicion().get_x() * tam,
                               + 1 + this->getPosicion().get_y() * tam,
                               + this->getPosicion().get_x() * tam + tam,
                               + this->getPosicion().get_y() * tam + tam);
    miniwin::refresca();
}

void Cuadro::pintaPosReal(){
    
    Color(this->color);
    miniwin::rectangulo_lleno( + 1 + this->getPosicion().get_x(),
                               + 1 + this->getPosicion().get_y(),
                               + this->getPosicion().get_x() + tam,
                               + this->getPosicion().get_y() + tam);
    miniwin::refresca();
}

Cuadro::~Cuadro()
{
}