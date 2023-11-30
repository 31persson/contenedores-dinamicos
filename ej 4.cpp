#include <iostream>
#include <valarray>

int main() {
    // Crear un valarray de números decimales
    std::valarray<double> miValarray1 = {1.0, 2.0, 3.0, 4.0, 5.0};
    std::valarray<double> miValarray2 = {2.0, 3.0, 1.0, 5.0, 4.0};

    // Suma
    std::valarray<double> suma = miValarray1 + miValarray2;

    // Resta
    std::valarray<double> resta = miValarray1 - miValarray2;

    // Multiplicación
    std::valarray<double> multiplicacion = miValarray1 * miValarray2;

    // División
    std::valarray<double> division = miValarray1 / miValarray2;

    // Imprimir resultados
    std::cout << "Suma: ";
    for (auto& num : suma) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Resta: ";
    for (auto& num : resta) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Multiplicacion: ";
    for (auto& num : multiplicacion) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Division: ";
    for (auto& num : division) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
