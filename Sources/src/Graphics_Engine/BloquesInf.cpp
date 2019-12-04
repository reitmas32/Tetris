#include "../../../Headers/include/Graphics_Engine/BloquesInf.hpp"

void creaBloques(Color::Colors colorFondo, Color::Colors colorMarco){
    std::vector<MarcoTetris> bloques;
    bloques.push_back( MarcoTetris( 40, 60,160, 60,colorFondo, colorMarco) );
    bloques.push_back( MarcoTetris( 20,160,200,320,colorFondo, colorMarco) );
    bloques.push_back( MarcoTetris(220, 40,240, 60,colorFondo, colorMarco) );
    bloques.push_back( MarcoTetris(220,100,240,380,colorFondo, colorMarco) );
    bloques.push_back( MarcoTetris(460, 40,160,160,colorFondo, colorMarco) );
    bloques.push_back( MarcoTetris(460,240,120,120,colorFondo, colorMarco) );
    bloques.push_back( MarcoTetris(460,380,140, 80,colorFondo, colorMarco) );

    for (MarcoTetris m : bloques)
    {
        m.pinta();
        m.~MarcoTetris();
    }
    std::vector<Palabra> palabras;
    palabras.push_back(Palabra("B-TYPE",50,80,3,Color::Colors::White, colorFondo));
    palabras.push_back(Palabra("STATISTICS",40,180,2,Color::Colors::White, colorFondo));
    palabras.push_back(Palabra("LINES-",240,60,2,Color::Colors::White, colorFondo));
    palabras.push_back(Palabra("TOP",480,60,2,Color::Colors::White, colorFondo));
    palabras.push_back(Palabra("SCORE",480,130,2,Color::Colors::White, colorFondo));
    palabras.push_back(Palabra("NEXT",490,250,2,Color::Colors::White, colorFondo));
    palabras.push_back(Palabra("LEVEL",490,390,2,Color::Colors::White, colorFondo));
    for (Palabra p : palabras)
    {
        p.pinta();
        p.~Palabra();
    }
}