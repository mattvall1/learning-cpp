/*
 * The standard input/output library
 */

#include <iostream>
#include <cmath>

int age_check() {
    int age;

    // cout = Character output
    std::cout << "Enter your age: ";

    // cin = Character input
    std::cin >> age;

    // Best practice is to use explicity qualify. I.e. std:: everywhere, not import like 'using namespace std;'
    std::cout << "You are " << age << " years old." << std::endl;

    return 0;
}

int maths() {
    double num = 9.7;

    printf("sqrt of %f is %f.\n",num , std::sqrt(num));

    return 0;
}

int main() {

    // Call age check func
    age_check();

    // Call maths func
    maths();

    return 0;

}