#include <iostream>

using namespace std;

int main() {
    int nm[5];

    int sum = 0;
    int i = 0;

    do {
        cout << "Ingresa el valor para el elemento " << i + 1 << ": ";
        cin >> nm[i];                                                              

        sum = sum +  nm[i];
        i++;
    } while (i < 5);


    cout << "La suma de los elementos del arreglo es: " << sum << endl;

    return 0;
}
