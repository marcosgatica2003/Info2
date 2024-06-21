#include <stdio.h>
#include <math.h>

/*Ejercicio de Ecuaciones Cuadráticas. Define una estructura llamada EcuacionCuadratica
que represente una ecuación cuadrática en la forma ax
2+bx+c = 0. Implementa un programa
que permita al usuario ingresar los coeficientes de una ecuación cuadrática y luego calcule y
muestre las raíces de la ecuación. El programa debe manejar correctamente el caso de raíces
reales, imaginarias y repetidas.*/

typedef struct {
    float terminoCuadratico;
    float terminoLineal;
    float terminoIndependiente;
} ecuacionCuadratica;

void perdirTerminos (ecuacionCuadratica* a) {
    do {
        printf("Ingrese el término cuadrático: ");
        scanf("%f", &a->terminoCuadratico);
    } while (a->terminoCuadratico == 0);

    printf("Ingrese el término lineal: "); scanf("%f", &a->terminoLineal);
    printf("Ingrese el término independiente: "); scanf("%f", &a->terminoIndependiente);

    printf("La ecuación ingresada es: (%.3f) X² + (%.3f) X + (%.3f)\n", a->terminoCuadratico, a->terminoLineal, a->terminoIndependiente);
}

float calcularDiscriminante (ecuacionCuadratica* b) {
    float discriminante = (pow((b->terminoLineal), 2)) - 4*(b->terminoCuadratico)*(b->terminoIndependiente);
    printf("EL discriminante es: %.3f\n", discriminante);
    if (discriminante > 0) {
        printf("Las raices son diferentes.\n");
    } else if (discriminante < 0) {
        printf("Las raíces pertenecen al conj. complejo.\n");
    } else {
        printf("Las raíces son iguales.\n");
    }

    return discriminante;
}

void calcularRaices (ecuacionCuadratica* c) {
    float raizUno, raizDos;
    int discriminante = calcularDiscriminante(c);

    if (discriminante > 0) {
        raizUno = (-(c->terminoLineal)+sqrt(discriminante))/(2*(c->terminoCuadratico));
        raizDos = (-(c->terminoLineal)-sqrt(discriminante))/(2*(c->terminoCuadratico));
        printf("X1 = %f\nX2 = %f\n", raizUno, raizDos);
    } else if (discriminante < 0) {
        //X1 -> parte real 
        //X2 -> parte imag.
        raizUno = (-(c->terminoLineal))/(2*(c->terminoCuadratico));
        raizDos = sqrt(-discriminante)/(2*(c->terminoCuadratico));
        printf("X1 = %.3f + %.3fi\nX2 = %.3f - %.3fi\n", raizUno, raizDos, raizUno, raizDos);
        
    } else {
        raizUno = (-(c->terminoLineal))/(2*(c->terminoCuadratico));
        printf("X1 = X2 = %f\n", raizUno);
   }
}

int main(void) {
    
    ecuacionCuadratica ecuacionUno;
    perdirTerminos(&ecuacionUno);    
    calcularRaices(&ecuacionUno);        


    return 0;
}


