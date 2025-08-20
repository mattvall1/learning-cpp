/*
 * Type inference
 * * A convenient way of creating variable with type that suits value assigned (like non-strict type PHP) - It cannot be changed automatically after creation
 * * Must be initialized at declaration
 */

#include <iostream>

int player_pos() {
    auto score = 9; // Int
    auto points = 19314858291984221; // Int over 32-bit
    auto height = 6.3f; // Float (f = constant specifier for floats)
    auto duration = 90.0; // Float (no trailing f - double by default)
    auto is_active = true; // Boolean
    auto initial = 'P'; // Char
    auto title = "Soccar Champions"; // String



    std::cout << "Score type: " << typeid(score).name() << std::endl;
    std::cout << "Points type: " << typeid(points).name() << std::endl;
    std::cout << "Height type: " << typeid(height).name() << std::endl;
    std::cout << "Duration type: " << typeid(duration).name() << std::endl;
    std::cout << "Is active type: " << typeid(is_active).name() << std::endl;
    std::cout << "Initial type: " << typeid(initial).name() << std::endl;
    std::cout << "Title type: " << typeid(title).name() << std::endl;

    return 0;
}
