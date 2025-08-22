/*
 * Returning values:
 * * Built-in types
 * * Pointers
 * * References
 * * Void
 */
#include <string>

using String = std::string;

String get_name();
int calculate_score(int base_score, int multiplier);
void display_score(String&, int);

int main() {
    std::string name = get_name();
    int score = calculate_score(75, 2);

    display_score(name, score);

    return 0;
}

String get_name() {
    return "Aidan";
}

int calculate_score(int base_score, int multiplier) {
    return base_score * multiplier;
}

void display_score(String& name, int score) {
    printf("%s scored %d points.", name.c_str(), score);
}