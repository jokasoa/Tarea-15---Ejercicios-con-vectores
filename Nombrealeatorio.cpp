#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <ctime>

// Función que retorna un nombre aleatorio del vector
std::string obtenerNombreAleatorio(const std::vector<std::string>& nombres) {
    // Verifica que el vector no esté vacío
    if (nombres.empty()) {
        return "El vector está vacío.";
    }

    // Inicializa el generador de números aleatorios con una semilla basada en el tiempo actual
    std::default_random_engine generador(static_cast<unsigned int>(std::time(nullptr)));
    std::uniform_int_distribution<size_t> distribucion(0, nombres.size() - 1);

    // Genera un índice aleatorio
    size_t indiceAleatorio = distribucion(generador);

    // Retorna el nombre en el índice aleatorio
    return nombres[indiceAleatorio];
}

int main() {
    // Vector con nombres de personas
    std::vector<std::string> nombres = {"Pepe", "Carlos", "Carla", "Gustavo", "Anna", "Frank", "Caicedo", "Jeremy"};

    // Obtener y mostrar un nombre aleatorio
    std::string nombreAleatorio = obtenerNombreAleatorio(nombres);
    std::cout << "Nombre aleatorio: " << nombreAleatorio << std::endl;

    return 0;
}
