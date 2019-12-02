#ifndef COLORS_HPP
#define COLORS_HPP

/**
 * Se utilizara la estructura vector para almacenar los valores de los colores
 **/
#include <vector>
#include "miniwin.h"

static const std::vector<int> _Red                    = {255,   0,   0};
static const std::vector<int> _Blue                   = {  0,   0, 255};
static const std::vector<int> _Green                  = {  0, 255,   0};  
static const std::vector<int> _Yellow                 = {255, 255,   0};  
static const std::vector<int> _Magenta                = {255,   0, 255};  
static const std::vector<int> _Cyan                   = {  0, 255, 255};  
static const std::vector<int> _White                  = {255, 255, 255};  
static const std::vector<int> _Black                  = {  0,   0,   0};  
static const std::vector<int> _Brown                  = {101,  67,  33};  
static const std::vector<int> _Gray                   = {153, 153, 153}; 

/**
 * Namespace que almacena los colores del Motor Grafico
 **/
class Color{
    public:
        enum class Colors{
            Red,
            Blue,
            Green,
            Yellow,
            Magenta,
            Cyan,
            White,
            Black,
            Brown,
            Gray
        };        
    private:
        Colors color;
    public:

    Color(Colors color);

    void setColor();  
};

#endif  //COLORS_HPP