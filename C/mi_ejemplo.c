#include <stdio.h>
#include <stdlib.h>
#include <string.h>                 


// Función extra para imprimir los elementos del arreglo dinámico
void imprimirArreglo(int *arr, int tam) {
    printf("Elementos del arreglo: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int *p = NULL;
    int tam;

    printf("¿Cuántos elementos deseas guardar? ");
    scanf("%d", &tam);

    // Reserva de memoria dinámica
    p = (int*) malloc(sizeof(int) * tam);

    if (p == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    // Llenado del arreglo dinámico
    for (int i = 0; i < tam; i++) {
        printf("Ingresa el elemento %d: ", i + 1);
        scanf("%d", &p[i]);
    }

    // Llamada a la función extra
    imprimirArreglo(p, tam);

    // Liberar memoria
    free(p);

    return 0;
}
