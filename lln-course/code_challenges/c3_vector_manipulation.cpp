// Code challenge 3 - Vector manipulation
#include <iostream>
#include <vector>

std::vector<int> select_key_points(std::vector<int> distances, int checkpoint_index){
    std::vector<int> result;

    int dist_first_element = distances[0];
    int dist_chkpt_idx = distances[checkpoint_index];
    int dist_final_element = distances[distances.size() - 1];

    result = {dist_first_element, dist_chkpt_idx, dist_final_element};

    return result;
}

std::vector<int> select_key_points_solution(std::vector<int> distances, int checkpoint_index){
    std::vector<int> result;

    // My version worked, but a more efficient way is:
    result.push_back(*distances.begin()); // Dereference with '*', Add first element
    result.push_back(distances[checkpoint_index]); // Add checkpoint element
    result.push_back(distances.back()); // Add final element

    return result;
}

int main() {
    std::vector<int> distances = {3, 5, 4, 6, 7, 8};
    int checkpoint_index = 4;

    std::vector<int> result = select_key_points(distances, checkpoint_index);
    std::vector<int> result_solution = select_key_points_solution(distances, checkpoint_index);

    for (int val : result) {
        std::cout << val << std::endl;
    }

    std::cout << std::endl;

    for (int val : result_solution) {
        std::cout << val << std::endl;
    }

    return 0;
}