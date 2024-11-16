#include "evento.h"

int main()  {

    std::string nombre = "";
    unsigned int dia = 0, mes = 0, anio = 0;

    std::cout << "Ingrese el nombre del evento:\t"; std::cin >> nombre;
    std::cout << "Ingrese a continuación la fecha.\n";
    std::cout << "Dia:\t"; std::cin >> dia;
    std::cout << "Mes:\t"; std::cin >> mes;
    std::cout << "Anio:\t"; std::cin >> anio;
    
    evento fiesta(nombre, dia, mes, anio);
    fiesta.mostrarEvento();

    return 0;
}


