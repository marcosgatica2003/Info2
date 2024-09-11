#ifndef TERMSET_H
#define TERMSET_H

#include <termios.h>
#include <fcntl.h>

/**
 * @brief Función que configura los parámetros del puerto serie, para 8N1.
 *
 * @param fd Descriptor de archivo del puerto serie (ejemplo: /dev/ttyUSB0)
 * @param baudrate Velocidad de comunicación (ejemplo: 9600, 115200)
 * @param ttyold Estructura termios que contiene la configuración actual del puerto serie
 * @param ttynew Estructura termios que contiene la nueva configuración para aplicar
 * @return 0 si la configuración fue exitosa, -1 en caso de error
 */
int termset(int fd, int baudrate, struct termios *ttyold, struct termios *ttynew);

#endif // TERMSET_H

