// Code Challenge 7 - Virtual Pet Schedule
#include <iostream>
#include <cstdint>
#include <vector>
#include <deque>
#include <string>
#include <utility>

template <typename T> using deque = std::deque<T>;
template <typename T> using vector = std::vector<T>;
template <typename T1, typename T2> using pair = std::pair<T1, T2>;
using string = std::string;

// Enum class for operations
enum class Operation{
    ADD_FRONT,
    ADD_BACK,
    REMOVE_FRONT,
    REMOVE_BACK
};

deque<pair<string, int>> ManagePetSchedule(const deque<pair<string, int>>& initialActivities, const vector<pair<Operation, pair<string, int>>>& operations)
{
    // First, add initial activities to schedule
    deque<pair<string, int>> schedule = initialActivities;

    // Then, perform commands from enum
    for (const auto& operation : operations) {
        switch (operation.first) {
            case Operation::ADD_FRONT:
                schedule.push_front(operation.second);
                break;
            case Operation::ADD_BACK:
                schedule.push_back(operation.second);
                break;
            case Operation::REMOVE_FRONT:
                if (!schedule.empty()) schedule.pop_front();
                break;
            case Operation::REMOVE_BACK:
                if (!schedule.empty()) schedule.pop_back();
                break;
        }
    }

    return schedule;
}

int main() {
    deque<pair<string, int>> initialActivities = {{"Photograph",20},{"Play",45},{"Sleep",60}};
    vector<pair<Operation, pair<string, int>>> operations = {
        {Operation::REMOVE_FRONT, {"", 0}},
        {Operation::ADD_FRONT, {"Eat", 15}},
        {Operation::ADD_BACK, {"Groom", 45}}
    };

    deque<pair<string, int>> results = ManagePetSchedule(initialActivities, operations);

    // Print results
    for (const auto& activity : results) {
        std::cout << "Activity: " << activity.first << ", Duration: " << activity.second << "m \n";
    }



    return 0;
}
