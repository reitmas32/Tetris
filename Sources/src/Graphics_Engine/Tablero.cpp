#include "../../../Headers/include/Graphics_Engine/Tablero.hpp"

Coordenada perifst[7][3]{
    {Coordenada( 1,0 ), Coordenada( 0,1 ), Coordenada( 1,1 )}, //Cuadrado
    {Coordenada( 1,0 ), Coordenada(-1,1 ), Coordenada( 0,1 )}, //S
    {Coordenada( 0,1 ), Coordenada( 1,1 ), Coordenada(-1,0 )}, //2
    {Coordenada( 0,1 ), Coordenada( 0,-1), Coordenada( 1,1 )}, //L
    {Coordenada( 0,1 ), Coordenada( 0,-1), Coordenada(-1,1 )}, //J
    {Coordenada( 0,1 ), Coordenada( 0,-1), Coordenada( 0,2 )}, //I
    {Coordenada(-1,0 ), Coordenada( 1, 0), Coordenada( 0,1 )}  //T
};

static std::string intToString(int num){
    std::stringstream sout;
    sout << num;
    return sout.str();
}

static std::string addZero(int num, int length){
    std::string num_s = intToString(num);
    std::string strnum = "";
    for (size_t i = 0; i < length - num_s.size(); i++)
    {
        strnum.append("0");
    }
    return strnum + num_s;
}

Tablero::Tablero(/* args */)
{
}

Tablero::Tablero(Color::Colors colorFondo, Level level){
    this->colorFondo = colorFondo;
    this->level = level;
    this->puntos = 0;
}

Tablero::~Tablero()
{
}

void Tablero::setColor(){
    if(this->level == Level::One){
        this->colorFondo = Color::Colors::Black;
    }
}

void Tablero::vacia(){
    for (size_t i = 0; i < COLUMNAS; i++)
    {
        for (size_t j = 0; j < FILAS; j++)
        {
            this->tablero[i][j] = this->colorFondo;
            this->tableroDecora[i][j] = this->colorFondo;
        }
        
    }
    
}

void Tablero::pinta(){
    for (size_t i = 0; i < COLUMNAS; i++)
    {
        for (size_t j = 0; j < FILAS; j++)
        {
            if(this->tablero[i][j] == this->colorFondo && this->tableroDecora[i][j] == this->colorFondo){
                cuadradoSinReflejo(i,j ,this->colorFondo, this->colorFondo);
            }
            else{
                cuadrado(i,j ,this->tablero[i][j], this->tableroDecora[i][j]);
            }
            
        }
        
    }
    Color(Color::Colors::CyanDark);
    miniwin::rectangulo(MARGEN_DER, MARGEN_SUP, MARGEN_DER + COLUMNAS * TAM, MARGEN_SUP + FILAS * TAM);
    Palabra p = Palabra(addZero(this->puntos, 8),550,150, 1, Color::Colors::White, this->colorFondo);
    p.pinta();
}

void Tablero::incrustaPieza(Pieza pieza){
    for (size_t i = 0; i < 4; i++)
    {
        Coordenada c = pieza.posicion(i); 
        this->tablero[c.get_x()][c.get_y()] = pieza.color;
        this->tableroDecora[c.get_x()][c.get_y()] = pieza.colorDecora;
    }
    
}

bool Tablero::colision(Pieza pieza){
    for(int i = 0; i < 4; i++){
        Coordenada c = pieza.posicion(i);

        if(c.get_x() < 0 || c.get_x() >= COLUMNAS){
            return true;
        }

        if(c.get_y() < 0 || c.get_y() >= FILAS){
            return true;
        }

        if(this->tablero[c.get_x()][c.get_y()] != this->colorFondo){
            return true;
        }
    }
    return false;
}


bool Tablero::fila_llena(int fila){
    for (size_t i = 0; i < COLUMNAS; i++)
    {
        if(this->tablero[i][fila] == this->colorFondo && this->tableroDecora[i][fila] == this->colorFondo)
            return false;
    }
    return true;
}

void Tablero::colapsa(int fila){
    for (int j = fila; j > 0; j--)
    {
        for (int i = 0; i < COLUMNAS; i++)
        {
            this->tablero[i][j] = tablero[i][j - 1];
            this->tableroDecora[i][j] = tableroDecora[i][j - 1];
        }
        
    }
    for (int i = 0; i < COLUMNAS; i++)
    {
        this->tablero[i][0] = this->colorFondo;
        this->tableroDecora[i][0] = this->colorFondo;
    }
    
}

void Tablero::cuentaLineas(){
    int fila = FILAS - 1;
    int lineas = 0;
    while (fila >= 0)
    {
        if(this->fila_llena(fila)){
            this->colapsa(fila);
            lineas++;
        }else{
            fila--;
        }
    }
    this->puntos += lineas * lineas * 100;
}

void Tablero::pintaSig(Pieza sig){
    Color(this->colorFondo);
    miniwin::rectangulo_lleno(26 * TAM, 13 * TAM + 10, 30 * TAM, 19 * TAM);
    sig.orig.set_x(16);
    sig.orig.set_y(9);
    sig.pinta();
}

void Tablero::pintaPiezas(){
    for (size_t i = 0; i < 7; i++)
    {
        Pieza p = Pieza(-8, i * 3, LevelOne[i][0], LevelOne[i][1]);
        for (size_t j = 0; j < 3; j++)
        {
            p.perif[j] = perifst[i][j];
        }
        if( i >= 3 && i <= 5){
            p.rota();
        }
        if( i == 4 ){
            p.orig.set_y(p.orig.get_y() + 1);
        }
        p.pinta();
    }
    
}