#include <iostream>
#include <vector>

int main() {
    // Crear un vector de enteros
    std::vector<int> miVector;

    // Añadir elementos al vector usando push_back
    miVector.push_back(10);
    miVector.push_back(20);
    miVector.push_back(30);
    miVector.push_back(40);
    miVector.push_back(50);

    // Utilizar un iterador para recorrer y mostrar cada elemento del vector
    std::cout << "Elementos del vector:" << std::endl;

    for (std::vector<int>::iterator it = miVector.begin(); it != miVector.end(); ++it) {
        std::cout << *it << " ";
    }

    // También puedes usar un bucle for-each (disponible desde C++11)
    /*
    for (const auto& elemento : miVector) {
        std::cout << elemento << " ";
    }
    */

    std::cout << std::endl;

    return 0;
}
