/*
 * Functions - Not many notes here as same concept in all languages
 *
 * Function signature:
 * * Uniquely identifies it within scope
 * * Consists of the function name + its parameter types
 * * Return type not included
 * * Signature (therefor function) must be unique
 */
#include <cstdio>

// Declaring the function like this allows us to put it anywhere in the file
double calculate_score(int level, double time_taken);

int main() {
    double result = calculate_score(65, 3.67);
    printf("calculate_score result: %f \n", result);

}

double calculate_score(int level, double time_taken) {
    level *= 1000;
    return level / time_taken;
}