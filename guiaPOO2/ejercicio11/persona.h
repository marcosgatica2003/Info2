#ifndef PERSONA_H
#define PERSONA_H

#include <string>
class persona {
    public:
        persona(std::string nombre, unsigned int edad);
        bool operator==(persona person) const;
    private:
        const std::string _nombre;
        unsigned int _edad;
};

#endif


