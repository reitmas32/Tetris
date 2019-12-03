#include "../../../Headers/include/Graphics_Engine/Fondo.hpp"

void pintaCuadro(int x, int y, int tam, Color::Colors color,Color::Colors colorFondo,int b_sup, int b_inf, int b_rigth, int b_left){
    CuadroBordes c = CuadroBordes(x,y,tam,color,colorFondo,b_sup,b_inf,b_rigth,b_left);
    c.pintaPosReal();
    Color(Color::Colors::Black);
    miniwin::linea(x,y,x+tam,y);
    miniwin::linea(x,y,x,y+tam);
}

void pintaS(int x, int y, int tam, Color::Colors color,Color::Colors colorFondo,int b_sup, int b_inf, int b_rigth, int b_left){
    std::vector<CuadroBordes> listaCuadros;
    listaCuadros.push_back(CuadroBordes(x + tam*0,y + tam*1,tam,color,colorFondo,b_sup,0,b_rigth,0));
    listaCuadros.push_back(CuadroBordes(x + tam*1,y + tam*1,tam,color,colorFondo,0,0,0,0));
    listaCuadros.push_back(CuadroBordes(x + tam*1,y + tam*0,tam,color,colorFondo,b_sup,0,b_rigth,0));
    listaCuadros.push_back(CuadroBordes(x + tam*2,y + tam*0,tam,color,colorFondo,b_sup,0,0,0));

    for( CuadroBordes c : listaCuadros){
        c.pintaPosReal();
    }
    //Color(color);
    miniwin::rectangulo(x + tam*1,y + tam*1,x + tam*1 + 1, y + tam*1 + 1);
    Color(Color::Colors::Black);
    miniwin::linea(x,y + tam*1,x,y + tam*2);
    miniwin::linea(x,y + tam*1,x + tam*1,y + tam*1);
    miniwin::linea(x + tam*1,y + tam*0,x + tam*1,y + tam*1);
    miniwin::linea(x + tam*1,y + tam*0,x + tam*3,y + tam*0);
}

void pintaI(int x, int y, int tam, Color::Colors color,Color::Colors colorFondo,int b_sup, int b_inf, int b_rigth, int b_left){
    std::vector<CuadroBordes> listaCuadros;
    listaCuadros.push_back(CuadroBordes(x,y + tam*0,tam,color,colorFondo,b_sup,0,b_rigth,0));
    listaCuadros.push_back(CuadroBordes(x,y + tam*1,tam,color,colorFondo,0,0,b_rigth,0));
    listaCuadros.push_back(CuadroBordes(x,y + tam*2,tam,color,colorFondo,0,0,b_rigth,0));
    listaCuadros.push_back(CuadroBordes(x,y + tam*3,tam,color,colorFondo,0,0,b_rigth,0));

    for( CuadroBordes c : listaCuadros){
        c.pintaPosReal();
    }
    Color(Color::Colors::Black);
    miniwin::linea(x,y,x+tam,y);
    miniwin::linea(x,y,x,y+tam*4);
}

void pintaZ(int x, int y, int tam, Color::Colors color,Color::Colors colorFondo,int b_sup, int b_inf, int b_rigth, int b_left){
    std::vector<CuadroBordes> listaCuadros;
    listaCuadros.push_back(CuadroBordes(x + tam*0,y + tam*0,tam,color,colorFondo,b_sup,0,b_rigth,0));
    listaCuadros.push_back(CuadroBordes(x + tam*1,y + tam*0,tam,color,colorFondo,b_sup,0,0,0));
    listaCuadros.push_back(CuadroBordes(x + tam*1,y + tam*1,tam,color,colorFondo,0,0,b_rigth,0));
    listaCuadros.push_back(CuadroBordes(x + tam*2,y + tam*1,tam,color,colorFondo,b_sup,0,0,0));

    for( CuadroBordes c : listaCuadros){
        c.pintaPosReal();
    }
    Color(Color::Colors::Black);
    miniwin::linea(x + tam*0,y + tam*0,x + tam*2,y + tam*0);
    miniwin::linea(x + tam*0,y + tam*0,x + tam*0,y + tam*1);
    miniwin::linea(x + tam*1,y + tam*1,x + tam*1,y + tam*2);
    miniwin::linea(x + tam*2,y + tam*1,x + tam*3,y + tam*1);
}

void pintaT(int x, int y, int tam, Color::Colors color,Color::Colors colorFondo,int b_sup, int b_inf, int b_rigth, int b_left){
    std::vector<CuadroBordes> listaCuadros;
    listaCuadros.push_back(CuadroBordes(x + tam*0,y + tam*0,tam,color,colorFondo,b_sup,0,b_rigth,0));
    listaCuadros.push_back(CuadroBordes(x + tam*1,y + tam*0,tam,color,colorFondo,b_sup,0,0,0));
    listaCuadros.push_back(CuadroBordes(x + tam*1,y + tam*1,tam,color,colorFondo,0,0,b_rigth,0));
    listaCuadros.push_back(CuadroBordes(x + tam*2,y + tam*0,tam,color,colorFondo,b_sup,0,0,0));

    for( CuadroBordes c : listaCuadros){
        c.pintaPosReal();
    }
    Color(Color::Colors::Black);
    miniwin::linea(x + tam*0,y + tam*0,x + tam*3,y + tam*0);
    miniwin::linea(x + tam*0,y + tam*0,x + tam*0,y + tam*1);
    miniwin::linea(x + tam*1,y + tam*1,x + tam*1,y + tam*2);
    miniwin::linea(x + tam*2,y + tam*1,x + tam*3,y + tam*1);
}

void pintaL(int x, int y, int tam, Color::Colors color,Color::Colors colorFondo,int b_sup, int b_inf, int b_rigth, int b_left){
    std::vector<CuadroBordes> listaCuadros;
    listaCuadros.push_back(CuadroBordes(x + tam*0,y + tam*0,tam,color,colorFondo,b_sup,0,b_rigth,0));
    listaCuadros.push_back(CuadroBordes(x + tam*0,y + tam*1,tam,color,colorFondo,0,0,b_rigth,0));
    listaCuadros.push_back(CuadroBordes(x + tam*0,y + tam*2,tam,color,colorFondo,0,0,b_rigth,0));
    listaCuadros.push_back(CuadroBordes(x + tam*1,y + tam*2,tam,color,colorFondo,b_sup,0,0,0));

    for( CuadroBordes c : listaCuadros){
        c.pintaPosReal();
    }
    Color(Color::Colors::Black);
    miniwin::linea(x,y,x+tam,y);
    miniwin::linea(x,y,x,y+tam*3);
    miniwin::linea(x + tam*1, y + tam*2,x + tam*2, y +tam*2);
}

void pintaJ(int x, int y, int tam, Color::Colors color,Color::Colors colorFondo,int b_sup, int b_inf, int b_rigth, int b_left){
    std::vector<CuadroBordes> listaCuadros;
    listaCuadros.push_back(CuadroBordes(x + tam*1,y + tam*0,tam,color,colorFondo,b_sup,0,b_rigth,0));
    listaCuadros.push_back(CuadroBordes(x + tam*1,y + tam*1,tam,color,colorFondo,0,0,b_rigth,0));
    listaCuadros.push_back(CuadroBordes(x + tam*1,y + tam*2,tam,color,colorFondo,0,0,0,0));
    listaCuadros.push_back(CuadroBordes(x + tam*0,y + tam*2,tam,color,colorFondo,b_sup,0,b_rigth,0));

    for( CuadroBordes c : listaCuadros){
        c.pintaPosReal();
    }
    //Color(color);
    miniwin::rectangulo(x + tam*1,y + tam*2,x + tam*1 + 1, y + tam*2 + 1);
    Color(Color::Colors::Black);
    miniwin::linea(x + tam*1,y,x+tam*2,y);
    miniwin::linea(x + tam*1,y,x + tam*1,y+tam*2);
    miniwin::linea(x + tam*0, y + tam*2,x + tam*1, y +tam*2);
    miniwin::linea(x + tam*0, y + tam*2,x + tam*0, y +tam*3);
}

void pintaFondoBloque(int x, int y,  Color::Colors color, Color::Colors colorFondo){
    pintaCuadro(x, y, 40, color, colorFondo, 2,0,2,0);
    pintaT(x + 20*2, y, 20, color, colorFondo, 2,2,2,2);
    pintaL(x + 20*0, y + 20*2, 20, color, colorFondo, 2,2,2,2);
    pintaJ(x + 20*1, y + 20*1, 20, color, colorFondo, 2,2,2,2);
    pintaS(x + 20*2, y + 20*3, 20, color, colorFondo, 2,2,2,2);
    pintaS(x + 20*3, y + 20*1, 20, color, colorFondo, 2,2,2,2);
    pintaZ(x + 20*5, y + 20*0, 20, color, colorFondo, 2,2,2,2);
    pintaI(x + 20*5, y + 20*1, 20, color, colorFondo, 2,2,2,2);
    pintaCuadro(x + 20*6, y + 20*2, 40, color, colorFondo, 2,0,2,0);
    pintaJ(x + 20*6, y + 20*2, 20, color, colorFondo, 2,2,2,2);
    pintaCuadro(x + 20*1, y + 20*2, 20, color, colorFondo, 2,0,2,0);
    pintaCuadro(x + 20*7, y + 20*0, 20, color, colorFondo, 2,0,2,0);
    pintaCuadro(x + 20*4, y + 20*4, 20, color, colorFondo, 2,0,2,0);
}

void pintaFondo(Color::Colors color, Color::Colors colorFondo){
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 6; j++)
        {
            pintaFondoBloque(i*160,j*100,color,colorFondo);
        }
        
    }
    
}