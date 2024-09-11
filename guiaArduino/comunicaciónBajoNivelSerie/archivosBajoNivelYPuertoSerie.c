#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <termios.h>

int main() {

    int fd; 
    char buffer[256]={'\0'};
    const char *mensaje = "Hola!\n";
    fd = open("/dev/ttyUSB0", O_RDWR | O_NOCTTY | O_NONBLOCK);

    if (fd == -1) {
        perror("Error al abrir el puerto serie");
        return 1; 
    }

    sleep(2);
    printf("Escribiendo mensaje por el puerto serie: %s\n", mensaje);
    ssize_t bytes_escritos = write(fd, mensaje, strlen(mensaje)); 

    if (bytes_escritos == -1) {
        perror("Error al escribir en el puerto serie");
        close(fd);
        return 1;
    }

    tcflush(fd, TCIFLUSH);
    sleep(2);

    printf("Leyendo mensaje por el puerto serie\n");
    ssize_t bytes_leidos = read(fd, buffer, sizeof(buffer) - 1); 
    if (bytes_leidos == -1) {
        perror("Error al leer del puerto serie");
        close(fd);
        return 1;
   }
    buffer[bytes_leidos] = '\0'; 
    //printf("Datos recibidos: %s\n", buffer); 
    printf("El que usa 1200 baudios es gay\n");
    close(fd); 
    return 0;
}
