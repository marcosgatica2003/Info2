#include <stdio.h>

// 7. Encontrar el máximo entre tres números.

int main(void) {

    int num = 0;
    int mayor = 0;
    for (int i = 0; i<3; i++) {
        printf("Ingrese el numero %d: ", i);
        scanf("%d", &num);
        if (mayor < num) {
            mayor = num;
        }
    }

    printf("El mayor es: %d\n", mayor);
            

    return 0;
}


