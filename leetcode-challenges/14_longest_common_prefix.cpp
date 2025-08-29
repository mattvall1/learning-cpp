// Level: Easy - Incomplete

// Another way to write this question:
// Find the longest common sequence in all words that begins at index 0
#include <string>
#include <vector>
#include <iostream>

std::string longest_common_prefix(std::vector<std::string>& strs) {
    // Immediately return if empty
    if (strs.empty()) return "";
    // Always true if there's only one item
    if (strs.size() == 1) return strs[0];

    // Sort alphabetically
    std::sort(strs.begin(), strs.end());
    // Get first and last words
    const std::string& first = strs[0];
    const std::string& last = strs[strs.size() - 1];

    std::string result;
    for (int i = 0; i < first.length() && i < last.length(); i++) {
        // S if first letter of first word doesn't equal first letter of last word
        if (first[i] != last[i]) break;
        // Add each correct letter
        result += first[i];
    }

    return result;
}

int main() {
    std::vector<std::string> case_1 = {"flower","flow","flight"};
    std::cout << longest_common_prefix(case_1) << std::endl;

    std::vector<std::string> case_2 = {"dog","racecar","car"};
    std::cout << longest_common_prefix(case_2) << std::endl;

    std::vector<std::string> case_3 = {"cat","cats","cot"};
    std::cout << longest_common_prefix(case_3) << std::endl;

    std::vector<std::string> case_4 = {"", "b"};
    std::cout << longest_common_prefix(case_4) << std::endl;

    std::vector<std::string> case_5 = {"reflower","flow","flight"};
    std::cout << longest_common_prefix(case_5) << std::endl;

    std::vector<std::string> case_6 = {"flower","flower","flower","flower"};
    std::cout << longest_common_prefix(case_6) << std::endl;

    std::vector<std::string> case_7 = {};
    std::cout << longest_common_prefix(case_7) << std::endl;

    return 0;
}

// Half working solution - got too overcomplicated
/* // Immediately return if empty
if (strs.empty()) return "";
// Always true if there's only one item
if (strs.size() == 1) return strs[0];

// Sort alphabetically
std::sort(strs.begin(), strs.end());

// Create temp vector to store common letters
std::vector<char> common_letters;
int letter_count = 0;
for (int i = 0; i < strs.size() - 1; i++) {
    // Check first letter of first word with first letter of second word
    // Then check second letter of first word with second letter of second word

    if (!strs[i].empty() && !strs[i+1].empty() && strs[i].at(letter_count) == strs[i+1].at(letter_count)) {
        // Then put that on the end of the common letters
        common_letters.push_back(strs[i].at(letter_count));
        // std::cout << strs[i].at(0) << std::endl;
    } else {
        if (!common_letters.empty()) common_letters.pop_back();
    }
    letter_count++;
}

return {common_letters.begin(), common_letters.end()};*/