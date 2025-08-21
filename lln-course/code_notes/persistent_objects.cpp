/*
 * Creating persistent objects
 */

#include <iostream>

struct Person {
    int health;
    int strength;
};

Person* create_person(int health, int strength) {
    Person* new_person = new Person; // Allocate on heap
    new_person->health = health;
    new_person->strength = strength;
    return new_person; // Return pointer to heap-allocated object
}

int main(){
    Person* bot = create_person(100, 50);
    printf("Bot's health: %d \n", bot->health);
    printf("Bot's strength: %d \n", bot->strength);
    delete bot; // Free allocated memory

    return 0;
}