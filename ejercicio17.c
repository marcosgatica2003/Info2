#include <stdio.h>
#include <stdlib.h>

#define TAM 5

/*Ordenar un arreglo de enteros. Escribe un programa en C que ordene un arreglo de enteros
en orden ascendente o descendente. El arreglo debe estar previamente inicializado.*/


int compararAscendente (const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int compararDescendente (const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}


int main(void) {
    int cadenaEnteros [TAM];
    int discriminante = 0;

    printf("Ingrese los %d numeros a ordenar.\n", TAM);

    for (int i = 0; i<TAM ; i++) {
        printf("Ingrese el número %d: ", i);
        scanf("%d", &cadenaEnteros[i]);
    }
    
    printf("----------------------------------------------------------------\n");
    do {
        printf("¿Cómo quiere ordenarlos?\n(1 - Ascendente / 2 - Descendente): ");
        scanf("%d", &discriminante);
    
        if (discriminante == 1) {
            qsort(cadenaEnteros, TAM, sizeof(int), compararAscendente);
            break;    
        } else if (discriminante == 2) {
            qsort(cadenaEnteros, TAM, sizeof(int), compararDescendente);
            break;
        } else {
        printf("Boludo\n"); 
            }      
    } while (discriminante != 1 || discriminante != 2);
    
    printf("El arreglo quedó así: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d", cadenaEnteros[i]);
    }
        
    return 0;
}


