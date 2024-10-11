#ifndef EMPLEADO_H
#define EMPLEADO_H

// class cilindro {
//     public:
//         cilindro(float radio = 1.0, float altura = 1.0);
//         float calcularVolumen();
//         void dimensionar(float r, float h );
//     private:
//         float radio;
//         float altura;
// };

#include <string>
class empleado {
    public:
        empleado(std::string nombre = "desconocido", unsigned int edad = 0, double salario = 0);
        void cargarDatosEmpleado(std::string, unsigned int, double);
        void mostrarDatosEmpleado();

        ~empleado();

    private:
        std::string nombre;
        unsigned int edad;
        double salario;

};

#endif
