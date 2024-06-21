#include <stdio.h>

/*Desarrolla un programa para un sistema de visualización de datos meteorológicos. El
programa debe permitir al usuario ingresar la temperatura actual en grados Celsius y luego
elegir la unidad en la que desea visualizarla (Celsius o Fahrenheit). De acuerdo con la
elección del usuario, el programa debe mostrar la temperatura en la unidad correspondiente.
Para ahorrar memoria se debe almacenar la temperatura (Celsius y Fahrenheit) en una unión.*/

typedef union {
    float celsius;
    float fahrenheit;
} temperaturas;


int main(void) {

    temperaturas temp;
    char opcion;

    printf("Ingrese la temperatura en Celsius: ");
    scanf("%f", &temp.celsius);

    printf("¿Cómo quiere ver la temperatura? Celsius (C) o Fahrenheit (F) ");
    scanf(" %c", &opcion);

    if (opcion == 'C' || opcion == 'c') {
        printf("Temperatura en Celsius: %.2f C\n", temp.celsius);
    } else if (opcion == 'F' || opcion == 'f') {
     
        temp.fahrenheit = (temp.celsius * 9 / 5) + 32;
        printf("Temperatura en Fahrenheit: %.2f F\n", temp.fahrenheit);
    } else {
        printf("Opción no válida.\n");
    }

    return 0;
}


