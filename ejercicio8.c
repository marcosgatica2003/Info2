#include <stdio.h>

//8. Comprobar si un número es primo.

int main(void) {
       
    int num = 0;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("Es primo\n");
    } else {
        printf("Es no primo\n");
    }
    
    return 0;
}


