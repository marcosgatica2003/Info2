#include <stdio.h>
#include <string.h>
#define TAM 100


/*Eliminar caracteres duplicados. Escribe un programa en C que tome una cadena como
entrada del usuario y elimine los caracteres duplicados de esa cadena.*/

void eliminarDuplicados (char cadena[]) {
    
    for (int i = 0; i < strlen(cadena); i++) {
       for (int ii = i + 1; ii < strlen(cadena); ii++) {
            if(cadena[ii] == cadena[i]) {
                cadena[ii] = ' ';
            }
        }
              
    }
        
}

int main(void) {
    
    char cadenaDelUsuario[TAM];
    
    printf("Ingrese una cadena: ");
    fgets(cadenaDelUsuario, TAM ,stdin);
    
    printf("Usted ingresó: '%s'\n", cadenaDelUsuario);
    eliminarDuplicados(cadenaDelUsuario);

    printf("La cadena sin duplicados quedó así: %s\n", cadenaDelUsuario);
    
    return 0;
}


