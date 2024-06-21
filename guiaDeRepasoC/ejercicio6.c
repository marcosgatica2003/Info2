#include <stdio.h>

//6. Suma de los primeros n números naturales.

int sumarNumeros (int n) {

	int valor = 0;
    while (n != 0) {
    valor += n--;    
    }
    return valor;
}


int main(void) {
	
	int num = 0;
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	printf("La suma de los primeros %d es: %d\n", num, sumarNumeros(num));
	
	return 0;
}


