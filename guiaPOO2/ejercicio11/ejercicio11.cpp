#include <iostream>
#include "persona.h"

using namespace std;

int main()  {
    persona person1("Mauro", 20);
    persona person2("Mauro", 21);
    (person1 == person2) ? cout << "Son iguales" << endl : cout << "Distintos" << endl;
    return 0;
}


