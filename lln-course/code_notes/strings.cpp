/*
 * Strings
 * * Not native (part of class)
 * * Arrays of charactars
 * * 'std::string' class is standard and is widely used
 * * Strings need to be ended with a NULL character
 */

#include <cstdio>
#include <cstring>

int main() {
    const size_t LENGTH = 50;
    char user_1[] = "Fast"; // Native constant strings - A sequence of ASCII chars terminated by 0
    char user_2[LENGTH];
    char result[LENGTH * 2];

    // Copy string into buffer (string copy)
    strncpy(user_2, "Aidan", sizeof(user_2) - 1);
    user_2[sizeof(user_2) - 1] = '\0'; // Null character added onto end

    printf("User 1: %s \n", user_1);
    printf("User 2: %s \n", user_2);

    strncpy(result, "The result is: ", sizeof(result) - 1);
    result[sizeof(result) - 1] = '\0'; // Null character added onto end

    // Concatenate strings  | Max. num chars = buffer - str len - 1 |
    strncat(result, user_1, sizeof(result) - strlen(result) - 1);

    printf("%s \n", result);

    return 0;
}