#include <iostream>
using namespace std;
int main() {
    int numeros[20]; // se realiza un array de 20 posiciones
    int i;
    // se hace un bucle para pedir los 20 numeros
    for (i=0 ; i<20 ; i++) {
        cout << "Ingrese un numero en la posicion " << i << " --->";
        cin>> numeros[i];
     } 
     // Se va a encargar de mostrar los resultados en posiciones pares
    for (i = 0; i < 20; i++) {
        if(i % 2 != 0) { // en caso del que el indice sea par
            cout << numeros[i] << " ";
        }
    }

    return 0;
}