#include <iostream>
#include <boost/lexical_cast.hpp>

int main() {
    try {
        // Convertir una cadena de caracteres en un número entero usando boost::lexical_cast
        std::string cadenaNumero = "123";
        int numero = boost::lexical_cast<int>(cadenaNumero);

        // Imprimir el resultado
        std::cout << "Número convertido: " << numero << std::endl;
    } catch (const boost::bad_lexical_cast& ex) {
        // Manejar la excepción en caso de error en la conversión
        std::cerr << "Error al convertir la cadena: " << ex.what() << std::endl;
    }

    return 0;
}
