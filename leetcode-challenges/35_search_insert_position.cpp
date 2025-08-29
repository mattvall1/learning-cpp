// Level: Easy - Complete
#include <iostream>
#include <vector>

// This works, but could have been better as a binary search
int search_insert(std::vector<int>& nums, int target) {
    // Check if the target exists, if it does return the index
    auto value = std::find(nums.begin(), nums.end(), target);
    if (value != nums.end()) {
        return value - nums.begin();
    }

    // If it doesn't exist, find where we would put it
    for (int i = 0; i < nums.size(); i++) {
        // std::cout << nums.at(i) << " = i     ";
        // std::cout << nums.at(i+1) << " = i+1     ";
        if (i + 1 < nums.size() && nums.at(i) < target && nums.at(i+1) > target) return i+1;
        if (i + 1 >= nums.size() && nums.at(i) < target) return i+1;
    }

    return 0;
}

int search_insert_binary(std::vector<int>& nums, int target) {
    int low = 0;
    int high = static_cast<int>(nums.size());
    int mid;

    // If the target is higher than the last item in the list, return position after
    if (target > nums[high - 1]) {
        return high;
    }
    // Binary search logic
    while (low <= high) {
        mid = low + high / 2;

        // It exists in the middle
        if (nums[mid] == target) return mid;

        // Find where it exists
        if (target < nums[mid]) {
            high = mid - 1;
        } else {
            low = mid+1;
        }
    }

    return low;
}

int main() {
    std::vector<int> nums_1 = {1, 3, 5, 6}; // Input array
    int target_1 = 5;
    int result_1 = search_insert(nums_1, target_1);
    std::cout << result_1 << std::endl;

    std::vector<int> nums_2 = {1, 3, 5, 6}; // Input array
    int target_2 = 2;
    int result_2 = search_insert(nums_2, target_2);
    std::cout << result_2 << std::endl;

    std::vector<int> nums_3 = {1, 3, 5, 6}; // Input array
    int target_3 = 7;
    int result_3 = search_insert(nums_3, target_3);
    std::cout << result_3 << std::endl;

    std::vector<int> nums_4 = {1, 3, 5, 6}; // Input array
    int target_4 = 5;
    int result_4 = search_insert_binary(nums_4, target_4);
    std::cout << result_4 << std::endl;

    std::vector<int> nums_5 = {1, 3, 5, 6}; // Input array
    int target_5 = 2;
    int result_5 = search_insert_binary(nums_5, target_5);
    std::cout << result_5 << std::endl;

    std::vector<int> nums_6 = {1, 3, 5, 6}; // Input array
    int target_6 = 7;
    int result_6 = search_insert_binary(nums_6, target_6);
    std::cout << result_6 << std::endl;

    return 0;
}