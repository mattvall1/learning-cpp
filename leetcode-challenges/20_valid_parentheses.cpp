// Level: Easy - Complete
#include <iostream>
#include <string>

// Notes:
// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.

bool is_valid(std::string s) {
    // If string is only single character or is an odd number, fail immediately - Impossible to close single bracket
    if (s.length() <= 1 || s.length() % 2 != 0) return false;

    // If string starts with a close or ends with an open, fail immediately - Nothing is before it
    if (s.at(0) == '}' || s.at(0) == ')' || s.at(0) == ']' || s.back() == '{' || s.back() == '(' || s.back() == '[') return false;

    std::vector<char> bracket_stack;
    // Check if string is valid
    for (int i = 0; i < s.length(); i++) {
        // Put opening brackets at top of stack
        if (s.at(i) == '{' || s.at(i) == '(' || s.at(i) == '[') {
            bracket_stack.push_back(s.at(i));
            continue;
        }

        // Check if last opening bracket matches closing bracket
        if (!bracket_stack.empty() && ((bracket_stack.back() == '{' && s.at(i) == '}') || (bracket_stack.back() == '(' && s.at(i) == ')') || (bracket_stack.back() == '[' && s.at(i) == ']'))) {
            // Remove the top of the stack
            bracket_stack.pop_back();
        } else {
            // If it doesn't match, it is not closed correctly
            return false;
        }
    }

    // Final check - If the stack is not empty, something must have gone wrong
    // if (!bracket_stack.empty()) return false;
    return true;
}

int main() {
    std::cout << is_valid("()") << std::endl; // Valid
    std::cout << is_valid("()[]{}") << std::endl; // Valid
    std::cout << is_valid("(]") << std::endl; // Invalid
    std::cout << is_valid("([])") << std::endl; // Valid
    std::cout << is_valid("([)]") << std::endl; // Invalid
    std::cout << is_valid("(") << std::endl; // Invalid
    std::cout << is_valid("[[") << std::endl; // Invalid
    std::cout << is_valid("}(") << std::endl; // Invalid
    std::cout << is_valid("(){}}{") << std::endl; // Invalid
    std::cout << is_valid("[])") << std::endl; // Invalid
    std::cout << is_valid("()))") << std::endl; // Invalid

}



// OLD SOLUTION: This is overcomplicated, we can use a stack.
/* Iterate through string left to right
for (int i = 0; i < s.length(); i++) {
    // Keep track of how many brackets were opened and closed
    int openers = 0;
    int closers = 0;
    // If there are no opening brackets, skip to next iteration
    if (s.at(i) != '{' || s.at(i) != '(' || s.at(i) != '[') {
        continue;
    } else {
        openers += 1;
    }
    for (int x = 0; x < s.length(); x++) {
        if (s.at(i) == s.at(x)) {
            closers += 1;
        }
    }
}*/