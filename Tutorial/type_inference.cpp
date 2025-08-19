/*
 * Type inference
 * * A convenient way of creating variable with type that suits value assigned (like non-strict type PHP)
 * * Must be initialized at declaration
 */

#include <iostream>

int main() {
    auto score;
    auto points;
    auto height;
    auto duration;
    auto is_active;
    auto initial;
    auto title;



    std::cout << "Score type: " << typeid(score).name() << std::endl;
    std::cout << " type: " << typeid(points).name() << std::endl;
    std::cout << " type: " << typeid(height).name() << std::endl;
    std::cout << " type: " << typeid(duration).name() << std::endl;
    std::cout << " type: " << typeid(is_active).name() << std::endl;
    std::cout << " type: " << typeid(initial).name() << std::endl;
    std::cout << " type: " << typeid(title).name() << std::endl;

    return 0;
}
