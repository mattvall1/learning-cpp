/*
 * Strings class
 * The OOP approach to strings embedded in C++
 * Note: This is a copy of 'strings.cpp', but updated to use the strings class, much better!
 *
 * The strings class manages string length automatically
 */

#include <cstdio>
#include <string>

int main() {
    std::string user_1 = "Fast";
    std::string user_2 = "Aidan";
    std::string result;

    printf("User 1: %s \n", user_1.c_str());
    printf("User 2: %s \n", user_2.c_str());

    result = "The result is: " + user_1;

    printf("%s \n", result.c_str());

    return 0;
}