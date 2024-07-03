#include <iostream>
#include <vector>

// Función que invierte el orden de los elementos de un vector
void invertirVector(std::vector<int>& vector) {
    size_t n = vector.size();
    for (size_t i = 0; i < n / 2; ++i) {
        // Intercambia el elemento en la posición i con el elemento en la posición n-i-1
        std::swap(vector[i], vector[n - i - 1]);
    }
}

int main() {
    // Ejemplo de vector
    std::vector<int> vector = {10, 12, 6, 7, 15, 7, 9, 19};

    // Imprimir vector original
    std::cout << "Vector original: ";
    for (int elemento : vector) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    // Invertir el vector
    invertirVector(vector);

    // Imprimir vector invertido
    std::cout << "Vector invertido: ";
    for (int elemento : vector) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    return 0;
}
