/*
 * Qualifiers specify additional properties/constraints on vars, funcs, data types
 */

#include <iostream>
#include <string>


const int max_health = 100; // Constant values cannot be modified
constexpr int max_level = 99; // Constant values are evaluated at compile time
static int id = 14; // Static NOT a qualifier, it is a specifier. static extends lifetime to entire duration of program
volatile int enemy_status; // Volatile values can be changed at any time (generally for working with hardware registers)
// Mutable is used in a class - can be modified even in a const member function

void display_score(const std::string& player_name) { // const in func param - cannot be modified in func
    std::cout << "Player: " << player_name << std::endl;
}

// inline means compiler may insert into calling code, to reduce overhead of function call
inline int calculate_damage(int base_damage, int modifier) {
    return base_damage + modifier;
}

// constexpr can also be used on functions, evaluated at compile if given constant args
constexpr int calculate_experience(int level){
    return level * level * 100;
}

// Qualifiers can be combined for specific constraints
constexpr int calculate_max_speed(int base_speed, int boost){
    return base_speed + boost * 5;
}

int main() {
    std::string name = "Hero";
    display_score(name);

    int total_damage = calculate_damage(50, 10);
    std::cout << "Total Damage: " << total_damage << std::endl;

    int exp = calculate_experience(5);
    std::cout << "Experience for level 5: " << exp << std::endl;

    // Combined qualifiers (const expression and const variable)
    constexpr const int max_speed = calculate_max_speed(60, 7);
    std::cout << "Max speed: " << max_speed << std::endl;


    return 0;
}