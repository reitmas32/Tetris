#include <Graphics_Engine/Coordenada.hpp>

Coordenada::Coordenada(/* args */)
{
}

Coordenada::Coordenada(int x, int y){
    this->x = x;
    this->y = y;
}

Coordenada::~Coordenada(){}

int Coordenada::get_x(){
    return this->x;
}

int Coordenada::get_y(){
    return this->y;
}

void Coordenada::set_x(int x){
    this->x = x;
}

void Coordenada::set_y(int y){
    this->y = y;
}

void Coordenada::rota(){
    int tmp = this->x;
    this->set_x(-this->y);
    this->set_y(tmp);
}