#include <Graphics_Engine/Palabra.hpp>

Palabra::Palabra(/* args */)
{
}

Palabra::Palabra(std::string palabra, int x, int y, int tam, Color::Colors colorPalabra, Color::Colors colorFondo){
    this->palabra = palabra;
    this->pos_x = x;
    this->pos_y = y;
    this->tam = tam;
    this->colorPalabra = colorPalabra;
    this->colorFondo = colorFondo;
}

Palabra::~Palabra()
{
}

void Palabra::pinta(){
    for (size_t i = 0; i < this->palabra.size(); i++)
    {
        Letra letra = Letra(palabra[i], colorPalabra, colorFondo, tam, pos_x + (8 * tam * i), pos_y);
        letra.printLetra();
    }
    
}