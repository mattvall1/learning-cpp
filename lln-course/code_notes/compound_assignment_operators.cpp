/*
 * Compound assignment operators
 */

#import <cstdio>

int main() {
    int ammo = 30;
    int incoming_adversaries = 24;

    printf("Initial ammo: %d \n", ammo);
    printf("Incoming enemies: %d \n\n", incoming_adversaries);

    // Addition assignment
    ammo += 1;
    printf("Ammo add 1: %d \n", ammo);

    // Subtraction assignment
    ammo -= 1;
    printf("Ammo subtract 1: %d \n", ammo);

    // Multiplication assignment
    incoming_adversaries *= 2;
    printf("Adversaries times 2: %d \n", incoming_adversaries);

    // Division assignment
    incoming_adversaries /= 2;
    printf("Adversaries divide 2: %d \n", incoming_adversaries);

    // Remainder assignment
    incoming_adversaries %= 7;
    printf("Adversaries Remainder 6: %d \n", incoming_adversaries);

    return 0;
}