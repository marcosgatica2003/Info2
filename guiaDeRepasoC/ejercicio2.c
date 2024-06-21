#include <stdio.h>

int main (void) {
	
	float gradoCelsius = 0.0;

	printf("Ingrese el valor de grados Celcius: ");
	scanf("%f", &gradoCelsius);

	printf("El valor de esa temp. en Fahrenheit es: %f\n", (gradoCelsius*(9/5) + 32));
	
	return 0;

}
