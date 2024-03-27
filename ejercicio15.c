#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 100
/*Contar vocales. Escribe un programa en C que cuente el número de vocales en una cadena
dada por el usuario.*/

int contarVocales (char cadena[]) {
    int num = 0;
    char temporal;    
    for (int i = 0; i < strlen(cadena); i++) {
        
        temporal = toupper(cadena[i]); // Convierte el caracter en la posición i, en mayuscula.
    
        if (temporal == 'A' || temporal == 'E' || temporal == 'I' || temporal == 'O' || temporal == 'U') {    
            num++;
        }
    }
    
    return num;
}


int main(void) {
    char cadenaConVocales [TAM];
    int vocales = 0;

    printf("Ingrese una cadena: ");
    fgets(cadenaConVocales, TAM, stdin);
    vocales = contarVocales(cadenaConVocales);
    printf("Su cadena tiene %d vocales.\n", vocales);    

    return 0;
}


