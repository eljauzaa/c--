#include <iostream>

int main() {
    // && = cek apakah dua kondisi benar apa ga
    // || = cek apakah salah satu kondisi benar apa ga
    // ! = kebalikan dari logika operand nya

    double temp;
    bool sunny = false;
    
    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    // if(temp > 0 && temp < 30){
    if(temp <= 0 || temp >= 30){
        std::cout << "The temperature is bad!\n";
    }else {
        std::cout << "The temperature is good!\n";
    }

    if(!sunny) {
        std::cout << "It's cloudy outside!";
    } else {
        std::cout << "It's sunny outside!";
    }

    return 0;
}