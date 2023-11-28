#include <iostream>
#include <vector>

int main() {
    // Crear un vector de enteros
    std::vector<int> miVector;

    // Añadir elementos al vector mediante push_back
    miVector.push_back(10);
    miVector.push_back(20);
    miVector.push_back(30);
    miVector.push_back(40);

    // Utilizar un iterador para recorrer y mostrar cada elemento del vector
    std::cout << "Elementos del vector: ";
    for (std::vector<int>::iterator it = miVector.begin(); it != miVector.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
