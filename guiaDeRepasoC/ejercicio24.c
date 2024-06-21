#include <stdio.h>

/*Ejercicio de Tiempo. Define una estructura llamada Tiempo que represente una hora (horas,
minutos y segundos). Escribe funciones para sumar y restar tiempos. Se deberá imprimir en
pantalla el resultado en formato HH:MM:SS.*/

typedef struct {
    int hora;
    int minutos;
    int segundos;
} tiempo;

void cargarDatosDeTiempo (tiempo* a, tiempo* b) {
    printf("A continuación se le pedirá los datos de los dos tiempos.\nSe le pedirá completar nuevamente el tiempo si un valor está incorrectamente ingresado.\n\n");
    printf("Ingrese el tiempo 1: \n");

    do {
    printf("Hora: "); scanf("%d", &(a->hora));
    printf("Minutos: "); scanf("%d", &(a->minutos));
    printf("Segundos: "); scanf("%d", &(a->segundos));
    } while ((a->hora < 0 || a->hora > 23) || (a->minutos < 0 || a->minutos >59) || (a->segundos < 0 || a->segundos > 59));

    printf("Ingrese el tiempo 2: \n");

    do {
    printf("Hora: "); scanf("%d", &(b->hora));
    printf("Minutos: "); scanf("%d", &(b->minutos));
    printf("Segundos: "); scanf("%d", &(b->segundos));
    } while ((b->hora < 0 || b->hora > 23) || (b->minutos < 0 || b->minutos >59) || (b->segundos < 0 || b->segundos > 59));

}

void sumarTiempos (tiempo* a, tiempo* b) {
    (a->hora) = (a->hora) + (b->hora);
    (a->minutos) = (a->minutos) + (b->minutos);
    (a->segundos) = (a->segundos) + (b->segundos);
}

void restarTiempos (tiempo* a, tiempo* b) {
    int n = 0;
    do {
        printf("¿Cómo quiere restar los tiempos?\n'Tiempo uno - Tiempo dos' <1> / 'Tiempo dos - Tiempo uno' <2>: ");
        scanf("%d", &n);
    } while (n != 1 && n != 2);
    
    if (n == 1) {
        (a->hora) = (a->hora) - (b->hora);
        (a->minutos) = (a->minutos) - (b->minutos);
        (a->segundos) = (a->segundos) - (b->segundos);
        
    } else {
        (a->hora) = (b->hora) - (a->hora);
        (a->minutos) = (b->minutos) - (a->minutos);
        (a->segundos) = (b->segundos) - (a->segundos);
       }
}


void imprimirEnPantalla (tiempo* a, int dis) {
    if (dis == 1) {
        printf("Este es el resultado de la suma: \n\n");
        printf("Hora = %d\nMinutos = %d\nSegundos = %d\n", a->hora, a->minutos, a->segundos);

    } else {
        printf("Este es el resultado de la resta: \n\n");
        printf("Hora = %d\nMinutos = %d\nSegundos = %d\n", a->hora, a->minutos, a->segundos);
      }
}

int main(void) {

    tiempo a, b;
    tiempo* unidadUno, *unidadDos;

    unidadUno = &a;
    unidadDos =&b;    

    int discriminante = 0;

    do {
        printf("¿Qué desea hacer? ( 1 - Sumar tiempo / 2- Restar tiempo ): ");
        scanf("%d", &discriminante);
    } while (discriminante != 1 && discriminante != 2);

    cargarDatosDeTiempo(unidadUno, unidadDos);

    if (discriminante == 1) {
        sumarTiempos(unidadUno, unidadDos);
    } else {
        restarTiempos(unidadUno, unidadDos);
    }
    
    imprimirEnPantalla (unidadUno, discriminante);


    return 0;
}


