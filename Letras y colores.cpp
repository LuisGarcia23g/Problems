#include <iostream>

using namespace std;

int main () {


char letra;

cout << "Escriba una de estas letras: R, Y, B, W, K, C, G ";
cin >> letra; 

switch (letra){
    case 'R'| 'r': cout << "Rojo";
    break;

    case 'Y'| 'y': cout << "Amarillo";
    break;

    case 'B'| 'b': cout << "Azul";
    break;

    case 'W'| 'w': cout << "Blanco";
    break;
    
    case 'K'| 'k': cout << "Negro";
    break;
    
    case 'C'| 'c': cout << "Cian";
    break;

    case 'G'| 'g': cout << "Verde";
    break;
    
    default: cout << "Escriba una de las letras dadas";
}
    return 0;
}
