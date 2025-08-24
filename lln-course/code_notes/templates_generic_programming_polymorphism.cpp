/*
* Generic Programming
* * A paradigm where data types are not specified in the implementation of code, but rather in its use.
*
*
* Also known as Compile-Time Polymorphism
* * Specifying data types at variable definition, or object instantiation is in essence polymorphism resolved at compile time
* * Could be more efficient than runtime polymorphism because most calculations/adaptations happen once when app is being built
*
*
* Templates
* * Same idea as Word/PowerPoint templates
*/

#include <iostream>

template <typename T> // 'T' serves as parameter in template

// This has been defined generically, meaning wwe can use it for different datatypes later
int size_in_bits(T a) {
    return sizeof(a) * 8;
}

int main() {
    std::cout << size_in_bits(21) << std::endl;
    std::cout << size_in_bits('f') << std::endl;
    std::cout << size_in_bits(32.1f) << std::endl;
    std::cout << size_in_bits(32.1) << std::endl;
    return 0;
}