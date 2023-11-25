//Programa: Estructuras de control
//Autor: Espinal Adony
//Fecha: 24-11-23


#include <iostream>

using namespace std;

int main() {
    int nm;

    cout << "Ingresar un número: ";
    cin >> nm;
                                                                                            if (nm > 0) {
        cout << "El número ingresado es positivo." << endl;
    } else if (nm < 0) {
        cout << "El número ingresado es negativo." << endl;                                 } else {
        cout << "El número ingresado es cero." << endl;                                     }

    return 0;
}
