// Level: Easy - Incomplete
#include <iostream>
#include <vector>

bool is_palindrome(int x) {
    long long rev_x = 0;
    std::cout << x << " ";

    // Reverse integer
    while (x > 0) {
        rev_x = rev_x * 10 + x % 10;
        x = x / 10;
    }

    std::cout << rev_x;

    if (rev_x == x) {
        return true;
    } else {
        return false;
    }
}

int main() {

    std::cout << is_palindrome(121);
    // std::cout << is_palindrome(-121);
    // std::cout << is_palindrome(10);




    return 0;
}