#include <stdio.h>
#include <math.h>
//10. Calcular la potencia de un número. Utilizar una función “potencia” y trabajar con float.

float funcionPotencia (float base, float exponente) {
  return pow(base,exponente);     
}  


int main(void) {
    
    float base, exponente;

    printf("Ingrese la base del número: ");
    scanf("%f", &base);
    printf("Ingrese el exponente del número: ");
    scanf("%f", &exponente);
    
    printf("El resultado es: %f\n", funcionPotencia(base, exponente));


    return 0;
}


