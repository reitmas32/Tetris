#ifndef FONDO_HPP
#define FONDO_HPP

#include <Graphics_Engine/CuadroBordes.hpp>
#include "CuadroBordes.hpp"

void pintaCuadro(int x, int y, int tam, Color::Colors color,Color::Colors colorFondo,int b_sup, int b_inf, int b_rigth, int b_left);

void pintaS(int x, int y, int tam, Color::Colors color,Color::Colors colorFondo,int b_sup, int b_inf, int b_rigth, int b_left);

void pintaI(int x, int y, int tam, Color::Colors color,Color::Colors colorFondo,int b_sup, int b_inf, int b_rigth, int b_left);

void pintaZ(int x, int y, int tam, Color::Colors color,Color::Colors colorFondo,int b_sup, int b_inf, int b_rigth, int b_left);

void pintaT(int x, int y, int tam, Color::Colors color,Color::Colors colorFondo,int b_sup, int b_inf, int b_rigth, int b_left);

void pintaL(int x, int y, int tam, Color::Colors color,Color::Colors colorFondo,int b_sup, int b_inf, int b_rigth, int b_left);

void pintaJ(int x, int y, int tam, Color::Colors color,Color::Colors colorFondo,int b_sup, int b_inf, int b_rigth, int b_left);

void pintaFondoBloque(int x, int y,  Color::Colors color, Color::Colors colorFondo);

void pintaFondo(Color::Colors color, Color::Colors colorFondo);
#endif