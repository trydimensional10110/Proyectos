#include <iostream>
using namespace std;
int main() {
    int i; // le pomgo la variable al numero del ususario
    double n, suma = 0;
    for (i = 1; i <= 20; i++){  // Hago un bucle
        cout << "Ingrese el numero " << i << ": ";
        cin >> n;
        suma = suma + n; // pido la suma de todos los numeros
    }
    cout << "La suma de los veinte numeros que escribio da: "  << suma << endl; // Muestra el resultado final.
    return 0;
}