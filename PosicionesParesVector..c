#include <stdio.h>
int main() {
    int numeros[20]; // Se realiza un Array de 20 posiciones
    int i;

    // Se hace un bucle para pedir los 20 números
    for (i = 0; i < 20; i++) {
        printf("Ingrese el número en la posición %d: ", i);
        scanf("%d", &numeros[i]);
    }
    // Se va a encargar de Mostrar los resultados en posiciones pares
    printf("\n📍 Números en posiciones pares:\n");
    for (i = 0; i < 20; i++) {
        if (i % 2 == 0) { // En caso de que el índice sea par
            printf("Posición %d: %d\n", i, numeros[i]);
        }
    }
    return 0;
}
