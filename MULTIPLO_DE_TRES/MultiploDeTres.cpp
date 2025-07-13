
#include <iostream>
using namespace std;
int main() {
    int numero; //  la variable con la cual el usuario va a guardar el numero

    cout << "Ingrese un numero: "; // le pido el numero al usuario
    cin >> numero;
    if (numero % 3 == 0) {  // verificacion mediante una division
        cout << "El numero que ingreso es multiplo de 3. " << endl;
    } else {
        cout << "El numero que ingreso no es multiplo de 3. " << endl;
    }
    return 0;
}

