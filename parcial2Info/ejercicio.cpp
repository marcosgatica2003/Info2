#include <iostream>
#include <string>
#define TAM 3

class Pelicula {
    public:
        Pelicula(
                std::string,
                std::string,
                float
                );

        Pelicula(std::string title) {
            titulo = title;
            director = "Desconocido";
            duracion = 0.0;
        };

        void mostrarInformacion ();
        void setTitulo(std::string);
        void setAutor(std::string);
        void setDuracion(float);

        std::string getTitulo();
        std::string getAutor();
        float getDuracion();


    private: 
        std::string titulo;
        std::string director;
        float duracion; //minutos
};

Pelicula::Pelicula(std::string title, std::string author, float tiempo) {
    setTitulo(title);
    setAutor(author);
    setDuracion(tiempo);
}

void Pelicula::mostrarInformacion() {
    std::cout << "---------------------------------------------------\n" << std::endl;
    std::cout << "Titulo:\t" << getTitulo() << "\n" << "Autor:\t" << getAutor() << "\n" << "Duración:\t" << getDuracion() << "min.\n" << std::endl;
    std::cout << "---------------------------------------------------\n" << std::endl;

}

void Pelicula::setTitulo(std::string title) {titulo = title;}
void Pelicula::setAutor(std::string author) {director = author;}
void Pelicula::setDuracion(float time) {duracion = time;}

std::string Pelicula::getTitulo(){ return titulo;}
std::string Pelicula::getAutor(){ return director;}
float Pelicula::getDuracion(){ return  duracion;}

int main()  {
    
    Pelicula peli2("Parcial 2: el regreso");
    Pelicula peli1("La peli1", "Manolo", 50);

    peli2.mostrarInformacion();
    peli1.mostrarInformacion();

    peli2.setAutor("El autor de la peli2");
    peli2.setDuracion(120);

    std::cout << "Peli 1 por get:\n" << peli1.getTitulo() << "\n" << peli1.getAutor() << "\n" << peli1.getDuracion() << "\n\n" << std::endl;
    std::cout << "Peli 2 por get:\n" << peli2.getTitulo() << "\n" << peli2.getAutor() << "\n" << peli2.getDuracion() << "\n" << std::endl;

    return 0;
}


