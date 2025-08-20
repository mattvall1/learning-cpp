/*
 * Pre-processor directives
 * * Code is pre-processed prior to compiling
 * * Directives tell the pre-processor what to add/remove in code
 *
 * Constants as directives (such as 'MAX_AMMO' here) is discouraged
 * * Considered bad practice
 * * Macros don't have a context
 * * No compiler enforcement of features like types and syntax correctness
 * * IMPORTANT: Should use const on regular variables instead of these
 */

// These are directives to insert code into the file
#include <iostream>
#include <cstdint> // Note: C++ version of C header file for defining integer types

// Define a constant (this does find+replace), the pre-processor replaces every 'MAX_AMMO' with the value
#define MAX_AMMO 1000 // Define in capital letters (for readability)
#define DEBUG


int main() {
    // IF/ELSE conditionals - work with #defined directives. If 'DEBUG' is defined, the following code is included
    #ifdef DEBUG
        printf("[DEBUG] Starting game...\n");
    #endif

    int32_t ammo = MAX_AMMO / 10; // Signed 32-bit integer (MAX_AMMO replaced by value, calculated by pre-processor)
    uint8_t health_items = 6; // Unsigned 8-bit integer

    ammo += 200; // Player finds ammo
    health_items -= 1; // Player uses health item

    printf("Remaining ammo: %d \n", ammo);
    printf("Remaining health items: %d \n", health_items);

    return 0;
}