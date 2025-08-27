// Level: Easy - Complete (~45 mins)

#include <iostream>
#include <map>
#include <vector>
#include <string>

int romanToInt(std::string s) {
    int result = 0;
    std::map<char, int> char_map;

    // Add each symbol assigned its value to map
    char_map['I'] = 1;
    char_map['V'] = 5;
    char_map['X'] = 10;
    char_map['L'] = 50;
    char_map['C'] = 100;
    char_map['D'] = 500;
    char_map['M'] = 1000;

    // If current symbol less than next, subtract value from result
    for (int i = 0; i < s.length(); i++) {
        // If we need to remove numbers, take them off here. e.g. IV = 4, not 6
        if (i + 1 < s.length() && char_map[s.at(i)] < char_map[s.at(i+1)]) {
            result -= char_map[s.at(i)];
        } else {
            result += char_map[s.at(i)];
        }
    }

    return result;
}

int main() {
    std::cout << romanToInt("III") << std::endl;
    std::cout << romanToInt("LVIII") << std::endl;
    std::cout << romanToInt("MCMXCIV") << std::endl;

}