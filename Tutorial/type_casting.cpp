/*
 * Type casting
 * * Specifying how to interpret a piece of data
 * * useful for converting data types
 * * i.e. convert int32_t to float
 * * Use either of these options - but C++ better because its cleaner, and safer
 * * * C-Style cast: (float)(expression)
 * * * C++-Style cast: static_cast<float>(expression)
 */

#include <iostream>
#include <cstdint>

int main() {
    float target_x;
    int32_t sprite_x;
    uint32_t player_x;

    target_x = -583.54f;
    sprite_x = target_x; // Implicit type conversion (float to int, value gets truncated)
    player_x = sprite_x; // Number copied as is - negative number to unsigned variable not reasonable

    std::cout << "Target X (float): " << target_x << std::endl;
    std::cout << "Sprite X (int32_t): " << sprite_x << std::endl;
    std::cout << "Player X (uint32_t): " << player_x << std::endl; // Two's complement representation of -583 - stored as unsigned number
    std::cout << "Player X (uint32_t) cast to int32_t (signed int): " << static_cast<int32_t>(player_x) << std::endl; // Two's complement representation of -583 - stored as unsigned number


    std::cout << std::endl << std::endl;
    return 0;
}