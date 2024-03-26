#include <stdio.h>
#define TAM 100
/* 11. Longitud de una cadena. Escribe un programa en C que tome una cadena como entrada del
usuario y luego muestre la longitud de esa cadena.*/

int main(void) {
    char cadena[TAM];
    printf("Ingrese la cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);
    printf("Usted ingresó: %s\n", cadena);
   
    return 0;
}


