#include <iostream>
#include <cmath>
using namespace std;

int main () {


int letra, R=1, Y=2, B=3, W=4, K=5, C=6, G=7;

cout << "Escriba una de estas letras: R, Y, B, W, K, C, G ";
cin >> letra;

if (letra == R == 1)

switch (letra){
    case 1: cout << "Rojo";
    break;
    }
else if (letra == Y == 2)

switch (letra){
    case 2: cout << "Amarillo";
    break;
    }

else if (letra == B == 3)

switch (letra){
    case 3: cout << "Azul";
    break;
    }

else if (letra == W == 4)

switch (letra){
    case 4: cout << "Blanco";
    break;
    }

else if (letra == K == 5)

switch (letra){
    case 5: cout << "Negro";
    break;
    }

else if (letra == C == 6)

switch (letra){
    case 6: cout << "Cian";
    break;
    }

else if (letra == G == 7)

switch (letra){
    case 7: cout << "Verde";
    break;
    }

else cout << "Escriba una de las letras y en mayusculas";
    

    return 0;
}