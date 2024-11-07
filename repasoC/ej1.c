#include <stdio.h>
#include <string.h>

void desencriptar (char mensaje[]) {
    for (int i = 0; i < strlen(mensaje); ++i) {
        char temp1 = (mensaje[i] << 4);
        char temp2 = (mensaje[i] << 2);

        (mensaje[i] << 2) = (mensaje[i] << 2) & temp1;
        (mensaje[i] << 4) = (mensaje[i] << 4) & temp2;


    }
}

int main () {
    
    char menEncrip[] = "Buff{ qx euq xqq qx yqzgajq";

    desencriptar(menEncrip);
    printf("Mensaje: %s", menEncrip);

    return 0;
}



/* void encriptar(char mensaje[]) { */
/*     // Desplazamos un bit a la izquierda en cada carácter */
/*     for (int i = 0; i < strlen(mensaje); i++) { */
/*         mensaje[i] = mensaje[i] << 1;  // Desplazamiento a la izquierda */
/*     } */
/* } */

/* void desencriptar(char mensaje[]) { */
/*     // Desplazamos un bit a la derecha en cada carácter para recuperar el original */
/*     for (int i = 0; i < strlen(mensaje); i++) { */
/*         mensaje[i] = mensaje[i] >> 1;  // Desplazamiento a la derecha */
/*     } */
/* } */

/* int main() { */
/*     char mensaje[] = "Hola mundo";  // Mensaje original */
/*     printf("Mensaje original: %s\n", mensaje); */

/*     encriptar(mensaje);  // Encriptamos el mensaje */
/*     printf("Mensaje encriptado: %s\n", mensaje);  // Mensaje ilegible */

/*     desencriptar(mensaje);  // Desencriptamos el mensaje */
/*     printf("Mensaje desencriptado: %s\n", mensaje);  // Mensaje original de vuelta */

/*     return 0; */
/* } */



/* #include <stdio.h> */

/* int compararBits (unsigned char A, unsigned char B) { */
/*     int aciertos = 0; */
    
/*     for (int i = 0; i < 8; ++i) { */
/*         if(A & (1 << i) && B & (1 << i)) { */
/*             aciertos++; */
/*         } */
/*     } */

/*     return aciertos; */
/* } */

/* int main() { */

/*     unsigned char a = 85; // 0101 0101 */
/*     unsigned int posicion = 0; */
/*     printf("Ingrese la posición:\t"); scanf("%d", &posicion); */

/*     if ((a & (1 << posicion)) != 0) { */
/*         printf("Bit en 1"); */
/*     } else { */
/*         printf("Bit en 0"); */
/*     } */
/*     return 0; */
/* } */


