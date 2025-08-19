/*
 * Enum classes - duplicated code of 'enums_traditional' but using class enums, not regular ones
 */

#include <iostream>
#include <cstdint>


// Assigned ints:   0       1        2        3
enum class asset_type {texture, sound, animation, script};

// Assigned ints:   0           1       2        3        4
enum class menu_section {background, music, sound, controls, texture};


int main() {
    int sound = 8; // Duplicated identifier for sound - this is ignored no we are using enum classes correctly
    asset_type asset_value;

    asset_value = asset_type::sound;

    std::cout << "asset_value = " << (int) asset_value << std::endl;

    std::cout << std::endl << std::endl;

    return 0;
}


