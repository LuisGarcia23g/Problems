#include <iostream>
#include <cmath>
using namespace std;

int main () {


int letra, R=1, Y=2, B=3, W=4, K=5, C=6, G=7;

cout << "Escriba una de estas letras: R, Y, B, W, K, C, G ";
cin >> letra 

switch (letra){
    case 1: cout << "Rojo";
    break;

    case 2: cout << "Amarillo";
    break;

    case 3: cout << "Azul";
    break;

    case 4: cout << "Blanco";
    break;
    
    case 5: cout << "Negro";
    break;
    
    case 6: cout << "Cian";
    break;

    case 7: cout << "Verde";
    break;
    default: cout << "Escriba la letra en mayuscula";
}
    return 0;
}
