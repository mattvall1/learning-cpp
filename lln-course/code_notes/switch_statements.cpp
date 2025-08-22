/*
 * Switch statements
 */

#include <iostream>

// Quick and dirty calculator app!
int main() {
    float oper_1, oper_2, result;
    char operation;

    printf("Enter operand 1: ");
    std::cin >> oper_1;
    printf("\nEnter operand 2: ");
    std::cin >> oper_2;
    printf("\nEnter operation (+ - * /): ");
    std::cin >> operation;

    switch (operation){
        case '+':
            result = oper_1 + oper_2;
            break;
        case '-':
            result = oper_1 - oper_2;
            break;
        case '*':
            result = oper_1 * oper_2;
            break;
        case '/':
            result = oper_1 / oper_2;
            break;
        default:
            printf("Invalid");
            break;
    }

    printf("\nResult:  %f", result);

    return 0;
}