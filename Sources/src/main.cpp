#include "../../Headers/include/Graphics_Engine/Letras.hpp"
#include "../../Headers/include/Graphics_Engine/Palabra.hpp"
#include "../../Headers/include/Graphics_Engine/Cuadro.hpp"
#include "../../Headers/include/Graphics_Engine/miniwin.h"

int main() {
   Palabra p = Palabra("HOLA", 15,15,5,Color::Colors::Red, Color::Colors::Black);
    p.pinta();
   return 0;
}
