#include "../../Headers/include/Graphics_Engine/Letras.hpp"
#include "../../Headers/include/Graphics_Engine/Palabra.hpp"
#include "../../Headers/include/Graphics_Engine/Cuadro.hpp"
#include "../../Headers/include/Graphics_Engine/CuadroBordes.hpp"
#include "../../Headers/include/Graphics_Engine/miniwin.h"
#include "../../Headers/include/Graphics_Engine/Fondo.hpp"
#include "../../Headers/include/Graphics_Engine/MarcoTetris.hpp"
#include "../../Headers/include/Graphics_Engine/BloquesInf.hpp"
#include "../../Headers/include/Graphics_Engine/Tablero.hpp"

/*
   miniwin::vredimensiona(720,560);
   pintaFondo(Color::Colors::GrayDark,Color::Colors::CyanDark);
   creaBloques(Color::Colors::Black, Color::Colors::CyanDark);
*/

using namespace miniwin;

int main() {   
   srand(time(0));
   miniwin::vredimensiona(720,560);
   pintaFondo(Color::Colors::GrayDark,Color::Colors::CyanDark);
   creaBloques(Color::Colors::Black, Color::Colors::CyanDark);
   Tablero t = Tablero(Color::Colors::Black, Level::One);
   t.vacia();
   t.pinta();
   t.pintaPiezas();

   Pieza p = Pieza(t.level);
   Pieza sig = Pieza(t.level);
   int time = 0;
   int Tecla = miniwin::tecla();
   while (Tecla != miniwin::ESCAPE)
   {
      Pieza p_copia = p;
      int x = p.orig.get_x();
      int y = p.orig.get_y();
      if(time > 30){
         time = 0;
         Tecla = miniwin::ABAJO;
      }
      if(Tecla == miniwin::ARRIBA){
         p.rota();
      }else if(Tecla == miniwin::ABAJO){
         p.orig.set_y(p.orig.get_y() + 1);
      }else if(Tecla == miniwin::IZQUIERDA){
         p.orig.set_x(p.orig.get_x() - 1);
      }else if(Tecla == miniwin::DERECHA){
         p.orig.set_x(p.orig.get_x() + 1);
      }
      
      if(t.colision(p)){
         p = p_copia;
         if(Tecla == miniwin::ABAJO){
            t.incrustaPieza(p);
            t.cuentaLineas();
            p = sig;
            sig = Pieza(t.level);
         }
      }
      if(Tecla != miniwin::NINGUNA){
         t.pinta();
         p.pinta();
         t.pintaSig(sig);
         refresca();
      }
      miniwin::espera(30);
      time++;
      Tecla = miniwin::tecla();
   }
   
   miniwin::refresca();
   miniwin::vcierra();
   return 0;
}
