#include <stdio.h>
#define TAM 5
/* Encontrar el máximo y mínimo. Escribe un programa en C que encuentre el máximo y el
mínimo de un arreglo de enteros previamente inicializado*/


void cargarArreglo (int arreglo []) {
	printf("CARGAR ARREGLO\n");
	for (int i = 0; i < TAM; i++) {
		printf("Ingrese el elemento %d: ", i);
		scanf("%d", &arreglo[i]);
	}
}

int buscarMenor(int arreglo[]) {
	int menor = arreglo[0];
	for (int i = 0; i < TAM; i++) {
		if (menor > arreglo[i]) {
			menor = arreglo[i];
		}
	}
	return menor;
}

int buscarMayor(int arreglo[]) {
	int mayor = 0;
	for (int i = 0; i < TAM; i++) {
		if(mayor < arreglo[i]) {
			mayor = arreglo[i];
		}
	}
	return mayor;
}

int main(void) {
	
	int arreglo [TAM];
	cargarArreglo(arreglo);
	printf("El menor ingresado es: %d\n", buscarMenor(arreglo));
	printf("El mayor ingresado es: %d\n", buscarMayor(arreglo));
	return 0;
}

