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

int main() {

    int func_result = add_int(2.1, 3.9, 4.6);

    std::cout << func_result << std::endl;

    return 0;
}