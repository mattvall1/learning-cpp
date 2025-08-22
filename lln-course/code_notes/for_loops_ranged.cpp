/*
 * For loops ranged
 */

#include <iostream>
#include <vector>

int main() {
    std::vector<int> times = {92, 89, 81, 87, 80, 95};
    float avg = 0.0f;

    // Use for loop to add times together
    for(auto x : times) // Copies each element into loop. Fine for this, not good for long data
        avg += x;

    // Average size of times
    avg /= times.size();

    printf("Average time: %f", avg);
    return 0;
}