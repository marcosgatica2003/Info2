#include <stdio.h>

int main (void) {
	int num = 0;
	int i = 1, contador = 0;
	printf("Puede parar de contar ingresando '10'\n");
	
	while (1) {
		
		printf("Ingrese el digito N°%d: ", i++);	
		scanf("%d", &num);

		if(num == 10)	{
			printf("El numero tiene %d digitos\n", contador);
			break;
			} else {
			contador++;
			
			}

	
	}

	return 0;
}
