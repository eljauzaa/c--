#include <iostream>
#include <ctime>

int main(){
    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1:
        std::cout << "You win a bumber sticker!\n";
        break;
    case 2:
        std::cout << "You win a bumber t-shirt!\n";
        break;
    case 3:
        std::cout << "You win a bumber free lunch!\n";
        break;
    case 4:
        std::cout << "You win a bumber gift card!\n";
        break;
    case 5:
        std::cout << "You win a bumber tickets!\n";
        break;
    
    default:
        break;
    }
    return 0;
}