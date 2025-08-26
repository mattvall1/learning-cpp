// Level: Hard - Unfinished

#include <vector>
#include <iostream>

std::vector<std::string> fullJustify(std::vector<std::string>& words, int maxWidth) {
    std::vector<std::string> justified_text;
    int total_line_size = 0;

    // Get the maximum number of words that fit into maxWidth and add them to a vector
    std::string line;
    while (!words.empty()) {
        if (line.length() < maxWidth && (line.length() + words.front().length()) < maxWidth) {
            line += words.front() + " ";
            words.erase(words.begin());
        } else {
            justified_text.push_back(line);
            line = "";
        }

    }
    // Add any remaining text
    if (!line.empty()) justified_text.push_back(line);

    // Add additional spaces as needed

    return justified_text;
}

int main() {
    std::vector<std::string> words = {"This", "is", "an", "example", "of", "text", "justification."};
    int max_width = 16;

    auto results = fullJustify(words, max_width);

    for (const auto& result : results)
    {
        std::cout << result << std::endl;
    }



    return 0;
}
