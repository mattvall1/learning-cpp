// Complete Guide to C++ Programming Foundations
// Exercise 04_04
// Using Objects with Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <chrono>

// Type aliases for chrono classes
using Clock = std::chrono::system_clock;
using TimePoint = std::chrono::time_point<Clock>;
using Duration = std::chrono::duration<double>;

int main(){
    TimePoint start, end;
    Duration elapsed_seconds;
    std::string input;

    start = Clock::now();

    std::cout << "Type 'start' as quickly as you can and hit ENTER: " << std::flush;
    std::cin >> input;

    end = Clock::now();
    elapsed_seconds = end - start;

    std::cout << "Reaction time: " << elapsed_seconds.count() << "s" << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
