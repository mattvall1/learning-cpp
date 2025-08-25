/*
 * Functors/Function objects
 * A functor is an object that can be called with the function() syntax.
 * This is achieved by overloading the operator
 */

#include <iostream>
#include <functional>

// Basic functor class
class MultiplyBy {
public:
    explicit MultiplyBy(int factor) : factor_(factor) {}

    int operator()(int value) const { // Defining 'operator()' means instance can be called like function
        return value * factor_;
    }

private:
    int factor_;
};

int main(){
    // Basic functor class
    MultiplyBy multiplyBy5(5);  // Create a functor
    int result = multiplyBy5(10);  // Calls operator()
    std::cout << "Result: " << result << std::endl;


    std::cout << std::endl;
    // Function objects from '<functional>' header - This sorts 'scores' in descending order
    std::vector<int> scores = {60, 10, 40, 20, 50, 30, 90};
    std::sort(scores.begin(), scores.end(), std::greater<int>());
    for (const auto& score : scores)
        std::cout << "Scores: " << score << std::endl;


    std::cout << std::endl;
    // Lambda expressions are an alternative to functors - sort something in a map by the value
    std::vector<std::pair<std::string, int>> people = {{"John", 100}, {"Benjamin", 90}, {"Aidan", 70}};
    std::sort(people.begin(), people.end(), [](const auto& person_1, const auto& person_2) { // Lambda
        return person_1.second < person_2.second;
    });

    for (const auto& person : people)
        std::cout << person.first << " with health: " << person.second << std::endl;
    return 0;

    return 0;
}