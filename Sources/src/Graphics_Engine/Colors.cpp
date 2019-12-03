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
    case Color::Colors::Blue:
        miniwin::color_rgb(_Blue[0],_Blue[1],_Blue[2]);
    break;
    case Color::Colors::Brown:
        miniwin::color_rgb(_Brown[0],_Brown[1],_Brown[2]);
    break;
    case Color::Colors::Green:
        miniwin::color_rgb(_Green[0],_Green[1],_Green[2]);
    break;
    case Color::Colors::Yellow:
        miniwin::color_rgb(_Black[0],_Yellow[1],_Yellow[2]);
    break;
    case Color::Colors::Magenta:
        miniwin::color_rgb(_Magenta[0],_Magenta[1],_Magenta[2]);
    break;
    case Color::Colors::Cyan:
        miniwin::color_rgb(_Cyan[0],_Cyan[1],_Cyan[2]);
    break;
    case Color::Colors::CyanDark:
        miniwin::color_rgb(_CyanDark[0],_CyanDark[1],_CyanDark[2]);
    break;
    case Color::Colors::White:
        miniwin::color_rgb(_White[0],_White[1],_White[2]);
    break;
    case Color::Colors::Gray:
        miniwin::color_rgb(_Gray[0],_Gray[1],_Gray[2]);
    break;
    case Color::Colors::GrayDark:
        miniwin::color_rgb(_GrayDark[0],_GrayDark[1],_GrayDark[2]);
    break;
    default:
        break;
    }
}