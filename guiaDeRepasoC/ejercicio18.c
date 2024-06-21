#include <stdio.h>
/*Sumar elementos de un arreglo. Escribe un programa en C que sume todos los elementos de
un arreglo de enteros previamente inicializado*/
#define TAM 5

int sumarEnteros (int cadena []) {
	
	int result = 0;
	
	for (int i = 0; i < TAM; i++) {
		result += cadena[i];
	}
	
	return result;
}


int main(void) {
	int arregloDeEnteros [TAM];
	printf("Se le pedirà completar un arreglo.\n");
	
	for (int i = 0; i < TAM; i++) {
		printf("Ingrese el valor N°%d: ", i);
		scanf("%d", &arregloDeEnteros[i]);
	}
	
	printf("La suma de todos los números es: %d", sumarEnteros(arregloDeEnteros));
	
	return 0;
}

