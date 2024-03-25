#include <stdio.h>


//9. Calcular el factorial de un número.

int factorial (int n) {
    if (n == 0) {
        return n =  1;
    } else {
        return n *= factorial(--n);
    }
}
int main(void) {
        int num = 0;
        printf("Ingrese un número: ");
        scanf("%d", &num);
        int resultado = factorial(num);
        printf("El factorial del numero es: %d\n", resultado);
    return 0;
}


