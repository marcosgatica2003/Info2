#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <termios.h>
#include "termset.h"

#define TAM 256

int main () {
    int fd;
    struct termios ttyold, ttynew;
    char buffer [TAM];
    const char* mensaje = "Hola desde Linux\n";

    fd = open("/dev/ttyUSB0", O_RDWR | O_NOCTTY | O_NONBLOCK);
    if (fd == -1) {
        perror("Error al abrir el puerto serie");
        return 1;
    }

    tcflush(fd, TCIFLUSH);

    if (termset(fd, 115200, &ttyold, &ttynew)) {
        close(fd);
        return 1;
    }

    sleep(2);

    printf("Escribiendo el mensaje por puerto serie: %s\n", mensaje);
    ssize_t bytes_escritos = write(fd, mensaje, strlen(mensaje));

    if (bytes_escritos == -1) {
        perror("Error al escribir en el puerto serie");
        close(fd);
        return 1;
    }

    sleep(2);

    printf("Leyendo mensaje por puerto serie\n");

    ssize_t bytes_leidos = read(fd, buffer, sizeof(buffer) -1);

    if (bytes_leidos == -1) {
        perror("Error al leer el puerto serie");
        close(fd);
        return 1;
    }

    buffer[bytes_leidos] = '\0';
    printf("Datos recibidos: %s\n", buffer);

    if (tcsetattr(fd, TCSANOW, &ttyold) != 0) perror("Error al restaurar la configuración del puerto serie");

   close(fd);
    return 0;
}
