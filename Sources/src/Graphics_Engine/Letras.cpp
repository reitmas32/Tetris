#include "../../../Headers/include/Graphics_Engine/Letras.hpp"

Letra::Letra(Letras letra, Color::Colors colorLetra, Color::Colors colorFondo, int tam, int pos_x, int pos_y){
    this->letra = letra;
    this->colorLetra = colorLetra;
    this->colorFondo = colorFondo;
    this->tam = tam; 
    this->pos_x = pos_x;
    this->pos_y = pos_y;
    this->setLetra();

    /*Creamos el tablero*/
    this->forma = new Cuadro*[7]; 
    for( size_t i = 0; i < 7; i++){
        this->forma[i] = new Cuadro[7]; 
    }
    printLetra();
}

Letra::Letra(char letra, Color::Colors colorLetra, Color::Colors colorFondo, int tam, int pos_x, int pos_y){
    this->letra_s = letra;
    this->colorLetra = colorLetra;
    this->colorFondo = colorFondo;
    this->tam = tam; 
    this->pos_x = pos_x;
    this->pos_y = pos_y;
    this->setLetra_s();

    /*Creamos el tablero*/
    this->forma = new Cuadro*[7]; 
    for( size_t i = 0; i < 7; i++){
        this->forma[i] = new Cuadro[7]; 
    }
}

void Letra::printLetra(){
    creaLetra();
    for(size_t i = 0; i < 7; i++){
        for(size_t j = 0; j < 7; j++){
            this->forma[i][j].pintaPosReal();
        }
    }
    miniwin::refresca();
} 

void Letra::creaLetra(){
    for(size_t i = 0; i < 7; i++){
        for(size_t j = 0; j < 7; j++){
            switch (this->mat[i][j])
            {
            case 0:
                this->forma[i][j] = Cuadro((j*tam) + this->pos_x ,(i*tam) + this->pos_y ,this->tam,this->colorFondo);
            break;
            case 1:
                this->forma[i][j] = Cuadro((j*tam) + this->pos_x ,(i*tam) + this->pos_y  ,this->tam,this->colorLetra);
            break;
            default:
                break;
            }
        }
    }
}

void Letra::setLetra(){
    switch (this->letra)
    {
    case Letras::A:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _A[i][j];
            }
        }
    break;
    case Letras::B:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _B[i][j];
            }
        }
    break;
    case Letras::C:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _C[i][j];
            }
        }
    break;
    case Letras::D:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _D[i][j];
            }
        }
    break;
    case Letras::E:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _E[i][j];
            }
        }
    break;
    case Letras::F:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _F[i][j];
            }
        }
    break;
    case Letras::G:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _G[i][j];
            }
        }
    break;
    case Letras::H:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _H[i][j];
            }
        }
    break;
    case Letras::I:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _I[i][j];
            }
        }
    break;
    case Letras::J:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _J[i][j];
            }
        }
    break;
    case Letras::K:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _K[i][j];
            }
        }
    break;
    case Letras::L:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _L[i][j];
            }
        }
    break;
    case Letras::M:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _M[i][j];
            }
        }
    break;
    case Letras::N:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _N[i][j];
            }
        }
    break;
    case Letras::O:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _O[i][j];
            }
        }
    break;
    case Letras::P:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _P[i][j];
            }
        }
    break;
    case Letras::Q:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _Q[i][j];
            }
        }
    break;
    case Letras::R:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _R[i][j];
            }
        }
    break;
    case Letras::S:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _S[i][j];
            }
        }
    break;
    case Letras::T:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _T[i][j];
            }
        }
    break;
    case Letras::U:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _U[i][j];
            }
        }
    break;
    case Letras::V:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _V[i][j];
            }
        }
    break;
    case Letras::W:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _W[i][j];
            }
        }
    break;
    case Letras::X:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _X[i][j];
            }
        }
    break;
    case Letras::Y:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _Y[i][j];
            }
        }
    break;
    case Letras::Z:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _Z[i][j];
            }
        }
    break;
    case Letras::N1:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _N1[i][j];
            }
        }
    break;
    case Letras::N2:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _N2[i][j];
            }
        }
    break;
    case Letras::N3:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _N3[i][j];
            }
        }
    break;
    case Letras::N4:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _N4[i][j];
            }
        }
    break;
    case Letras::N5:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _N5[i][j];
            }
        }
    break;
    case Letras::N6:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _N6[i][j];
            }
        }
    break;
    case Letras::N7:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _N7[i][j];
            }
        }
    break;
    case Letras::N8:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _N8[i][j];
            }
        }
    break;
    case Letras::N9:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _N9[i][j];
            }
        }
    break;
    case Letras::N0:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _N0[i][j];
            }
        }
    break;

    case Letras::ESPACIO:
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _ESPACIO[i][j];
            }
        }
    break;

    
    default:
        break;
    }
}


void Letra::setLetra_s(){
    switch (this->letra_s)
    {
    case 'A':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _A[i][j];
            }
        }
    break;
    case 'B':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _B[i][j];
            }
        }
    break;
    case 'C':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _C[i][j];
            }
        }
    break;
    case 'D':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _D[i][j];
            }
        }
    break;
    case 'E':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _E[i][j];
            }
        }
    break;
    case 'F':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _F[i][j];
            }
        }
    break;
    case 'G':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _G[i][j];
            }
        }
    break;
    case 'H':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _H[i][j];
            }
        }
    break;
    case 'I':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _I[i][j];
            }
        }
    break;
    case 'J':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _J[i][j];
            }
        }
    break;
    case 'K':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _K[i][j];
            }
        }
    break;
    case 'L':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _L[i][j];
            }
        }
    break;
    case 'M':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _M[i][j];
            }
        }
    break;
    case 'N':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _N[i][j];
            }
        }
    break;
    case 'O':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _O[i][j];
            }
        }
    break;
    case 'P':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _P[i][j];
            }
        }
    break;
    case 'Q':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _Q[i][j];
            }
        }
    break;
    case 'R':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _R[i][j];
            }
        }
    break;
    case 'S':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _S[i][j];
            }
        }
    break;
    case 'T':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _T[i][j];
            }
        }
    break;
    case 'U':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _U[i][j];
            }
        }
    break;
    case 'V':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _V[i][j];
            }
        }
    break;
    case 'W':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _W[i][j];
            }
        }
    break;
    case 'X':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _X[i][j];
            }
        }
    break;
    case 'Y':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _Y[i][j];
            }
        }
    break;
    case 'Z':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _Z[i][j];
            }
        }
    break;
    case '1':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _N1[i][j];
            }
        }
    break;
    case '2':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _N2[i][j];
            }
        }
    break;
    case '3':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _N3[i][j];
            }
        }
    break;
    case '4':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _N4[i][j];
            }
        }
    break;
    case '5':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _N5[i][j];
            }
        }
    break;
    case '6':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _N6[i][j];
            }
        }
    break;
    case '7':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _N7[i][j];
            }
        }
    break;
    case '8':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _N8[i][j];
            }
        }
    break;
    case '9':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _N9[i][j];
            }
        }
    break;
    case '0':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _N0[i][j];
            }
        }
    break;
    case ' ':
        for(size_t i = 0; i < 7; i++){
            for (size_t j = 0; j < 7; j++){
                this->mat[i][j] = _ESPACIO[i][j];
            }
        }
    break;
    
    default:
        break;
    }
}