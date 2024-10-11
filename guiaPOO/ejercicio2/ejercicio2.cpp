// Crea una clase Empleado que tenga los atributos 
// nombre, edad y salario. Define un método
// mostrarDatos() que imprima los datos del empleado. Debe implementar un constructor para
// inicializar los atributos y también un
// constructor predeterminado. En el main, crea un
// arreglo de objetos de varios elementos y luego 
// llama al método mostrarDatos() para cada
// uno.

#include "empleado.h"

#define TAM 3

int main()  {
    empleado limpieza[TAM] = { 
        empleado (), 
        empleado ("Marcos Raul Gatica", 21, 50.99),
        empleado ("Orale", 50, 150.99)
    };

    for (int i = 0; i < TAM; ++i) {
        limpieza[i].mostrarDatosEmpleado();
    }

    return 0;
}


