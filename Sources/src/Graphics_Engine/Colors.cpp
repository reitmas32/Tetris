#include "../../../Headers/include/Graphics_Engine/Colors.hpp"

Color::Color(Color::Colors color){
    this->color = color;
    this->setColor();
}

void Color::setColor(){
    switch (this->color)
    {
    case Color::Colors::Red:
        miniwin::color_rgb(_Red[0],_Red[1],_Red[2]);
    break;
    case Color::Colors::Black:
        miniwin::color_rgb(_Black[0],_Black[1],_Black[2]);
    break;
    
    default:
        break;
    }
}