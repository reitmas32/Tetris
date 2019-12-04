#include "../../../Headers/include/Graphics_Engine/Piezas.hpp"

void cuadrado(int x, int y, Color::Colors color, Color::Colors  colorDecora){
    CuadroTetris c = CuadroTetris( x * TAM, y * TAM, TAM, color, colorDecora);
    c.pintaPosReal();
    c.~CuadroTetris();
}

void pieza_s1(int x, int y,Color::Colors color,Color::Colors colorDecora){
    cuadrado(x + 0,y + 0, color,colorDecora);
    cuadrado(x + 1,y + 0, color,colorDecora);
    cuadrado(x + 1,y + 1, color,colorDecora);
    cuadrado(x + 2,y + 1, color,colorDecora);
}

void pintaTablero(){
    miniwin::color(miniwin::NEGRO);
    miniwin::rectangulo_lleno(230,110,450,470);
}