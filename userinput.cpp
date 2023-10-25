#include <iostream>

int main() {
    //cout << (insertion operator)
    //cin >> extraction operator)
    std::string name;
    int age;

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "What's your full name?: "; 
    // std::cin >> name; // jika mengisi dengan spasi tdk akan terbaca
    std::getline(std::cin >> std::ws, name); // tambahin std::ws tuk handle white spaces jika dibaris sebelumnya ada inputan


    std::cout << "Hello " << name << '\n';
    std::cout << "you are " << age << " years old.";
    return 0;
}