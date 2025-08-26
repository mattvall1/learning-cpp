// Level: Easy - Complete
#include <iostream>
#include <vector>

// My solution
std::vector<int> two_sum(std::vector<int>& nums, int target) {
    std::vector<int> output;

    for (int i = 0; i < nums.size(); i++) {
        for (int x = 0; x < nums.size(); x++) {
            if (nums[i] + nums[x] == target && i != x) {
                // Keep index of numbers
                output.push_back(i);
                output.push_back(x);
                break;
            }
        }
        if (!output.empty()) break;
    }

    return output;
}

// Better solution
std::vector<int> twoSum(std::vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        for (int x = i + 1; x < nums.size(); x++) {
            if (nums[i] + nums[x] == target) {
                // Keep index of numbers
                return {i, x};
            }
        }
    }
    return {};
}

int main() {
    // Very lazy implementation of test cases!
    std::vector<int> input({2,7,11,15});
    std::vector<int> results = twoSum(input, 9);

    std::vector<int> input_1({3,2,4});
    std::vector<int> results_1 = twoSum(input_1, 6);

    std::vector<int> input_2({3,3});
    std::vector<int> results_2 = twoSum(input_2, 6);

    for (int x : results) {
        std::cout << x;
    }

    std::cout << std::endl;

    for (int x : results_1) {
        std::cout << x;
    }

    std::cout << std::endl;

    for (int x : results_2) {
        std::cout << x;
    }

    return 0;
}