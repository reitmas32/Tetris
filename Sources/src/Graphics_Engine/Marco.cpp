#include "../../../Headers/include/Graphics_Engine/Marco.hpp"

Marco::Marco(/* args */)
{
}

Marco::~Marco()
{
}

Marco::Marco(int pos_x, int pos_y, int dif_x, int dif_y, int tam, Color::Colors color){
    this->pos_x = pos_x;
    this->pos_y = pos_y;
    this->dif_x = dif_x;
    this->dif_y = dif_y;
    this->tam = tam;
    this->color = color;
}

void Marco::pinta(){
    Color(this->color);
    for (int i = 0; i < dif_x; i++)
    {
        for (int j = 0; j < dif_y; j++)
        {
            if( (i == 0 && j == 0) || (i == 0 && j == dif_y - 1) || (i == dif_x - 1 && j == 0) || (i == dif_x - 1 && j == dif_y - 1) ){

            }else{
                miniwin::rectangulo_lleno(pos_x + i * tam, pos_y + j * tam, pos_x + (i + 1) * tam, pos_y + (j + 1) * tam  );
            }

        }
        
    }
}