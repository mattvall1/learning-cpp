/*
 * Containers
 * * Store collections of objects
 * * Most common containers:
 * * * Sequence containers - Data in linear sequence
 * * * Associative containers - key-value pairs (fast lookup, fast insertion, fast deletion)
 * * * Unordered containers - Similar to Assoc. but are not in specific order
 * * * Container adapters - Not containers: modify behaviour of existing containers
 */

#include <iostream>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <unordered_set>
#include <stack>
#include <queue>

int main() {
    // ---- Sequence container examples ----
    // Vector/array - No example as familiar with this
    // Deque - double-ended queue structure
    std::deque<std::string> recent_actions = {"Pass", "Shoot", "Defend"};
    recent_actions.emplace_front("Dribble"); // Add action to the front
    recent_actions.emplace_back("Score");    // Add action to the back

    for (const auto& action : recent_actions)
        std::cout << "Action: " << action << std::endl;

    std::cout << std::endl;
    // List - Double-linked list
    std::list<std::string> checkpoints = {"Entrance", "Lobby", "Storage Room"};
    checkpoints.emplace_back("Roof");

    for (const auto& checkpoint : checkpoints)
        std::cout << "Checkpoint: " << checkpoint << std::endl;

    std::cout << std::endl;
    // ---- Associative container examples ----
    // Set - Sorted container storing only unique elements
    std::set<std::string> collected_items = {"Coin", "Gem", "Star"};
    collected_items.insert("Key"); // Insert a new unique item
    for (const auto& item : collected_items)
        std::cout << "Collected: " << item << std::endl;

    std::cout << std::endl;
    // std::pair - (not container), a utility class to store two obj as single unit
    const std::pair<std::string, int> player_stats_pair("Aidan", 75);
    std::cout << "Player: " << player_stats_pair.first << ", Score: " << player_stats_pair.second << std::endl;

    std::cout << std::endl;
    // Maps - (Same as Python) Stores key/value pairs
    std::map<std::string, int> player_stats;
    player_stats["Goals"] = 10;
    player_stats["Assists"] = 5;
    player_stats["Saves"] = 3;
    for (const auto& stat : player_stats)
        std::cout << stat.first << ": " << stat.second << std::endl;

    std::cout << std::endl;
    // ---- Unordered containers ----
    // Unordered set - As Assoc. but with no ordering
    std::unordered_set<std::string> collected_items_uu = {"Coin", "Gem", "Star"};
    collected_items_uu.insert("Key"); // Insert a new unique item
    for (const auto& item : collected_items_uu)
        std::cout << "Collected: " << item << std::endl;

    std::cout << std::endl;
    // Unordered map - As Assoc. but with no ordering
    std::unordered_map<std::string, int> player_stats_uu;
    player_stats_uu["Goals"] = 10;
    player_stats_uu["Assists"] = 5;
    player_stats_uu["Saves"] = 3;
    for (const auto& stat : player_stats_uu)
        std::cout << stat.first << ": " << stat.second << std::endl;

    std::cout << std::endl;
    // ---- Container adapters ----
    // Stacks - LIFO container adapter
    std::stack<std::string> game_states;
    game_states.emplace("Main Menu");
    game_states.emplace("Level 1");
    game_states.emplace("Level 2");

    while (!game_states.empty()){
        std::cout << "Current State: " << game_states.top() << std::endl;
        game_states.pop();
    }

    std::cout << std::endl;
    // Queues - FIFO container adapter
    std::queue<std::string> event_queue;
    event_queue.emplace("Start Game");
    event_queue.emplace("Goal Scored");
    event_queue.emplace("Half-Time");

    while (!event_queue.empty()){
        std::cout << "Processing Event: " << event_queue.front() << std::endl;
        event_queue.pop();
    }

    std::cout << std::endl;
    // Priority queues - sorted container adapter
    std::priority_queue<int> tasks;
    tasks.push(1); // Low priority task
    tasks.push(3); // High priority task
    tasks.push(2); // Medium priority task

    while (!tasks.empty()){
        std::cout << "Processing task with priority: " << tasks.top() << std::endl;
        tasks.pop();
    }

    return 0;
}
