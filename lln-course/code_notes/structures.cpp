/*
 * Structures
 * * Containers of heterogeneous data members - can group integers, strings, and other objects into one structure
 * * Useful for implementing simple models only requiring data members
 */

#include <iostream>
#include <string>

enum class character_role {protagonist, antagonist, sidekick, npc};

struct game_character {
    std::string name;
    int level;
    character_role role;

};

int main() {
    game_character dude;
    dude.name = "Aidan";
    dude.level = 10;
    dude.role = character_role::sidekick;

    // Print dude details
    std::cout << dude.name << " is a level " << dude.level << " character with the role of " << (int) dude.role << std::endl;


    std::cout << std::endl << std::endl;
    return 0;
}