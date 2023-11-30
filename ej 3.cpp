#include <iostream>
#include <vector>
#include <algorithm> // Necesario para sort y max_element

int main() {
    // Crear un vector de enteros
    std::vector<int> miVector = {5, 2, 8, 1, 3};

    // Utilizar la función sort para ordenar los elementos del vector
    std::sort(miVector.begin(), miVector.end());

    // Imprimir el vector ordenado
    std::cout << "Vector ordenado: ";
    for (const auto& elemento : miVector) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    // Utilizar la función max_element para encontrar el elemento más grande
    auto iteradorMax = std::max_element(miVector.begin(), miVector.end());

    // Imprimir el elemento más grande
    if (iteradorMax != miVector.end()) {
        std::cout << "Elemento mas grande: " << *iteradorMax << std::endl;
    } else {
        std::cout << "El vector está vacio." << std::endl;
    }

    return 0;
}
