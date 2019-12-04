#include "../../Headers/include/Graphics_Engine/Letras.hpp"
#include "../../Headers/include/Graphics_Engine/Palabra.hpp"
#include "../../Headers/include/Graphics_Engine/Cuadro.hpp"
#include "../../Headers/include/Graphics_Engine/CuadroBordes.hpp"
#include "../../Headers/include/Graphics_Engine/miniwin.h"
#include "../../Headers/include/Graphics_Engine/Fondo.hpp"
#include "../../Headers/include/Graphics_Engine/MarcoTetris.hpp"
#include "../../Headers/include/Graphics_Engine/BloquesInf.hpp"
#include "../../Headers/include/Graphics_Engine/Piezas.hpp"

/*
   miniwin::vredimensiona(720,560);
   pintaFondo(Color::Colors::GrayDark,Color::Colors::CyanDark);
   creaBloques(Color::Colors::Black, Color::Colors::CyanDark);
*/

using namespace miniwin;

int main() {   
   miniwin::vredimensiona(720,560);
   pintaFondo(Color::Colors::GrayDark,Color::Colors::CyanDark);
   creaBloques(Color::Colors::Black, Color::Colors::CyanDark);
   
   int x = 15;
   int y = 6;
   pieza_s1(x,y,Color::Colors::Red, Color::Colors::Red);
   int Tecla = tecla();

   while( Tecla != ESCAPE){
            if(Tecla == ABAJO)      y++;
      else  if(Tecla == ARRIBA)     y--;
      else  if(Tecla == IZQUIERDA)  x--;
      else  if(Tecla == DERECHA)    x++;
      if(Tecla != NINGUNA){
         pintaTablero();
         pieza_s1(x,y,Color::Colors::Red, Color::Colors::Red);
         refresca();
      }
      espera(100);
      Tecla = tecla();
   }
   vcierra();
   
   return 0;
}
