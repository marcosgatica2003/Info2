#include <stdio.h>
#include "util.h"
#include <string.h>

int main (void) {
    unsigned char cadena [] = "Buff{ qx euq xqq qx yqzgajq";
    int longitud = strlen((const char*)cadena);
    unsigned char cadenaIntercambiada [longitud + 1];
    for (int i = 0; i < longitud; i++){
        intercambiarBit4porBit2(&cadena[i]);
        cadenaIntercambiada[i] = cadena[i];
    }
    
    cadenaIntercambiada [longitud] = '\0';
    printf("Cadena desencriptada: %s\n", cadenaIntercambiada);
   return 0;
}

