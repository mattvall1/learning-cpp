/*
 * Overloading functions
 */
#include <string>

// Function to get speed
int get_speed(int distance, int time){
    return distance / time;
}

// Overload - Function to get speed assuming distance
int get_speed(double time){
    return static_cast<int>(250 / time);
}

// Overload - Function to get speed with unit
std::string get_speed(int distance, int time, const std::string& unit){
    float speed = static_cast<float>(distance) / static_cast<float>(time);
    return std::to_string(speed) + " " + unit;
}

int main(){
    int speed_int;

    speed_int = get_speed(200, 4);
    printf("Speed (int): %d \n", speed_int);

    speed_int = get_speed(3.5);
    printf("Speed (int) assumed distance of 250: %d \n", speed_int);

    std::string speed_str = get_speed(177, 6, "m/s");
    printf("Speed (str): %s", speed_str.c_str());

    return 0;
}
