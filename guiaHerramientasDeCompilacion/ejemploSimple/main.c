#include <stdio.h>
#include "operaciones.h"

int main (void) {
    
    int a = 5, b = 3;
    printf("Suma de %d y %d = %d\n\n", a, b, suma(a,b));
    printf("Resta de %d y %d = %d\n\n", a, b, resta(a,b));

    return 0;
}

