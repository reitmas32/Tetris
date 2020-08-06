#ifndef COORDENADAS_HPP
#define COORDENADAS_HPP

class Coordenada
{
private:
    int x;
    int y;
public:
    Coordenada(/* args */);
    Coordenada(int x, int y);
    ~Coordenada();
    int get_x();
    int get_y();
    void set_x(int x);
    void set_y(int y);
    void rota();
};

#endif  //COORDENADAS_HPP