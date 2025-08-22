/*
 * While loop
 */

#include <vector>
#include <cstdint>

int main() {
    std::vector<int> scores = {12, 13, 14, 15, 16, 17, 18, 19, 20};
    auto score_pointer = scores.begin();

    while (score_pointer != scores.end()) {
        printf("%d ", *score_pointer);
        // 'next'  moves score_pointer forward 1 position
        score_pointer = next(score_pointer, 1);
    }
    printf("\n");

    int i = 0;
    // Iterates until hits size of scores
    do {
        printf("%d ", scores[i]);
        i++;
    } while (i < scores.size());

    return 0;
}