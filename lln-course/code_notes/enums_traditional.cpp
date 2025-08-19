/*
 * Enumerators are a list of named integer constraints
 ** Inappropriate for C++ mostly, as these are not for OOP
 ** Operate in global scope - may cause name duplicates
 ** Allow implicit conversions from enum to int - safety hazard
 *
 * Enum classes
 ** strongly typed enums
 ** encapsulated in class scope
 ** strongly typed - safety enforced, reducing errors
 *
 */

#include <iostream>
#include <cstdint>


// Assigned ints:   0       1        2        3
enum asset_type {texture, sound, animation, script};
// ^ Global variables should be used SPARINGLY and preferably NOT AT ALL

// Assigned ints:   0           1       2        3        4
enum menu_section {background, music, sound, controls, texture};


int main() {
    int sound = 8; // Duplicated identifier for sound
    int asset_value;

    asset_value = sound; // This has been assigned 8 in local func - compiler assumes sound var is what we want here

    std::cout << "asset_value = " << asset_value << std::endl;

    std::cout << std::endl << std::endl;

    return 0;
}


