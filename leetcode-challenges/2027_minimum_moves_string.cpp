// Level: Easy - Unfinished

#include <iostream>
#include <vector>

int minimumMoves(std::string s)
{
    // A 'move' = selecting three consecutive characters then converting all to 0

    // Get number of moves needed

    // Get each consecutive three characters
    std::vector<char> s_vect(s.begin(), s.end());
    std::vector<std::string> move_strings;
    std::string temp_string;

    // Start from first, get three following
    // Start from second, get three following
    // Start from third, get three following etc

    int current_position = 0;
    while (!s_vect.empty()) {
        if (temp_string.length() < 3) {
            temp_string += s_vect[current_position];
            current_position += 1;
        } else {
            move_strings.push_back(temp_string);
            temp_string.clear();
            s_vect.erase(s_vect.begin());
            current_position = 0;
        }
    }

    // while (!s_vect.empty()) {
    //     for (const char ss : s_vect) {
    //         if (temp_string.length() < 3) {
    //             temp_string += ss;
    //         } else {
    //             move_strings.push_back(temp_string);
    //             temp_string.clear();
    //             s_vect.erase(s_vect.begin());
    //         }
    //     }
    // }


    for (const auto& x : move_strings) {
        std::cout << x << std::endl;
    }

    // Method: X -> O, O stays same


    return 0;
}

int main() {
    int result = minimumMoves("XXXO");
    std::cout << result;

    // int result_1 = minimumMoves("XXOX");
    //     std::cout << result_1;
    //
    // int result_2 = minimumMoves("OOOO");
    //     std::cout << result_2;
    //
    // int result_3 = minimumMoves("OXOX");
    //     std::cout << result_3;


    return 0;
}
