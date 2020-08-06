#ifndef PIEZAS_HPP
#define PIEZAS_HPP

#include <Graphics_Engine/CuadroTetris.hpp>

const int MARGEN_SUP = 120;
const int MARGEN_DER = 240;

enum class Level{
    One
};

const Color::Colors LevelOne[7][2]{
    {Color::Colors::Blue    , Color::Colors::Blue     },
    {Color::Colors::Green   , Color::Colors::Green    },
    {Color::Colors::Magenta , Color::Colors::Magenta  },
    {Color::Colors::Cyan    , Color::Colors::Cyan     },
    {Color::Colors::Yellow  , Color::Colors::Yellow   },
    {Color::Colors::Red     , Color::Colors::Red      },
    {Color::Colors::Purple  , Color::Colors::Purple   }
};

void cuadrado(int x, int y, Color::Colors color, Color::Colors colorDecora);

void cuadradoSinReflejo(int x, int y, Color::Colors color, Color::Colors colorDecora);

void pieza_s1(int x, int y,Color::Colors color,Color::Colors colorDecora);

void pintaTablero();

class Pieza{
    public:
        Coordenada orig;
        Coordenada perif[3];
        Color::Colors color;
        Color::Colors colorDecora;
    public:
        Pieza();
        Pieza(Level level);
        Pieza(int orig_x, int orig_y, Color::Colors color, Color::Colors colorDecora);
        void pinta();
        void rota();
        Coordenada posicion(int n);
};

#endif  //PIEZAS_HPP;