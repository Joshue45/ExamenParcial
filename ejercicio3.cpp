//Programa: Bucles
//Autor: Espinal Adony
//Fecha: 24-11-23


#include <iostream>

using namespace std;

int main() {
    int nm;

    cout << "Digite un número para mostrar su tabla de multiplicar: ";                     cin >> nm;


    cout << "Tabla de multiplicar del " << nm << ":" << endl;
    int i = 1;
    do {
        cout << nm << " x " << i << " = " << nm * i << endl;
        i++;
    } while (i <= 10);

    return 0;
}
