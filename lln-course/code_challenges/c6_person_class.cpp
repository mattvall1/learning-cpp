// Code Challenge 6 - Person Class
#include <iostream>
#include <cstdint>
#include <vector>
#include <string>
#include <utility>

class Person {
public:
    Person(const std::string& name_init, float energy_init, float happiness_init,
           float health_init): name(name_init), energy(energy_init), happiness(happiness_init),
                                health(health_init) {

    }


    void Eat(float calories) {
        energy += calories * 7.0 / 200.0;
    }

    void Play(float minutes) {
        happiness += minutes / 2.0;
        energy -= minutes / 3.0;
    }

    void Sleep(float hours) {
        energy += hours * 3.75;
        health += hours * 2.5;
    }

    float GetEnergy() const {
        return energy;
    }

    float GetHappiness() const {
        return happiness;
    }

    float GetHealth() const {
        return health;
    }

private:
    const std::string name;
    float energy;
    float happiness;
    float health;

};


int main() {
    std::string name = "Aidan";
    float energy = 40;
    float happiness = 22;
    float health = 80;

    float calories = 300;
    float playMinutes = 120;
    float sleepHours = 5;


    Person sporty(name, energy, happiness, health);
    sporty.Eat(calories);
    sporty.Play(playMinutes);
    sporty.Sleep(sleepHours);

    std::cout << sporty.GetEnergy() << std::endl;
    std::cout << sporty.GetHappiness() << std::endl;
    std::cout << sporty.GetHealth() << std::endl;

    return 0;
}
