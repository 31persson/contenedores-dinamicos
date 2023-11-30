#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

// Función lambda para calcular el cuadrado de un número
auto cuadrado = [](int x) { return x * x; };

int main() {
    // Crear un vector de enteros
    std::vector<int> numeros = {1, 2, 3, 4, 5};

    // Utilizar for_each con una expresión lambda para imprimir el cuadrado de cada elemento
    std::cout << "Cuadrados de los números:" << std::endl;
    std::for_each(numeros.begin(), numeros.end(), [](int num) {
        std::cout << cuadrado(num) << " ";
    });
    std::cout << std::endl;

    // Utilizar punteros inteligentes (std::unique_ptr) para gestionar la memoria
    std::unique_ptr<std::vector<int>> ptrNumeros = std::make_unique<std::vector<int>>({10, 20, 30});

    // Imprimir los elementos del vector utilizando for_each con una expresión lambda
    std::cout << "Elementos del vector con puntero inteligente:" << std::endl;
    std::for_each(ptrNumeros->begin(), ptrNumeros->end(), [](int num) {
        std::cout << num << " ";
    });
    std::cout << std::endl;

    // ptrNumeros se liberará automáticamente cuando salga del ámbito

    return 0;
}
