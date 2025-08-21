/*
 * Smart pointers
 * * Smart pointers manage dynamic memory automatically
 * * No need to manage deletions etc
 * * std::unique_ptr and std::shared_ptr
 * * * Manage dynamic memory automatically
 * * * No other pointer may access these objects
 */

#include <iostream>
#include <memory> // Smart pointers are in memory header

struct Enemy {
    int health;
    int attack_power;
};

int main() {
    std::unique_ptr<Enemy> boss = std::make_unique<Enemy>();
    boss->health = 200;
    boss->attack_power = 40;

    printf("Boss Health: %d \n", boss->health);
    printf("Boss Attack Power: %d \n", boss->attack_power);

    // No need to manually delete; std::unique_ptr takes care of it
    return 0;
}