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

Coordenada.o:Headers/include/Graphics_Engine/Coordenada.hpp Sources/src/Graphics_Engine/Coordenada.cpp
	g++ -Wall -g -DDEBUG  -c "Sources/src/Graphics_Engine/Coordenada.cpp" -o "obj/Debug/Graphics_Engine/Coordenada.o"

#--------------main---------------------------#
main.o:Sources/src/main.cpp
	g++ -Wall -g -DDEBUG  -c "Sources/src/main.cpp" -o "obj/Debug/main.o"

#----------------Tetris----------------------#
Tetris:main.o miniwin.o Letras.o Colors.o Cuadro.o Coordenada.o Palabra.o
	g++  -o "bin/Debug/Tetris" "obj/Debug/main.o" "obj/Debug/Graphics_Engine/miniwin.o" "obj/Debug/Graphics_Engine/Letras.o" "obj/Debug/Graphics_Engine/Colors.o" "obj/Debug/Graphics_Engine/Cuadro.o" "obj/Debug/Graphics_Engine/Coordenada.o" "obj/Debug/Graphics_Engine/Palabra.o" -pthread -lX11
