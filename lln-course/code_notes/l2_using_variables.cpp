/*
* Using datatypes
 */
#include <iostream>

int a, b = 5; // General should avoid global variables,

int main() {
    bool flag;
    a = 7;
    flag = false;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << flag << std::endl;

    flag = true;

    std::cout << "flag = " << flag << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "b - a = " << b - a << std::endl;

    // unsigned int
    unsigned int positive; // Two's complement representation of -2 in binary
    positive = b - a;

    std::cout << "unsigned b - a = " << positive << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}