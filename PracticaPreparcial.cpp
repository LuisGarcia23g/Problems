//clonar, compilar y mandar a github
#include <iostream>
using namespace std;

//for para pedir un entero y mostrar la tabla del 1 al 10
int main (){

int n;
cout << "Escriba un num para mostrar su tabla de multiplicar: " << endl;
cin >> n;

int i=1;
 while (i<=10) {
    cout << "La tabla es: \n" << n << " . " << i << " = " << n*i << endl;
    i++;
}


    return 0;
}