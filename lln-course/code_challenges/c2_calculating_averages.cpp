// Code challenge 2 - Calculate an Average
#include <iostream>
#include <cstdint>

double my_average(int a, int8_t b, uint32_t c){
    double result = 0.0;

    result = a + b + static_cast<int32_t>(c);
    result = result / 3;

    return result;
}

int main() {
    int a = 10;
    int8_t b = 21;
    uint32_t c = 30;

    double result = my_average(a, b, c);

    printf("Result: %f \n", result);

    return 0;
}