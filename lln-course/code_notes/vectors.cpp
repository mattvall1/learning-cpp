/*
 * Vectors (SDL Vectors)
 * * Effectively a better array
 * * Dynamic-size containers
 * * * Resizable
 * * Automatic memory management
 * * Generic container class
 * * * Can take any type of element
 * * Part of standard template library (C++ Standard library)
 */

#include <vector>
#include <cstdio>
#include <string>

int main() {
    // Defining a vector
    std::vector<std::string> locations = {"Forest", "Library", "Restaurant"};

    // Vectors have front/back-end. Elements only added via back-end as guaranteed to store elements consecutively
    // 'emplace_back' directly inserts objects. 'push_back' is more expensive
    locations.emplace_back("Saloon");
    locations.emplace_back("Supermarket");

    // Vector size
    printf("The number of locations is: %lu \n", locations.size());

    // Update element
    locations[2] = "Book Store";
    printf("Updated element: %s \n", locations[2].c_str()); // 'c_str' converts C++ string to C string (printf is C-style)



}