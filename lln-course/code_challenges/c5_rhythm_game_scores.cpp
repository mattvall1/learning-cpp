// Code challenge 5 - Rhythm game scores
#include <iostream>
#include <cstdint>
#include <vector>

double CalculateScore(int milliseconds_diff, double bonus_multiplier = 1.0){
    double score;
    if (std::abs(milliseconds_diff) <= 50)
        score = 100; // Perfect
    else if (std::abs(milliseconds_diff) <= 100)
        score = 70;  // Good
    else if (std::abs(milliseconds_diff) <= 200)
        score = 50;  // Okay
    else
        score = 0;   // Miss

    return score * bonus_multiplier; // Apply the bonus multiplier
}

double CalculateScore(double seconds_diff, double bonus_multiplier = 1.5){
    int millisecondsDiff = static_cast<int>(seconds_diff * 1000); // Convert seconds to milliseconds
    return CalculateScore(millisecondsDiff, bonus_multiplier); // Return the integer version with multiplier
}

std::vector<double> GetScores(int millisecondsDiff, double secondsDiff, double bonusMultiplier1, double bonusMultiplier2) {
    std::vector<double> results;
    results.push_back(CalculateScore(millisecondsDiff));
    results.push_back(CalculateScore(millisecondsDiff, bonusMultiplier1));
    results.push_back(CalculateScore(secondsDiff));
    results.push_back(CalculateScore(secondsDiff, bonusMultiplier2));

    return results;
}

int main(){
    // Example 1
    int milliseconds_diff = 45;    // Input for the function using milliseconds
    double seconds_diff = 0.12;    // Input for the function using seconds
    double bonus_multiplier_1 = 1.3;  // Custom multiplier for the function using milliseconds
    double bonus_multiplier_2 = 1.75;  // Custom multiplier for the function using seconds

    // Get the results from the GetScores function
    std::vector<double> result = GetScores(milliseconds_diff, seconds_diff, bonus_multiplier_1, bonus_multiplier_2);

    for (double val : result) {
        std::cout << val << std::endl;
    }

    return 0;
}
