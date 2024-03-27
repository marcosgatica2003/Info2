#include <stdio.h>
#include <string.h>

#define TAM 100
/*Invertir una cadena. Escribe un programa en C que tome una cadena como entrada del
usuario y luego muestre la cadena invertida.*/

void invertirCadena (char cadena[]) {
  int longitud = strlen(cadena);

  for (int i = 0; i < strlen(cadena)/2; i++) {
    //Acá hago el intercambio
    char ii = cadena[i];
    cadena[i] = cadena[longitud - i - 1];
    cadena[longitud -i -1] = ii;
    }

}


int main(void) {
  char cadenaUno [TAM];
  printf("Ingrese una cadena: ");
  scanf("%s", cadenaUno);
  printf("Usted ingresó: '%s'\n", cadenaUno);
  invertirCadena(cadenaUno);
  printf("Invertida queda: '%s'",cadenaUno);
    
    return 0;
}


