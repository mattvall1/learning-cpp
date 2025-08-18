// Complete Guide to C++ Programming Foundations
// Challenge Solution 05_10
// Calculate Resource Cost, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>
#include <vector>

struct Resource{
    std::string name;
    double baseCost;
    char type; // 'B' for Basic, 'L' for Luxury, 'E' for Essential
};

double CalculateTotalCost(std::vector<Resource> resources){
    double result = 0.0;
    
    for (const auto& resource : resources){
        double costWithTax = resource.baseCost;
        
        if (resource.type == 'B')      // Basic resource: 5% tax
            costWithTax += resource.baseCost * 0.05;
        else if (resource.type == 'L') // Luxury resource: 15% tax
            costWithTax += resource.baseCost * 0.15;

        // Essential resource 'E' has no tax, so no change is needed
        
        result += costWithTax;
    }
    
    return result;
}

int main(){
    
    // Example 1 resources
    std::vector<Resource> resources = {
        {"Wood", 125.0, 'B'},
        {"Gold", 200.0, 'L'},
        {"Water", 50.0, 'E'}
    };

    double learnerResult = CalculateTotalCost(resources);
    
    std::cout << "Your code returned: " << learnerResult << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
