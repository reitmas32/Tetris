#include <Graphics_Engine/MarcoTetris.hpp>

MarcoTetris::MarcoTetris(/* args */)
{
}

MarcoTetris::MarcoTetris(int pos_x, int pos_y, int dif_x, int dif_y, Color::Colors color, Color::Colors colorMarco)
{
    this->pos_x = pos_x;
    this->pos_y = pos_y;
    this->dif_x = dif_x;
    this->dif_y = dif_y;
    this->colorMarco = colorMarco;
    this->color = color;
}

MarcoTetris::~MarcoTetris()
{
}


void MarcoTetris::pinta(){

    std::vector<Marco> marcos;

    marcos.push_back(Marco(pos_x,pos_y,dif_x,dif_y,1,Color::Colors::Black));
    marcos.push_back(Marco(pos_x + 1,pos_y + 1,dif_x - 2,dif_y - 2,1,colorMarco));
    marcos.push_back(Marco(pos_x + 3,pos_y + 3,dif_x - 6,dif_y - 6,1,color));
    for (Marco m : marcos)
    {
        m.pinta();
        m.~Marco();
    }
}