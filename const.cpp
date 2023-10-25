#include <iostream>

int main(){
    const double pi = 3.14159;
    pi = 4324234;
    double radius = 10;
    double circumference = 2 * pi * radius;

    std::cout << circumference << "cm";

    return 0;
}