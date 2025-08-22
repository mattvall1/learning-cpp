/*
 * Default arguments on functions
 */

#include <cstdio>

int calculate_area(int depth = 30, int width = 50, int height = 100){
    return depth * width * height;
}

int main() {
    printf("Default: %d\n", calculate_area());
    printf("One arg: %d\n", calculate_area(5));
    printf("All args: %d\n", calculate_area(10, 20, 30));

    return 0;
}
