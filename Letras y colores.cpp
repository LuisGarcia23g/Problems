#include <iostream>

using namespace std;

int main () {


char letra;

cout << "Escriba una de estas letras: R, Y, B, W, K, C, G ";
cin >> letra 

switch (letra){
    case 'R': cout << "Rojo";
    break;

    case 'Y': cout << "Amarillo";
    break;

    case 'B': cout << "Azul";
    break;

    case 'W': cout << "Blanco";
    break;
    
    case 'K': cout << "Negro";
    break;
    
    case 'C': cout << "Cian";
    break;

    case 'G': cout << "Verde";
    break;
    
    default: cout << "Escriba la letra en mayuscula";
}
    return 0;
}
