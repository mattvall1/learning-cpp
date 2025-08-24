/*
 * Queues & Stacks
 */
#include <iostream>
#include <queue>
#include <stack>

int main() {
    std::queue<std::string> event_queue; // FIFO container for events
    std::stack<std::string> undo_stack; // LIFO container for undo

    // Adding events to queue
    event_queue.emplace("Move Forward");
    event_queue.emplace("Collect Coin");
    event_queue.emplace("Attack Enemy");

    // Simulate processing event
    while (!event_queue.empty()) {
        std::string current_event = event_queue.front(); // Get next item in queue
        std::cout << "Performing: " << current_event << std::endl;
        event_queue.pop(); // Remove this item
        undo_stack.emplace(current_event); // Add to 'undo' stack
    }

    std::cout << std::endl;

    while (!undo_stack.empty()) {
        std::cout << "Undo action: " << undo_stack.top() << std::endl; // Get top item from stack
        undo_stack.pop();
    }

    return 0;
}