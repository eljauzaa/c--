#include <iostream>

int main() {
    // && = cek apakah dua kondisi benar apa ga
    // || = cek apakah salah satu kondisi benar apa ga
    // ! = kebalikan dari logika operand nya

    int temp;
    
    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if(temp > 0 && temp < 30){
        std::cout << "The temperature is good!";
    }else {
        std::cout << "The temperature is bad!";
    }

    return 0;
}