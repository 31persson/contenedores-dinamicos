#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Crear un vector de enteros
    std::vector<int> numeros = {50, 20, 60, 10, 30, 40};

    // Ordenar los elementos del vector en orden ascendente
    std::sort(numeros.begin(), numeros.end());

    // Imprimir los elementos ordenados del vector
    std::cout << "Elementos ordenados:" << std::endl;
    for (int num : numeros) {
        std::cout << num << std::endl;
    }

    // Encontrar el número máximo en el vector
    if (!numeros.empty()) {
        int maxNum = *std::max_element(numeros.begin(), numeros.end());
        std::cout << "Numero maximo: " << maxNum << std::endl;
    } else {
        std::cout << "El vector está vacio." << std::endl;
    }

    return 0;
}
