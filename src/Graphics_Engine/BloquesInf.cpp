#include <Graphics_Engine/BloquesInf.hpp>

void creaBloques(Color::Colors colorFondo, Color::Colors colorMarco){
    std::vector<MarcoTetris> bloques;
    bloques.push_back( MarcoTetris( 20,60,200,480,colorFondo, colorMarco) );
    bloques.push_back( MarcoTetris(220, 40,280, 60,colorFondo, colorMarco) );
    bloques.push_back( MarcoTetris(220,100,280,440,colorFondo, colorMarco) );
    bloques.push_back( MarcoTetris(500, 40,160,160,colorFondo, colorMarco) );
    bloques.push_back( MarcoTetris(500,240,160,160,colorFondo, colorMarco) );
    bloques.push_back( MarcoTetris(500,420,140, 80,colorFondo, colorMarco) );

    for (MarcoTetris m : bloques)
    {
        m.pinta();
        m.~MarcoTetris();
    }
    std::vector<Palabra> palabras;
    palabras.push_back(Palabra("STATISTICS",40,80,2,Color::Colors::White, colorFondo));
    palabras.push_back(Palabra("LINES-",240,60,2,Color::Colors::White, colorFondo));
    palabras.push_back(Palabra("TOP",520,60,2,Color::Colors::White, colorFondo));
    palabras.push_back(Palabra("SCORE",520,130,2,Color::Colors::White, colorFondo));
    palabras.push_back(Palabra("NEXT",550,250,2,Color::Colors::White, colorFondo));
    palabras.push_back(Palabra("LEVEL",530,450,2,Color::Colors::White, colorFondo));
    for (Palabra p : palabras)
    {
        p.pinta();
        p.~Palabra();
    }
}