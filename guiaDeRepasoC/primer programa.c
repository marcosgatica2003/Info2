#include <stdio.h>
#define TAM 100
int main (void) {
    char texto[TAM];
    printf("ingrese un testo: "); scanf("%[^\n]", texto);
    printf("El texto es: %s\n", texto);
    return 0;
}
