/*
 * Opening a text file for reading
 */

#include <iostream>
#include <string>
#include <fstream>

int main() {
    std::ifstream in_file;
    std::string str;
    int number;
    char letter;

    in_file.open("file_handling.txt");
    if (in_file.fail()) {
        std::cout << std::endl << "File not found." << std::endl;
    } else {
        while (!in_file.eof()) { // While not end of file - this iterates each line
            getline(in_file, str);
            std::cout << str << std::endl;
        }
        in_file.close();
    }

    return 0;
}