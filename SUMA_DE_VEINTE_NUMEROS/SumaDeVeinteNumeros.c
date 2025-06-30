#include <stdio.h>

int main() {
    int i, numero, suma = 0; // Aca tengo la variable para el indice, el numero y el total

    // Realizo un blucle para para pedir los 20 numeros
    for (i = 0; i < 20; i++) {
        printf("Ingrese el número #%d: ", i + 1);
        scanf("%d", &numero);
        suma += numero; // Hago la suma total
    }

    // Finalmente muestra el resultado de la suma total
    printf("🔢 La suma total de los 20 números es: %d\n", suma);

    return 0;
}

