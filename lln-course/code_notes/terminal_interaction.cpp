/*
 * First code written alongside course. Note that l1, l2... denotes the chapters
 */

#include <iostream>
#include <string>

int main() {
    // Setup variable
    std::string name;

    // Flush makes sure output is sent to terminal before waiting for user input (endl does by default)
    std::cout << "Enter your name: " << std::flush;
    // Rightbound (>>) targets variable with user input
    std::cin >> name;
    std::cout << "Nice to meet you, " << name << "!" << std::endl;

    // Print output, add two end lines
    std::cout << std::endl << std::endl;

    return 0;
}