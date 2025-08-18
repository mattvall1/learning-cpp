// Complete Guide to C++ Programming Foundations
// Exercise 08_08
// Algorithms, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main(){
    // A vector of game item names
    std::vector<std::string> items = {"potion", "shield", "sword", "shield", "potion", "potion"};

    // Sort the items alphabetically
    /*sort function*/

    std::cout << "Sorted items: ";
    for (const auto& item : items) std::cout << item << " ";
    std::cout << std::endl;

    // Find the first occurrence of "shield"
    auto it = /*find function*/

    if (it != items.end()) std::cout << "Found: " << *it << std::endl;
    else std::cout << "Item not found." << std::endl;

    // Count the number of "potion" items
    int potion_count = /*count function*/
    std::cout << "Number of potions: " << potion_count << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
