#include <stdio.h>
#define TAM 100

int sumaElementosArreglo (int* n, int cantidad) {
    
    int suma = 0;

    for (int i = 0; i < cantidad; ++i){
        suma += n[i];
    }
    
    printf("La suma de los elementos es: %d\n", suma);
    return suma;
}

void calcularPromedioElementos (int suma, int cantidad) {
    printf("El promedio de los elementos es: %f\n", (float)suma/cantidad);
}

int cargarElementosArreglo (int* n) { 
    
    int cantidad = 0, elemento = 0;
    
    do {
    printf("Cuántos elementos va a cargar?: "); scanf("%d", &cantidad);
    } while (cantidad <= 0 || cantidad > TAM);

    for (int i = 0; i < cantidad; ++i) {
        printf("Elemento N°%d: ", i); scanf("%d", &elemento);
        n[i] = elemento;
    }
    
    printf("Carga finalizada. \n\n");
    
    return cantidad;
}

void mandarASalida (const char* sexo) {
    freopen(sexo, "w", stdout);
}

int main (void) {

    mandarASalida("salida.txt");
    int arreglo[TAM] = {0};
    int* pArreglo = arreglo;
    int elementos = cargarElementosArreglo(pArreglo);
    calcularPromedioElementos(sumaElementosArreglo(pArreglo, elementos), elementos);
    return 0;
}

