#include <stdio.h>
/*Buscar un elemento en un arreglo. Escribe un programa en C que busque un elemento dado
por el usuario en un arreglo de enteros y muestre su posición si se encuentra. El arreglo debe
estar previamente inicializado.*/
#define TAM 5

void cargarArreglo (int arreglo []) {
	printf("CARGAR ARREGLO\n");
	for (int i = 0; i < TAM; i++) {
		printf("Ingrese el elemento %d: ", i);
		scanf("%d", &arreglo[i]);
	}
}

int busquedaBinaria (int arreglo[], int target) {
	int low = 0;
	int high = TAM - 1;
	
	while (low <=high) {
		int mid = (low + high)/2;
		if(target == arreglo[mid]) {
			return mid;
		} else if (target < arreglo[mid]) {
			high = mid -1;
		} else {
			low = mid +1;
		}
		
	}
	
	return -1;
}

int main(void) {
	
	int arreglo [TAM];
	int busqueda = 0;
	cargarArreglo(arreglo);
	printf("Qué elemento quiere buscar?: ");
	scanf("%d", &busqueda);
	int resultado = busquedaBinaria(arreglo, busqueda);
	if (resultado != -1) {
		printf("El elemento está en la posición %d del arreglo.\n", resultado); 
	} else {
		printf("Elemento no encontrado\n");
	}
	return 0;
}

