// Code challenge 4 - Resource costs
#include <iostream>
#include <cstdint>
#include <vector>

struct Resource{
    std::string name;
    double base_cost;
    char type; // 'B' for Basic, 'L' for Luxury, 'E' for Essential
};

double calc_total_cost(std::vector<Resource> resources){
    double result = 0.0;

    // This works, could have also used 'if' statements
    for (const auto& resource : resources) {
        switch (resource.type) {
            case 'B':
                result += resource.base_cost + 0.05 * resource.base_cost;
                break;
            case 'L':
                result += resource.base_cost + 0.15 * resource.base_cost;
                break;
            case 'E':
                result += resource.base_cost;
                break;
            default:
                break;
        }
    }

    return result;
}

int main() {
    double result;
    std::vector<Resource> resources = {
        {"Wood", 125.0, 'B'},
        {"Gold", 200.0, 'L'},
        {"Water", 50.0, 'E'}
    };

    result = calc_total_cost(resources);

    printf("Results: %f", result);
}