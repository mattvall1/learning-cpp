/*
 * Using Objects with Pointers
 * * Dynamic memory management
 * * * Most apps create objects in memory as needed throuhout app (during rutime)
 * * * Happens in heap
 * * C++ makes it easy to allocate and free memory
 * * * Pointers supported by language to dynamically allocate memory for new objects
 */

#include <iostream>
#include <string>
#include <chrono>


// Type aliases for chrono
using Clock = std::chrono::system_clock;
using TimePoint = std::chrono::time_point<Clock>;
using Duration = std::chrono::duration<double>;

int main() {
    TimePoint *start, *end; // Manage dynamically - '*' = pointers
    Duration *elapsed_time = new Duration();
    std::string input;

    start = new TimePoint(Clock::now());

    printf("Type 'start' as fast as you can: ");
    std::cin >> input; // No validation as is example

    end = new TimePoint(Clock::now());

    *elapsed_time = *end - *start;

    // Point to function in object with '->'
    printf("\nReaction time: %fs \n", elapsed_time->count());

    // Delete objects to free memory
    delete start;
    delete end;
    delete elapsed_time;

    return 0;
}

