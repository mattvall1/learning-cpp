/*
 * Template functions
 */

#include <iostream>

template <typename T> // 'T' is a placeholder for any datatype

// This has been defined generically, meaning wwe can use it for different datatypes later
int size_in_bits(T a) {
    return sizeof(a) * 8;
}

int main() {
    std::cout << size_in_bits(21) << std::endl; // int
    std::cout << size_in_bits('f') << std::endl; // char
    std::cout << size_in_bits(32.1f) << std::endl; // float
    std::cout << size_in_bits(32.1) << std::endl; // double

    std::cout << "------------------" << std::endl; // Separator
    std::cout << size_in_bits((short)42) << std::endl; // short
    std::cout << size_in_bits(1912135246357466546L) << std::endl; // long
    std::cout << size_in_bits(std::string("Strings are not default data types")) << std::endl; // String
    std::cout << size_in_bits(true) << std::endl; // bool

    return 0;
}