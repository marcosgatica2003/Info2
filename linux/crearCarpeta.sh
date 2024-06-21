#!/bin/bash

#Variable como nombre de la carpeta, o con un nombre por defecto.

nombreDeCarpeta="${1:-miProyecto}"

#Crear carpeta usando la Variable. El "||" se usa para manejar errores, si lo de la izquierda falla simplemente sale (ejecutando lo de la derecha, el exit)

mkdir "$nombreDeCarpeta" || exit

#Cambiar al directorio

cd "$nombreDeCarpeta" || exit

#Se crea y edita el archivo main.c, el siguiente bloque utiliza la funcionalidad de tubería
cat > main.c <<EOF

#include <stdio.h>

int main (void) {
	printf("Hola sexo\n");
	return 0;
}
EOF

#Mandar a imprimir al terminal
echo 'Carpeta '$nombreDeCarpeta' creada'

vi ./miProyecto/main.c

gcc main.c -o main.out

./main.out
