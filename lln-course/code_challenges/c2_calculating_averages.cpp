// Code challenge 2 - Calculate an Average
#include <iostream>
#include <cstdint>

double my_average(int a, int8_t b, uint32_t c){
    double result = 0.0;

    result = a + b + static_cast<int32_t>(c);
    result = result / 3; // '3' completes integer division, so works separately after conversion. But the provided solution is better

    return result;
}

double my_average_solution(int a, int8_t b, uint32_t c){
    double result = 0.0;

    result = (a + b + c) / 3.0; // 3.0 returns double here - better solution than mine

    return result;
}

int main() {
    int a = 10;
    int8_t b = 21;
    uint32_t c = 30;

    double result = my_average(a, b, c);

    printf("Result: %f \n", result);

    double result_s = my_average(a, b, c);

    printf("Solution result: %f \n", result_s);

    return 0;
}