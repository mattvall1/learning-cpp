/*
 * If statements
 * This file includes regular if statements and ternary ones.
 * Note: There is lots of 'always true/false errors as this is just examples!
 */

#include <iostream>

int main() {
    int score = 1049;
    bool paused = false;
    char action = 'x';

    if (score >= 1000)
        printf("Score over 1000\n");
    else
        printf("Score not over 1000\n");


    if (score % 2 == 0)
        printf("Score is even\n");
    else
        printf("Score is odd\n");

    if (action != 'w' && action != 'a' && action != 's' && action != 'd') printf("Action is not ");
    printf("a movement key \n");

    if (paused)
        printf("Game paused.\n");
    else
        printf("Game not paused.\n");

    // In-line = Ternary
    int one_two = !paused ? 1 : 2;

    return 0;
}