#include "../../Headers/include/Graphics_Engine/Letras.hpp"
#include "../../Headers/include/Graphics_Engine/Palabra.hpp"
#include "../../Headers/include/Graphics_Engine/Cuadro.hpp"
#include "../../Headers/include/Graphics_Engine/miniwin.h"

int main() {
   miniwin::vredimensiona(700,300);
   Palabra p = Palabra("HOLA", 15,15,1,Color::Colors::Blue, Color::Colors::Black);
   p.pinta();
   return 0;
}