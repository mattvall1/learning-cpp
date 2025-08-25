/*
 * Opening a text file for reading
 */

#include <iostream>
#include <string>
#include <fstream>

int main() {
    std::ifstream desc_file;
    std::ifstream data_file;
    std::string str;
    // Could be moved to inner scope, but keep here for readability
    std::string name;
    int age;
    char initial;

    // Simply reading a file and printing line-by-line
    desc_file.open("file_handling.txt");
    if (desc_file.fail()) {
        std::cout << std::endl << "File not found." << std::endl;
    } else {
        while (!desc_file.eof()) { // While not end of file - this iterates each line
            getline(desc_file, str);
            std::cout << str << std::endl;
        }
        desc_file.close();
    }

    // Processing the data
    data_file.open("file_handling_data.txt");
    if (data_file.fail()) {
        std::cout << std::endl << "File not found." << std::endl;
    } else {
        std::cout << "Name, Age, Initial" << std::endl;
        while (!data_file.eof()) { // While not end of file - this iterates each line
            getline(data_file, name);
            std::cout << name << ", ";
            getline(data_file, str);
            age = stoi(str);
            std::cout << age << ", ";
            getline(data_file, str);
            initial = str[0];
            std::cout << initial << std::endl;
        }
        data_file.close();
    }

    return 0;
}