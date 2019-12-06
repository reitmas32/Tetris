#---------------Graphics_Engine---------------#
miniwin.o:Headers/include/Graphics_Engine/miniwin.h Sources/src/Graphics_Engine/miniwin.cpp
	g++ -Wall -g -DDEBUG  -c "Sources/src/Graphics_Engine/miniwin.cpp" -o "obj/Debug/Graphics_Engine/miniwin.o"

Letras.o:Headers/include/Graphics_Engine/Letras.hpp Sources/src/Graphics_Engine/Letras.cpp
	g++ -Wall -g -DDEBUG  -c "Sources/src/Graphics_Engine/Letras.cpp" -o "obj/Debug/Graphics_Engine/Letras.o"

Palabra.o:Headers/include/Graphics_Engine/Palabra.hpp Sources/src/Graphics_Engine/Palabra.cpp
	g++ -Wall -g -DDEBUG  -c "Sources/src/Graphics_Engine/Palabra.cpp" -o "obj/Debug/Graphics_Engine/Palabra.o"

Colors.o:Headers/include/Graphics_Engine/Colors.hpp Sources/src/Graphics_Engine/Colors.cpp
	g++ -Wall -g -DDEBUG  -c "Sources/src/Graphics_Engine/Colors.cpp" -o "obj/Debug/Graphics_Engine/Colors.o"

Cuadro.o:Headers/include/Graphics_Engine/Cuadro.hpp Sources/src/Graphics_Engine/Cuadro.cpp
	g++ -Wall -g -DDEBUG  -c "Sources/src/Graphics_Engine/Cuadro.cpp" -o "obj/Debug/Graphics_Engine/Cuadro.o"

CuadroBordes.o:Headers/include/Graphics_Engine/CuadroBordes.hpp Sources/src/Graphics_Engine/CuadroBordes.cpp
	g++ -Wall -g -DDEBUG  -c "Sources/src/Graphics_Engine/CuadroBordes.cpp" -o "obj/Debug/Graphics_Engine/CuadroBordes.o"

CuadroTetris.o:Headers/include/Graphics_Engine/CuadroTetris.hpp Sources/src/Graphics_Engine/CuadroTetris.cpp
	g++ -Wall -g -DDEBUG  -c "Sources/src/Graphics_Engine/CuadroTetris.cpp" -o "obj/Debug/Graphics_Engine/CuadroTetris.o"

Marco.o:Headers/include/Graphics_Engine/Marco.hpp Sources/src/Graphics_Engine/Marco.cpp
	g++ -Wall -g -DDEBUG  -c "Sources/src/Graphics_Engine/Marco.cpp" -o "obj/Debug/Graphics_Engine/Marco.o"

MarcoTetris.o:Headers/include/Graphics_Engine/MarcoTetris.hpp Sources/src/Graphics_Engine/MarcoTetris.cpp
	g++ -Wall -g -DDEBUG  -c "Sources/src/Graphics_Engine/MarcoTetris.cpp" -o "obj/Debug/Graphics_Engine/MarcoTetris.o"

BloquesInf.o:Headers/include/Graphics_Engine/BloquesInf.hpp Sources/src/Graphics_Engine/BloquesInf.cpp
	g++ -Wall -g -DDEBUG  -c "Sources/src/Graphics_Engine/BloquesInf.cpp" -o "obj/Debug/Graphics_Engine/BloquesInf.o"

Fondo.o:Headers/include/Graphics_Engine/Fondo.hpp Sources/src/Graphics_Engine/Fondo.cpp
	g++ -Wall -g -DDEBUG  -c "Sources/src/Graphics_Engine/Fondo.cpp" -o "obj/Debug/Graphics_Engine/Fondo.o"

Coordenada.o:Headers/include/Graphics_Engine/Coordenada.hpp Sources/src/Graphics_Engine/Coordenada.cpp
	g++ -Wall -g -DDEBUG  -c "Sources/src/Graphics_Engine/Coordenada.cpp" -o "obj/Debug/Graphics_Engine/Coordenada.o"

Piezas.o:Headers/include/Graphics_Engine/Piezas.hpp Sources/src/Graphics_Engine/Piezas.cpp
	g++ -Wall -g -DDEBUG  -c "Sources/src/Graphics_Engine/Piezas.cpp" -o "obj/Debug/Graphics_Engine/Piezas.o"

Tablero.o:Headers/include/Graphics_Engine/Tablero.hpp Sources/src/Graphics_Engine/Tablero.cpp
	g++ -Wall -g -DDEBUG  -c "Sources/src/Graphics_Engine/Tablero.cpp" -o "obj/Debug/Graphics_Engine/Tablero.o"

#--------------main---------------------------#
main.o:Sources/src/main.cpp
	g++ -Wall -g -DDEBUG  -c "Sources/src/main.cpp" -o "obj/Debug/main.o"

#----------------Tetris----------------------#
Tetris:main.o miniwin.o Letras.o Colors.o Cuadro.o Coordenada.o Palabra.o CuadroBordes.o Fondo.o Marco.o MarcoTetris.o BloquesInf.o CuadroTetris.o Piezas.o Tablero.o
	g++  -o "bin/Debug/Tetris" "obj/Debug/main.o" "obj/Debug/Graphics_Engine/miniwin.o" "obj/Debug/Graphics_Engine/Letras.o" "obj/Debug/Graphics_Engine/Colors.o" "obj/Debug/Graphics_Engine/Cuadro.o" "obj/Debug/Graphics_Engine/Coordenada.o" "obj/Debug/Graphics_Engine/Palabra.o" "obj/Debug/Graphics_Engine/CuadroBordes.o" "obj/Debug/Graphics_Engine/Fondo.o" "obj/Debug/Graphics_Engine/Marco.o" "obj/Debug/Graphics_Engine/MarcoTetris.o" "obj/Debug/Graphics_Engine/BloquesInf.o" "obj/Debug/Graphics_Engine/CuadroTetris.o" "obj/Debug/Graphics_Engine/Piezas.o" "obj/Debug/Graphics_Engine/Tablero.o" -pthread -lX11
