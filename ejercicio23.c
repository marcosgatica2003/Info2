#include <stdio.h>
#include <math.h>
/*Ejercicio de Triángulo. Define una estructura llamada Triangulo que represente un triángulo
con base y altura. Escribe funciones calcular el área y perímetro. Combina con el ejercicio
del Rectángulo y crea dos funciones que permita sumar el área y perímetro de ambas
estructuras.*/

typedef struct nahuelpereyra {
	float base;
	float altura;
} triangulo;

typedef struct manaos {
	float longitud;
	float ancho;
} rectangulo;

float calcularAreaTriangulo (triangulo a) {
	return ((a.base*a.altura)/2);
}

float calcularPerimetroTriangulo(triangulo a) {
	return (2*(sqrt(pow((a.base/2), 2) + pow(a.altura, 2))) + a.base);
}

float calcularAreaRectangulo (rectangulo a) {
	return (a.longitud * a.ancho);
}

float calcularPerimetroRectangulo (rectangulo b) {
	return (2*b.longitud + 2*b.ancho);
}

int main(void) {
	
	triangulo unidadT;
	printf("Ingrese la base (triangulo): ");
	scanf("%f", &unidadT.base);
	printf("Ingrese la altura (triangulo): ");
	scanf("%f", &unidadT.altura);
	
	rectangulo unidadR;
	printf("Ingrese la longitud del rectangulo: ");
	scanf("%f", &unidadR.longitud);
	printf("Ingrese el ancho del rectangulo: ");
	scanf("%f", &unidadR.ancho);
	
	float areaTriangulo = calcularAreaTriangulo(unidadT);
	float areaRectangulo = calcularAreaRectangulo(unidadR);
	float perimetroTriangulo = calcularPerimetroTriangulo(unidadT);
	float perimetroRectangulo = calcularPerimetroRectangulo(unidadR);
	printf("El area del rectangulo es: %f\n", areaRectangulo);
	printf("El perimetro del rectangulo es: %f\n", perimetroRectangulo);
	printf("El area del triangulo es: %f\n", areaTriangulo);
	printf("El perimetro del triangulo es: %f\n", perimetroTriangulo);
	printf("Area total: %f\nPerimetro total: %f\n", (areaRectangulo+areaTriangulo), (perimetroRectangulo+perimetroTriangulo));
	return 0;
}

