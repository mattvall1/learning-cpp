/*
 * This file contains 'main' entrypoint for the 'inventory_ol' code
 */
#include "inventory_ol.h"
#include <iostream>

int main(){
    // Create an inventory with capacity of 5 items
    Inventory user_inventory(10);

    // Add items
    user_inventory += "Torch";
    user_inventory += "Wood";
    user_inventory += "Axe";
    user_inventory += "Coal";
    user_inventory += "Stone";
    user_inventory += "Dirt";
    user_inventory += "Sapling";
    user_inventory += "Bucket";
    user_inventory += "Pickaxe";
    user_inventory += "Shovel";

    // Display inventory
    user_inventory.display_inventory();

    // Attempt add item
    user_inventory += "Carrot";

    // Remove item
    user_inventory -= "Dirt";

    // Display item count
    std::cout << "The inventory now contains: " << user_inventory.get_item_count() << " items." << std::endl;

    // Access item by index
    std::cout << "Item at index 2: " << user_inventory[4] << std::endl;

    // Display inventory
    user_inventory.display_inventory();

    return 0;
}
