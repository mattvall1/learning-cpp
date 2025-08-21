/*
 * How arrays and pointers relate
 * * Contents of array are mutable, array variable is not in this example
 */

#include <cstdio>

int main() {
    int high_scores[] = {987, 244, 741, 852};
    int* score_pointer = &high_scores[0]; // Initialized to address of array

    printf("Initial high score: %d \n", *score_pointer); // Display first pointer

    // This does not modify pointer itself, calculates an offset. use '++score_pointer' to increment
    printf("Second high score: %d \n", *(score_pointer + 1));
    // Square brackets point to exact array item
    printf("Second high score: %d \n", score_pointer[2]);

    return 0;
}