#include <stdio.h>
#include <string.h>

#define TAM 100
/*12. Concatenar cadenas. Escribe un programa en C que tome dos cadenas como entrada del
usuario y luego concatene esas cadenas en una tercera cadena.*/


int main(void) {
    
    char cadenaGrande [TAM], cadenaPequena[TAM];
    printf("Ingrese un texto: ");
    scanf("%s", cadenaGrande);
    printf("Ingrese otra cadena de texto: ");
    scanf("%s", cadenaPequena);
    
    strcat(cadenaGrande, cadenaPequena);
    printf("Cadena 1 + Cadena 2 = %s\n", cadenaGrande);
    
    return 0;
}


