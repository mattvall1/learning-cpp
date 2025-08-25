/*
 * Opening a text file for writing
 */

#include <iostream>
#include <string>
#include <fstream>

int main() {
    std::ofstream output_file;
    float a = 3.142f, b = 5.351;

    output_file.open("file_handling_data_out.txt");
    if (output_file.fail()) {
        std::cout << "File not found";
    } else {
        output_file << "a = " << a << std::endl;
        output_file << "b = " << b << std::endl;
        output_file << "a + b = " << a + b << std::endl;
        output_file << "a * b = " << a * b << std::endl;
        output_file.close();
        std::cout << "Written successfully." << std::endl;
    }

    return 0;
}