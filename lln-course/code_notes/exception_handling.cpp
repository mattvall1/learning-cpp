/*
 * Exception handling
 * try/catch syntax
 */
#include <iostream>

double divide(int a, int b){
    if (b == 0) {
        // Throw an invalid argument exception
        throw std::invalid_argument("Division by zero is not allowed.");
    }
    return static_cast<double>(a) / b;
}

int main(){
    try {
        int x = 10, y = 0; // y = 0, so this will cause an error
        double result = divide(x, y);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::invalid_argument& e){ // Catch is the fail message
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}