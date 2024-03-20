#include <stdio.h>

int main (void) {
	
	int num = 0;
	
	printf("Ingrese un numero: ");
	scanf("%d", &num);

	if (num %2 == 0) {
		printf("El número es par\n");
	} else {
		printf("El número es impar\n");
	}

	return 0;

}
