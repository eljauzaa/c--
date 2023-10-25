#include <iostream>

int main() {
    //ternary operator
    // condition ? expression1 : expression2

    int grade = 75;

    // if(grade >= 60){
    //     std::cout << "You pass!";
    // } else {
    //     std::cout  << "you fail!";
    // }
    // grade >= 80 ? std::cout << "You pass!" : std::cout << "You Fail!";

    // int number = 3;
    // number % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN";

    bool hungry = true;

    // hungry ? std::cout << "You are hungry" : std::cout << "You are full."; 
    std::cout << (hungry ? "Kamu lapar" : "Kamu sudah kenyang!");

    return 0;
}