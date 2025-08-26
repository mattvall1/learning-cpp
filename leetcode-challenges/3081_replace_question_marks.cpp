// Level: Medium - Unfinished

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::vector<std::pair<char, int>> cost(std::vector<char> s_vect)
{
    std::vector<std::pair<char, int>> s_counts;

    // 1. Order vector of chars descending
    std::sort(s_vect.begin(), s_vect.end());
    std::reverse(s_vect.begin(), s_vect.end());

    // 2. Get 'cost' (count) of each letter
    std::pair<char, int> letter_count;
    for (int i = 0; i < s_vect.size(); i++) {
        // Check this letter against last, if same add 1, if not reset to 0
        letter_count.first = s_vect[i];
        if (s_vect[i] == s_vect[i+1]){
            letter_count.second += 1;
        } else {
            // Add pair to s_counts
            s_counts.push_back(letter_count);
            letter_count.first = *"";
            letter_count.second = 0;
        }
    }

    // 3. Add remaining alphabet letters
    std::vector<std::pair<char, int>> full_alphabet_counts;
    for (char x = 'a'; x <= 'z'; ++x) {
        for (int i = 0; i < s_counts.size(); i++) {
            if (s_counts[i].first != x) {
                std::pair<char, int> pair;
                pair.first = x;
                pair.second = 0;
                full_alphabet_counts.push_back(pair);
            } else if(s_counts[i].first == x) {
                full_alphabet_counts.push_back(s_counts[i]);
            }
        }
    }

    return full_alphabet_counts;
}

std::string minimizeStringValue(std::string s) {
    std::vector<char> s_vect(s.begin(), s.end());
    std::string output_string;

    // Build counts for each letter
    std::vector<std::pair<char, int>> s_counts = cost(s_vect);

    // 3. Replace '?' with cheapest letter
    // for ()




    for (auto s_c : s_counts) {
        std::cout << s_c.first << " " << s_c.second << std::endl;
    }

    return output_string;
}

int main() {
    std::string result_1 = minimizeStringValue("abcaabbaaacccsssaaad");
    std::cout << result_1 << std::endl;

    // std::string result_5 = minimizeStringValue("abc");
    // std::cout << result_5<< std::endl;
    //
    // std::string result_2 = minimizeStringValue("a?a?");
    // std::cout << result_2 << std::endl;
    //
    // std::string result_3 = minimizeStringValue("abcdefghijklmnopqrstuvwxy??");
    // std::cout << result_3 << std::endl;
    //
    // std::string result_4 = minimizeStringValue("eq?umjlasi");
    // std::cout << result_4 << std::endl;

    return 0;
}