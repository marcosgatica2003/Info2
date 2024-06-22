#include <stdio.h>
#include <math.h>
#define BITS 8

void imprimirBits(unsigned char* );
void imprimirEstadoActualDeUnBit(unsigned char* );
void contarBits1(unsigned char* );
void ponerACero(unsigned char* );
void ponerAUno(unsigned char* );
void cargarBits(unsigned char* );
void binarioADecimal(unsigned char* );
void determinarParOImpar(int* );
void compararBits(unsigned char*, unsigned char*);
void invertirUnaSerieDeBits(unsigned char* );

int main (void) {

    unsigned char bits = 0, bits1 = 0; // Creé una variable unsigned char donde guardaré los bits.
    cargarBits(&bits);
    ponerACero(&bits);
    ponerAUno(&bits);
    imprimirEstadoActualDeUnBit(&bits);
    contarBits1(&bits);
    binarioADecimal(&bits);
    compararBits(&bits, &bits1);
    invertirUnaSerieDeBits(&bits);    

    return 0;
}

void invertirUnaSerieDeBits (unsigned char* puntero) {
    printf("La siguiente serie de bits será invertida -> "); imprimirBits(puntero); printf("\n");
    
    unsigned char cadenaInvertida = 0;
    
    printf("Bits invertidos: ");

    for (int i = BITS - 1; i >= 0; --i) {
        cadenaInvertida = ((*puntero) >> i) & 1; // Con esto saco el MSB y va recorriendo hasta el LSB
        printf("%c", cadenaInvertida);
        cadenaInvertida = cadenaInvertida << 1; // Una vez guardado, desplazo la cadena hacia la izquierda para ir agregando los bits.

    }

    printf("\n");
}   
void compararBits (unsigned char* puntero0, unsigned char* puntero1){
    //Pedir los valores del puntero1
    int discriminante;
    do {
        printf("Quiere comparar dos series de bits? (0 = SI | 1 = NO): "); scanf("%d", &discriminante);

    } while(discriminante != 0 && discriminante != 1);

    while (discriminante == 0) {
        printf("Valor del puntero0 -> "); imprimirBits(puntero0); printf("\n");
        printf("Se procederá a cargar los valores del puntero1: \n"); cargarBits(puntero1);

        int bitsDireferentes = 0;
        int estadoBit0, estadoBit1;

        for (int i = BITS - 1; i >= 0; --i) {
        
            estadoBit0 = ((*puntero0) >> i) & 1;
            estadoBit1 = ((*puntero1) >> i) & 1;

            if (estadoBit0 == estadoBit1){
                bitsDireferentes++;
            }
        }

        printf("Hay %d diferenes en la misma posición entre ambas series de bits. \n\n", bitsDireferentes);
        
        do {
            printf("Desea continua? (0 = SI | 1 = NO): "); scanf("%d", &discriminante);
        } while (discriminante != 1 && discriminante != 0);
    }
}

void determinarParOImpar(int* valor) {
    if ((*valor) % 2 == 0) {
        printf("El número %d es par.\n", (*valor));
    } else {
        printf("El número %d es impar.\n", (*valor));
    }
}


void binarioADecimal(unsigned char* puntero) {
    int n = 0, bitActual;
    for (int i = BITS - 1; i >= 0; --i) {
        
        bitActual = ((*puntero) >> i) & 1;

        if (bitActual == 1){
            n = n + pow(2,i);       
        } 
    }

    printf("Número en decimal: %d\n", n);
    determinarParOImpar(&n);
}

void imprimirBits (unsigned char* puntero){
    
    //Llamar a esta función implica que los bits ahora están ordenados desde el MSB al LSB

    int bitActual = 0;
    
    printf("Bits actuales: ");

    for (int i = BITS - 1 ; i >= 0; --i) {
        bitActual = ((*puntero) >> i) & 1;
        printf("%d", bitActual);
    }

    printf("\n");
}

void imprimirEstadoActualDeUnBit (unsigned char* puntero) {

    int discriminante, bitEstadoActual;

    printf("Desea ver el estado actual de un bit en concreto? (0 = SI | 1 = NO): "); scanf("%d", &discriminante);

    while (discriminante == 0) {
        printf("Ingrese el bit que desea saber: "); scanf("%d", &bitEstadoActual);
        printf("El estado del bit N°%d es: ", bitEstadoActual);
        bitEstadoActual = ((*puntero) >> bitEstadoActual);
        printf("%d\n", bitEstadoActual);
        do {
          printf("Desea continuar? (0 = SI | 1 = NO): "); scanf("%d", &discriminante);
        } while (discriminante != 0 && discriminante != 1);
    }
}

void contarBits1 (unsigned char* puntero) {
    int discriminante, n = 0;

    do {
        printf("Desea contar los bits en estado ON (1)? (0 = SI | 1 = NO): "); scanf("%d", &discriminante);
    } while (discriminante != 0 && discriminante != 1);

    while (discriminante == 0){
        for (int i = BITS - 1; i >=0 ; --i) {
            n += ((*puntero) >> i) & 1;
        }

        printf("Cantidad de bits en ON: %d\n", n);

        n = 0;

        do{
            printf("Desea repetir esta función? (0 = SI | 1 = NO): "); scanf("%d", &discriminante);
        } while (discriminante != 0 && discriminante != 1);
    }
}
void ponerACero (unsigned char* puntero){

    int discriminante;
    do {
        printf("Qué bit desea poner a 0? (0 - 7): "); scanf("%d", &discriminante);
    } while (discriminante > 7 || discriminante < 0);

    unsigned char mask = ~(1 << discriminante);

    (*puntero) &= mask;
    imprimirBits(puntero);
  }

void ponerAUno (unsigned char* puntero){

    int discriminante;
    do {
        printf("Qué bit desea poner a 1? (0 - 7): "); scanf("%d", &discriminante);
    } while (discriminante > 7 || discriminante < 0);

    unsigned char mask = (1 << discriminante);

    (*puntero) |= mask;
    imprimirBits(puntero);
  
}

void cargarBits (unsigned char* puntero){

    int bit = 0; //Usaremos una variable intermedia para pedir los bits.
    printf("\n");
    printf("Se cargarán %d bytes en binarios.\n", (BITS/8));
    printf("---------------------------------\n\n");

    printf("El método de carga será del más signifivo al menos signifivo.\n");
    for (int i = 0; i < BITS; ++i) {
        printf("Posición N°%d: ",(BITS - 1 -i)); scanf("%d", &bit);
        //Control de errores
        if (bit != 0 && bit != 1) {
            printf("No se ha cargado el bit, entrada inválida.\n");
            i--;
        } else { 
            (*puntero) = ((*puntero) << 1) | bit; //Con esto muevo el puntero hacia la izquierda y le aplico un OR para cargar el bit.
             
            }    
    
    }

    imprimirBits(puntero);
}



