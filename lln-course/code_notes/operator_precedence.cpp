/*
 * Operator precedence examples
 *
 * Important notes:
 * * Use brackets for clarity
 * * Avoid complex expressions - these can be broken down for readibility
 * * Follow consistent style guide
 */

#include <iostream>

int player_score() {
    int level = 5;
    int enemies_defeated = 20;
    int bonus_points = 50;
    // Multiplication operations have higher precedence than addition
    //          |            This first            |  This second  |
    int score = level * 100 + enemies_defeated * 10 + bonus_points;
    std::cout << "Player Score: " << score << std::endl;
    return 0;
}

int player_pos() {
    int x = 10, y = 20;
    int dx = 3, dy = 4;
    // Multiplication first, then the result of that is added by += operator
    x += dx * 2;
    y += dy * 2;
    std::cout << "Player Position: (" << x << ", " << y << ")" << std::endl;
    return 0;
}

int game_over_check() {
    int health = -0;
    // <= has higher precedence than =, so 'health <= 0' evaluated first, then assigned to variable
    bool is_game_over = (health <= 0); // Note: condition always true - this is just an example
    std::cout << "Game Over: " << (is_game_over ? "Yes" : "No") << std::endl;
    return 0;
}

int combat_scenario() {
    int base_damage = 50;
    int strength = 20;
    int critical_hit_multiplier = 2;
    // division 'strength / 10' calculated first, as highest precedence then rest is calculated left to right
    int damage_dealt = base_damage * (strength / 10 + 1) * critical_hit_multiplier;
    std::cout << "Damage dealt: " << damage_dealt << std::endl;
    return 0;
}

int main() {
    player_score();
    player_pos();
    game_over_check();
    combat_scenario();

    return 0;
}

