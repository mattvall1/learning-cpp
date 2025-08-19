/*
 * Some expression types
 */

#include <iostream>

int main() {
    int a = 5; // Declaration stmt
    int b = 6; // Declaration stmt
    int c = a + b; // Declaration stmt with expression

    if (c > 5) { // Conditional stmt with expression
        // Both ways of printing
        printf("c is greater than 5\n");
        std::cout << "c is greater than 5";
    }

    return 0; // Ends function and returns 0
}
