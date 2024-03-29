#include <stdio.h>
#include <stdint.h>

/*Realice un programa que permita transformar dos datos de 16 bits en uno de 32 bits
empleando uniones. Uno de los datos de 16 bits será la parte alta y el otro la parte baja del
dato de 32 bits. Se debe ingresar por teclado la parte alta y baja para luego imprimir el
resultado en 32 bits.*/

typedef union {
    uint16_t dato16[2];
    uint32_t dato32;
} bits;


int main(void) {
    bits datos32;
    uint16_t dato1, dato2;

    printf("Ingrese el primer dato de 16 bits(alta): "); scanf("%hx", &dato1);
    printf("Ingrese el segundo dato de 16 bits(baja): "); scanf("%hx", &dato2);
    
    datos32.dato16[0] = dato1;
    datos32.dato16[1] = dato2;

    uint32_t datosJuntos = datos32.dato32;
    
    printf("Dato 16bits alta: 0x%04X\n", dato1);
    printf("Dato 16bits baja: 0x%04X\n", dato2);
    printf("Datos 32bits: 0x%08X\n", datosJuntos);

    return 0;
}


