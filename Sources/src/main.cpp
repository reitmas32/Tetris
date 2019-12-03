#include "../../Headers/include/Graphics_Engine/Letras.hpp"
#include "../../Headers/include/Graphics_Engine/Palabra.hpp"
#include "../../Headers/include/Graphics_Engine/Cuadro.hpp"
#include "../../Headers/include/Graphics_Engine/CuadroBordes.hpp"
#include "../../Headers/include/Graphics_Engine/miniwin.h"
#include "../../Headers/include/Graphics_Engine/Fondo.hpp"

int main() {
   miniwin::vredimensiona(720,560);
   pintaFondo(Color::Colors::Black, Color::Colors::CyanDark);
   miniwin::refresca();
   return 0;
}
