#include <stdio.h>
#include <fcntl.h>
#include <termios.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include "termset.h"

// Función para configurar los parámetros del puerto serie
int termset(int fd, int baudrate, struct termios *ttyold, struct termios *ttynew)
{
  // Convertir la velocidad de baudios a la constante adecuada
  switch(baudrate)
  {
    case 115200: baudrate = B115200; break; // Velocidad de baudios 115200
    case 57600:  baudrate = B57600;  break; // Velocidad de baudios 57600
    case 38400:  baudrate = B38400;  break; // Velocidad de baudios 38400
    case 19200:  baudrate = B19200;  break; // Velocidad de baudios 19200
    case 9600:   baudrate = B9600;   break; // Velocidad de baudios 9600
    default:     baudrate = B115200; break; // Valor por defecto si no se encuentra el baudio
  }

  // Configurar el descriptor de archivo para operaciones de entrada/salida
  fcntl(fd, F_SETFL, 0);

  // Obtener los parámetros actuales del terminal y almacenarlos en ttyold
  if(tcgetattr(fd, ttyold) != 0)
  {
    perror("tcgetattr"); // Usar perror para imprimir el error
    return -1;
  }

  // Copiar la configuración antigua a la nueva estructura
  *ttynew = *ttyold;

  // Establecer la velocidad de entrada y salida
  cfsetospeed(ttynew, baudrate);
  cfsetispeed(ttynew, baudrate);

  // Configurar el puerto:
  // 8 bits de datos (CS8), sin paridad (PARENB y PARODD desactivados), 1 bit de parada (CSTOPB desactivado)
  ttynew->c_cflag = (ttynew->c_cflag & ~CSIZE) | CS8;
  ttynew->c_cflag &= ~(PARENB | PARODD);
  ttynew->c_cflag &= ~CSTOPB;
  // Ignorar las líneas de estado del módem y habilitar la lectura
  ttynew->c_cflag |= (CLOCAL | CREAD);

  // Configuración de entrada:
  // Desactivar el procesamiento de entrada (sin conversión de CR a NL, sin control de flujo XON/XOFF, etc.)
  ttynew->c_iflag &= ~(IGNBRK | BRKINT | ICRNL | INLCR | PARMRK | INPCK | ISTRIP | IXON);

  // Configuración de salida:
  // Desactivar el procesamiento de salida (sin conversión de NL a CR-NL, sin supresión de caracteres de relleno, etc.)
  ttynew->c_oflag &= ~(OCRNL | ONLCR | ONLRET | ONOCR | OFILL | OPOST);

  // Configuración de control de línea:
  // Desactivar el procesamiento de línea (sin eco, sin modo canónico, sin extensión de entrada, sin caracteres de señalización)
  ttynew->c_lflag &= ~(ECHO | ECHONL | ICANON | IEXTEN | ISIG);

  // Configurar el tiempo de espera y el número mínimo de caracteres para la lectura
  ttynew->c_cc[VMIN]  = 0;  // Esperar al menos 1 byte para la lectura
  ttynew->c_cc[VTIME] = 5;  // Tiempo de espera 0.5 segundos, luego del último dato recibido (timeout)

  // Aplicar los cambios inmediatamente y vacía los buffers de entrada y salida
  if(tcsetattr(fd, TCSAFLUSH, ttynew) != 0)
  {
    perror("tcsetattr"); // Imprimir mensaje de error si tcsetattr falla
    return -1;
  }

  return 0; // Retornar 0 en caso de éxito
}

