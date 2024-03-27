#include <stdio.h>
/*. Ejercicio de Rectángulo.
 Define una estructura llamada Rectangulo que represente un
rectángulo con longitud y ancho.
 Escribe funciones para calcular el área y el perímetro del
rectángulo.*/

typedef struct manaos {
	float longitud;
	float ancho;
} rectangulo;

float calcularArea (rectangulo a) {
	return (a.longitud * a.ancho);
}

float calcularPerimetro (rectangulo b) {
	return (2*b.longitud + 2*b.ancho);
}
int main(void) {
	
	rectangulo unidad;
	printf("Ingrese la longitud del rectangulo: ");
	scanf("%f", &unidad.longitud);
	printf("Ingrese el ancho del rectangulo: ");
	scanf("%f", &unidad.ancho);
	
	printf("El area de la figura es: %f\n", calcularArea(unidad));
	printf("El perimetro de la figura es: %f\n", calcularPerimetro(unidad));
	return 0;
}

