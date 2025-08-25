/*
 * Advanced concepts - Algorithms
 * This is some examples, but there is many others
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    // Vector of items
    std::vector<std::string> items = {"potion", "shield", "sword", "potion", "potion", "potion", "shield"};

    // Alphabetical sort
    std::cout << "Items sorted: ";
    std::sort(items.begin(), items.end());
    for (const auto& item : items) std::cout << item << " ";

    std::cout << std::endl;
    // Find first occurrence of 'sword'
    const auto it = std::find(items.begin(), items.end(), "sword");

    if (it != items.end()) std::cout << "Found: " << *it << std::endl;
    else std::cout << "Item not found" << std::endl;

    // Count number of 'potion' items
    int potion_count = std::count(items.begin(), items.end(), "potion");
    std::cout << "Number of potions: " << potion_count << std::endl;


    return 0;
}