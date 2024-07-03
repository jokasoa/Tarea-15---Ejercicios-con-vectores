#include <vector>
#include <iostream>

// Función que imprime una barra vertical por cada elemento del vector
void imprimirBarras(const std::vector<int>& vector) {
    for (int elemento : vector) {
        for (int i = 0; i < elemento; ++i) {
            std::cout << "* ";
        }
        std::cout << "(" << elemento << ")" << std::endl;
    }
}

int main() {
    // Vector con los elementos dados
    std::vector<int> X = {10, 12, 6, 7, 15, 7, 9, 19};

    // Imprimir barras
    imprimirBarras(X);

    return 0;
}
