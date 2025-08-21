/*
 * Pointers
 * * Hold memory addresses
 * * Can point to any data type
 * * NULL -> nullptr: legacy -> modern C++ (provides type safety and avoids ambiguity)
 * * * 'nullptr' is a constant of its own type, 'NULL' is just int value of 0
 * * Dereference points to access data using '*' - don't use with NULL/nullptr
 */

#include <cstdio>

int main() {
    int a = 37; // Assigned 37 could be at any memory location
    int *ptr; // Pointers are variables - allocated at some memory location

    // Set to null (nullptr = constant that indicates null)
    ptr = nullptr; // This does not point to any valid memory location

    // ptr -> a
    ptr = &a;

    printf("Value of a: %d \n", a);
    printf("ptr point to address: %p \n", ptr);
    printf("Address of a: %p \n", &a);
    printf("Value where ptr is pointing: %d \n", *ptr);
    printf("Address of ptr: %p \n", &ptr);



}