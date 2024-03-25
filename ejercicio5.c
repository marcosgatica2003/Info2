
//5. Revertir un número entero. Por ejemplo: num = 123 → reverse = 321

#include <stdio.h>
//#define TAM 50

int invertirNumero (int valor) {
	int reversa = 0;

	while (valor != 0) {
		int i = valor %10;
		reversa = reversa*10 + i;
		valor /=10;
	}

	return reversa;
}

int main (void) {
		
	int num = 0;
	printf("Meta el numero papi: ");
	scanf("%d", &num);

	int dadoVuelta = invertirNumero(num);

	printf("Te queda: %d\n", dadoVuelta);
	
	return 0;
}
