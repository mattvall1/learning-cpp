/*
 * Data members
 * Function members
 * NOTE: From this point forward, we don't want to use printf, it is not safe and is legacy. USE COUT
 */

#include <iostream>
#include "inventory.h"

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