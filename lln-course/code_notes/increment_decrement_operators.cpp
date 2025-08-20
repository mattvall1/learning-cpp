/*
 * Increment and decrement operators
 */

#include <iostream>
#include <cstdio>

int main() {
    int player_score = 10;
    int player_lives = 3;

    std::cout << "Initial Score: " << player_score << std::endl;
    std::cout << "Initial Lives: " << player_lives << std::endl;

    // Postfix increment
    int ps_postfix_increment = player_score++;
    printf("Postfix increment:  %d \n", ps_postfix_increment);

    // Prefix increment
    int ps_prefix_increment = ++player_score;
    printf("Prefix increment: %d \n", ps_prefix_increment);

    // Postfix decrement
    int pl_postfix_decrement = player_lives--;
    printf("Postfix decrement: %d \n", pl_postfix_decrement);

    // Prefix decrement
    int pl_prefix_decrement = --player_lives;
    printf("Prefix decrement: %d \n", pl_prefix_decrement);

    return 0;
}
