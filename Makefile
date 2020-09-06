#---------------Graphics_Engine---------------#
miniwin.o:include/Graphics_Engine/miniwin.h src/Graphics_Engine/miniwin.cpp
	g++ -Wall -g -DDEBUG  -c "src/Graphics_Engine/miniwin.cpp" -o "obj/Graphics_Engine/miniwin.o" -Iinclude

Letras.o:include/Graphics_Engine/Letras.hpp src/Graphics_Engine/Letras.cpp
	g++ -Wall -g -DDEBUG  -c "src/Graphics_Engine/Letras.cpp" -o "obj/Graphics_Engine/Letras.o" -Iinclude

Palabra.o:include/Graphics_Engine/Palabra.hpp src/Graphics_Engine/Palabra.cpp
	g++ -Wall -g -DDEBUG  -c "src/Graphics_Engine/Palabra.cpp" -o "obj/Graphics_Engine/Palabra.o" -Iinclude

Colors.o:include/Graphics_Engine/Colors.hpp src/Graphics_Engine/Colors.cpp
	g++ -Wall -g -DDEBUG  -c "src/Graphics_Engine/Colors.cpp" -o "obj/Graphics_Engine/Colors.o" -Iinclude

Cuadro.o:include/Graphics_Engine/Cuadro.hpp src/Graphics_Engine/Cuadro.cpp
	g++ -Wall -g -DDEBUG  -c "src/Graphics_Engine/Cuadro.cpp" -o "obj/Graphics_Engine/Cuadro.o" -Iinclude

CuadroBordes.o:include/Graphics_Engine/CuadroBordes.hpp src/Graphics_Engine/CuadroBordes.cpp
	g++ -Wall -g -DDEBUG  -c "src/Graphics_Engine/CuadroBordes.cpp" -o "obj/Graphics_Engine/CuadroBordes.o" -Iinclude

CuadroTetris.o:include/Graphics_Engine/CuadroTetris.hpp src/Graphics_Engine/CuadroTetris.cpp
	g++ -Wall -g -DDEBUG  -c "src/Graphics_Engine/CuadroTetris.cpp" -o "obj/Graphics_Engine/CuadroTetris.o" -Iinclude

Marco.o:include/Graphics_Engine/Marco.hpp src/Graphics_Engine/Marco.cpp
	g++ -Wall -g -DDEBUG  -c "src/Graphics_Engine/Marco.cpp" -o "obj/Graphics_Engine/Marco.o" -Iinclude

MarcoTetris.o:include/Graphics_Engine/MarcoTetris.hpp src/Graphics_Engine/MarcoTetris.cpp
	g++ -Wall -g -DDEBUG  -c "src/Graphics_Engine/MarcoTetris.cpp" -o "obj/Graphics_Engine/MarcoTetris.o" -Iinclude

BloquesInf.o:include/Graphics_Engine/BloquesInf.hpp src/Graphics_Engine/BloquesInf.cpp
	g++ -Wall -g -DDEBUG  -c "src/Graphics_Engine/BloquesInf.cpp" -o "obj/Graphics_Engine/BloquesInf.o" -Iinclude

Fondo.o:include/Graphics_Engine/Fondo.hpp src/Graphics_Engine/Fondo.cpp
	g++ -Wall -g -DDEBUG  -c "src/Graphics_Engine/Fondo.cpp" -o "obj/Graphics_Engine/Fondo.o" -Iinclude

Coordenada.o:include/Graphics_Engine/Coordenada.hpp src/Graphics_Engine/Coordenada.cpp
	g++ -Wall -g -DDEBUG  -c "src/Graphics_Engine/Coordenada.cpp" -o "obj/Graphics_Engine/Coordenada.o" -Iinclude

Piezas.o:include/Graphics_Engine/Piezas.hpp src/Graphics_Engine/Piezas.cpp
	g++ -Wall -g -DDEBUG  -c "src/Graphics_Engine/Piezas.cpp" -o "obj/Graphics_Engine/Piezas.o" -Iinclude

Tablero.o:include/Graphics_Engine/Tablero.hpp src/Graphics_Engine/Tablero.cpp
	g++ -Wall -g -DDEBUG  -c "src/Graphics_Engine/Tablero.cpp" -o "obj/Graphics_Engine/Tablero.o" -Iinclude

#--------------main---------------------------#
main.o:src/main.cpp
	g++ -Wall -g -DDEBUG  -c "src/main.cpp" -o "obj/main.o" -Iinclude

#----------------Tetris----------------------#
Tetris:main.o miniwin.o Letras.o Colors.o Cuadro.o Coordenada.o Palabra.o CuadroBordes.o Fondo.o Marco.o MarcoTetris.o BloquesInf.o CuadroTetris.o Piezas.o Tablero.o
	g++  -o "bin/Tetris" "obj/main.o" "obj/Graphics_Engine/miniwin.o" "obj/Graphics_Engine/Letras.o" "obj/Graphics_Engine/Colors.o" "obj/Graphics_Engine/Cuadro.o" "obj/Graphics_Engine/Coordenada.o" "obj/Graphics_Engine/Palabra.o" "obj/Graphics_Engine/CuadroBordes.o" "obj/Graphics_Engine/Fondo.o" "obj/Graphics_Engine/Marco.o" "obj/Graphics_Engine/MarcoTetris.o" "obj/Graphics_Engine/BloquesInf.o" "obj/Graphics_Engine/CuadroTetris.o" "obj/Graphics_Engine/Piezas.o" "obj/Graphics_Engine/Tablero.o" -pthread -lX11
