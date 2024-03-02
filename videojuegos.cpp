#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

class Videojuego {
public:
    std::string nombre;
    int ranking;

    Videojuego(std::string n, int r) : nombre(n), ranking(r) {}

    // Sobrecarga del operador < para ordenar los videojuegos por ranking
    bool operator < (const Videojuego& v) const {
        return ranking < v.ranking;
    }
};

int main() {
    // Crear un vector de videojuegos
    std::vector<Videojuego> videojuegos = {
        Videojuego("The Legend of Zelda: Breath of the Wild", 1),
        Videojuego("Super Mario Odyssey", 2),
        Videojuego("Red Dead Redemption 2", 3),
        Videojuego("The Witcher 3: Wild Hunt", 4),
        Videojuego("God of War", 5)
    };

    // Ordenar los videojuegos por ranking
    std::sort(videojuegos.begin(), videojuegos.end());

    // Imprimir los videojuegos en orden de ranking
    for(const Videojuego& v : videojuegos) {
        std::cout << "Nombre: " << v.nombre << ", Ranking: " << v.ranking << std::endl;
    }

    return 0;
}
