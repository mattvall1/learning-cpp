/*
 * Understanding datatypes
 */
#include <iostream>

int main() {
    int a = 1; // Integer (typically 32-bit can be 16-bit if architecture is 32-bit)
    char b = 'b'; // Integer (designed to represent single ASCII characters)
    std::string c = "I'm a String"; // Strings are arrays of characters, so come in a class
    bool tf = true; // Boolean
    float d = 1.1; // Floating point (single precision)
    double e = -11.23; // Floating point (double precision = greater accuracy)
    long double ea = 1.23456; // Floating point extended range (for extreme precision)
    int f = 5; // Regular int
    int* g = &f; // ^ Stores memory address of e

    std::cout << a;
    printf("\n");
    std::cout << b;
    printf("\n");
    std::cout << c;
    printf("\n");
    std::cout << tf;
    printf("\n");
    std::cout << d;
    printf("\n");
    std::cout << e;
    printf("\n");
    std::cout << ea;
    printf("\n");
    std::cout << g;
    return 0;
}
