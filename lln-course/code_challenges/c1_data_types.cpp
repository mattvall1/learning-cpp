// Code challenge 1 - Data types
#include <iostream>
#include <cstdint>

int add_int(float a, double b, long double c) {
    int result = 0;

    a = static_cast<int32_t>(a);
    b = static_cast<int32_t>(b);
    c = static_cast<int32_t>(c);

    result = a + b + c;

    return result;
}

// This is the actual solution, works the same way but it's C not C++ casting
int add_int_solution(float a, double b, long double c) {
    int result = 0;

    result = (int) a + (int) b + (int) c;

    return result;
}

int player_pos() {

    int func_result = add_int(2.1, 3.9, 4.6);

    std::cout << func_result << std::endl << std::endl;

    int func_result_s = add_int_solution(2.1, 3.9, 4.6);

    std::cout << func_result_s << std::endl;

    return 0;
}