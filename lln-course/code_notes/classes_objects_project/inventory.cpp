/*
 * Data members
 * Function members
 * NOTE: From this point forward, we don't want to use printf, it is not safe and is legacy. USE COUT
 */

#include <iostream>
#include <vector>
#include <string>

class Inventory {

public:
    // Default constructor - Serves as entry point to write init code and instantiation
    Inventory(): capacity(100) { // Name MUST be same as class
        items = new std::vector<std::string>(); // Allocate dynamic memory for items vector
    }

    // Overloaded constructor - same as above but custom capacity
    Inventory(int capacity_init): capacity(capacity_init) { // Initializer
        items = new std::vector<std::string>();
    }

    // Destructor starts with ~
    ~Inventory() {
        delete items; // Free up any resources which would not be freed up automatically
    }

    void add_item(const std::string& item) {
        if (items->size() < capacity)
            items->push_back(item);
        else
            std::cout << "Inventory is full, cannot add" << item << std::endl;
    }

    void remove_item(const std::string& item) {
        auto it = std::find(items->begin(), items->end(), item);
        if (it != items->end())
            items->erase(it);
        else
            std::cout << item << " not found in inventory: \n";
    }

    std::string get_item(int index) const { // const here = prevents modifying objects inside this function
        if (index <= 0 && index < items->size())
            return (*items)[index];
        else
            return "Index out of bounds";
    }

    int get_num_items() const {
        return items->size();
    }

    void display_inventory() const{
        std::cout << "Inventory: [";
        for (int i = 0; i < items->size(); i++) {
            std::cout << (*items)[i] << " ";
        }
        std::cout << "]" << std::endl;
    }

private: // Indent access specifiers at base
    std::vector<std::string> *items; // Vector of items
    int capacity; // Max. items allowed


};

int main() {
    // Create inventory
    Inventory user_inventory(10);

    // Add items
    user_inventory.add_item("Torch");
    user_inventory.add_item("Wood");
    user_inventory.add_item("Axe");
    user_inventory.add_item("Coal");
    user_inventory.add_item("Stone");
    user_inventory.add_item("Dirt");
    user_inventory.add_item("Sapling");
    user_inventory.add_item("Bucket");
    user_inventory.add_item("Pickaxe");
    user_inventory.add_item("Shovel");

    // Display inventory
    user_inventory.display_inventory();

    // Attempt add item
    user_inventory.add_item("Carrot");

    // Remove item
    user_inventory.remove_item("Dirt");

    // Display item count
    std::cout << user_inventory.get_num_items() << std::endl;

    // Display item by index
    std::cout << user_inventory.get_item(6) << std::endl;

    // Display inventory
    user_inventory.display_inventory();

    // Delete

    return 0;
}