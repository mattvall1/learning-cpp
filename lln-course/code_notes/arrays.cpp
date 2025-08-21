/*
 * Arrays
 *
 * Elements
 * * Homogeneous - all the same datatype
 * * Fixed size - not resizable
 * * Continuous in memory (sequential block of memory addresses)
 */

#include <iostream>


int main() {
    const size_t LEVELS = 4;
    // Datatype, name, [capacity]
    int people[LEVELS];

    // Assign values - does not need to fill all slots
    people[0] = 10;
    people[1] = 15;
    people[2] = 20;
    people[3] = 25;

    // Initialise at declaration, use curly brackets
    float level_difficulty[] = {1.0, 2.1, 3.5, 10.5}; // List of doubles as no 'f' on each value

    printf("People array elements: %d, %d, %d, %d \n", people[0], people[1], people[2], people[3]);
    printf("Level difficulty (initialized at declaration): %f, %f, %f, %f \n", level_difficulty[0], level_difficulty[1], level_difficulty[2], level_difficulty[3]);



    return 0;
}