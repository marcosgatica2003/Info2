#ifndef UTIL_H
#define UTIL_H

#include <Arduino.h>

class entrada {
    public:
        entrada(char = 13);
        void definirEntrada(char);
        String getEstado(unsigned long = 1000);
        String getFlancoAsc();
        String getFlancoDes();
        int cambioDisponible();
        
    private:
        char pin;
        int estado;
        unsigned long tiempoAntirrebote;
};

class tarea {
  public:
    tarea(int = 0, int = 0);
    bool esTiempo();
    void definirTiempo(int, int);

  private:
    int minutos, segundos;
    unsigned long tiempoMilisegundos, ultimoTiempo;
};

#endif

