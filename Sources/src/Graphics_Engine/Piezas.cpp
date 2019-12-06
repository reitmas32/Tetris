#include "../../../Headers/include/Graphics_Engine/Piezas.hpp"

Coordenada perifs[7][3]{
    {Coordenada( 1,0 ), Coordenada( 0,1 ), Coordenada( 1,1 )}, //Cuadrado
    {Coordenada( 1,0 ), Coordenada(-1,1 ), Coordenada( 0,1 )}, //S
    {Coordenada( 0,1 ), Coordenada( 1,1 ), Coordenada(-1,0 )}, //2
    {Coordenada( 0,1 ), Coordenada( 0,-1), Coordenada( 1,1 )}, //L
    {Coordenada( 0,1 ), Coordenada( 0,-1), Coordenada(-1,1 )}, //J
    {Coordenada( 0,1 ), Coordenada( 0,-1), Coordenada( 0,2 )}, //I
    {Coordenada(-1,0 ), Coordenada( 1, 0), Coordenada( 0,1 )}  //T
};

void cuadrado(int x, int y, Color::Colors color, Color::Colors  colorDecora){
    CuadroTetris c = CuadroTetris( x * TAM + MARGEN_DER, y * TAM + MARGEN_SUP, TAM, color, colorDecora);
    c.pintaPosReal(true);
    c.~CuadroTetris();
}

void cuadradoSinReflejo(int x, int y, Color::Colors color, Color::Colors  colorDecora){
    CuadroTetris c = CuadroTetris( x * TAM + MARGEN_DER, y * TAM + MARGEN_SUP, TAM, color, colorDecora);
    c.pintaPosReal(false);
    c.~CuadroTetris();
}
void pieza_s1(int x, int y,Color::Colors color,Color::Colors colorDecora){
    cuadrado(x + 0,y + 0, color,colorDecora);
    cuadrado(x + 1,y + 0, color,colorDecora);
    cuadrado(x + 1,y + 1, color,colorDecora);
    cuadrado(x + 2,y + 1, color,colorDecora);
}

void pintaTablero(){
    miniwin::color(miniwin::NEGRO);
    miniwin::rectangulo_lleno(230,110,450,470);
}

Pieza::Pieza(){
    int r = 1 + rand() % 7;
    for (size_t i = 0; i < 3; i++)
    {
        this->perif[i] = Coordenada(perifs[r][i].get_x(),perifs[r][i].get_y() );
    }
    this->orig = Coordenada(6,1);
    this->color = Color::Colors::Blue;
    this->colorDecora = Color::Colors::Blue;
}

Pieza::Pieza(Level level){
    int r = rand() % 7;
    for (size_t i = 0; i < 3; i++)
    {
        this->perif[i] = Coordenada(perifs[r][i].get_x(),perifs[r][i].get_y() );
    }
    this->orig = Coordenada(6,1);
    switch (level)
    {
    case Level::One:
        this->color = LevelOne[r][0];
        this->colorDecora = LevelOne[r][1];
        break;
    
    default:
        break;
    }
}

Pieza::Pieza(int orig_x, int orig_y, Color::Colors color, Color::Colors colorDecora){
    this->orig = Coordenada(orig_x, orig_y);
    this->color = color;
    this->colorDecora = colorDecora;
}

void Pieza::pinta(){
    for(int i = 0; i < 4; i++){
        Coordenada c = this->posicion(i);
        cuadrado(c.get_x(),
                 c.get_y(), 
                 this->color, 
                 this->colorDecora);        
    }

}

void Pieza::rota(){
    for (int i = 0; i < 3; i++)
        this->perif[i].rota();
    
}

Coordenada Pieza::posicion(int n){
    Coordenada ret;
    if( n == 0){
        ret.set_x(this->orig.get_x());
        ret.set_y(this->orig.get_y());
    }else{
        ret.set_x(this->orig.get_x() + this->perif[n - 1].get_x());
        ret.set_y(this->orig.get_y() + this->perif[n - 1].get_y());
    }
    return ret;
}