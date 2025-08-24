/*
 * Template Classes
 */

#include <iostream>

template <typename T>

class Entity {
    T x, y; // xy coords of entity
public:
    Entity(T x_pos, T y_pos): x(x_pos), y(y_pos) {}

    void print_pos() {
        std::cout << "Position: (" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    Entity<int> enemy(1843, 524);
    std::cout << "Enemy ";
    enemy.print_pos();

    Entity<float> treasure(120.5f, 78.9f);
    std::cout << "Treasure ";
    treasure.print_pos();

    return 0;
}