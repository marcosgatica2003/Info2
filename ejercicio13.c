#include <stdio.h>
#include <string.h>

#define TAM 100
/*13. Comparar cadenas. Escribe un programa en C que compare dos cadenas y muestre si son
iguales o diferentes.*/

int main(void) {  
    char cadenaUno [TAM], cadenaDos[TAM];
    printf("Ingrese una cadena: ");
    scanf("%s", cadenaUno);
    printf("Ingrese otra cadena: ");
    scanf("%s", cadenaDos);

    if (strcmp(cadenaUno, cadenaDos) == 0) {
      printf("Las cadenas son iguales.\n");
    } else {
      printf("Las cadenas no son iguales.\n");
    }
    return 0;
}


