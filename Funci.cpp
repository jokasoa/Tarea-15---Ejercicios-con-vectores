#include <vector>
#include <iostream>

// Declaración de las funciones
int calcularSumatoria(const std::vector<int>& vector);
double calcularPromedio(const std::vector<int>& vector);

int main() {
    // Ejemplo de vector
    std::vector<int> vector = {1, 2, 3, 4, 5};

    // Calcular la sumatoria
    int sumatoria = calcularSumatoria(vector);
    std::cout << "La sumatoria es: " << sumatoria << std::endl;

    // Calcular el promedio
    double promedio = calcularPromedio(vector);
    std::cout << "El promedio es: " << promedio << std::endl;

    return 0;
}

// Definición de las funciones
int calcularSumatoria(const std::vector<int>& vector) {
    int sumatoria = 0;
    for (int elemento : vector) {
        sumatoria += elemento;
    }
    return sumatoria;
}

double calcularPromedio(const std::vector<int>& vector) {
    if (vector.empty()) {
        return 0;
    }
    int sumatoria = calcularSumatoria(vector);
    double promedio = static_cast<double>(sumatoria) / vector.size();
    return promedio;
}
