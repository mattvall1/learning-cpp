/*
 * Using type casting
 */

#include <iostream>

int main() {
    int farenheit = 100;
    int celsius;

    // If we just have '5 / 9', C++ reads as constant expression - compiler takes care of this so code cannot execute it
    //       |   cast 5 to float   |  cast 9 to double |
    celsius = static_cast<float>(5) / 9.0 * (farenheit - 32);

    std::cout << "Farenheit: " << farenheit << std::endl;
    std::cout << "Celsius  : " << celsius << std::endl;
    std::cout << std::endl;

    // Variables can be declared anywhere like Java/Python
    float weight = 10.99;

    std::cout << "Float          : " << weight << std::endl;
    std::cout << "Int part       : " << static_cast<int>(weight) << std::endl;
    std::cout << "Fractional part: " << (int)((weight - (int)weight) * 10000)  << std::endl; // Traditional casts

    return 0;
}