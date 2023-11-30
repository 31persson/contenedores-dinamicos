#include <iostream>
#include <vector>
#include <memory>

int main() {
    auto cuadrado = [](int num) { return num * num; };

    std::cout << "Cuadrado de 5: " << cuadrado(5) << std::endl;

    std::vector<int> numeros = {1, 2, 3, 4, 5};
    std::for_each(numeros.begin(), numeros.end(), [](int num) {
        std::cout << num << std::endl;
    });

    std::shared_ptr<int> ptr(new int(10));
    std::cout << "Valor apuntado por ptr: " << *ptr << std::endl;

    return 0;
}