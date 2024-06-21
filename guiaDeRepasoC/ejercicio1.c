#include <stdio.h>
#define PHI 3.1416
int main (void) {

	float areaCirculo = 0.0;
	printf("Calcular el area del circulo: ");
	scanf("%f", &areaCirculo);
	
	printf("El area del circulo es: %f\n", areaCirculo*areaCirculo*PHI);

	return 0;
}
