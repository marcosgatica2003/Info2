#include <stdio.h>
#include <math.h>
/*Punto en el plano. Define una estructura llamada Punto que represente un punto en el plano
cartesiano con coordenadas x e y. Luego, escribe una función que calcule la distancia
(empleando Pitágoras).*/

struct punto {
	int x;
	int y;
};

int main(void) {
	
	struct punto puntoEnElPlano;
	float distancia = 0.0;
	printf("Ingrese la posición x del punto: ");
	scanf("%d", &puntoEnElPlano.x);
	printf("Ingrese la posición y del punto: ");
	scanf("%d", &puntoEnElPlano.y);
	
	distancia = pow(puntoEnElPlano.x, 2) + pow(puntoEnElPlano.y, 2);
	distancia = sqrt(distancia);
	
	printf("La distancia del punto con respecto al centro es de: %f\n", distancia);
	return 0;
}

