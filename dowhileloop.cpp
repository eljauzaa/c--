#include <iostream>

int main()
{
    // do while = lakukan yg ada di do dulu trus ulangi sampe kondisi benar
    int number;

    // contoh dlm while
    // std::cout << "Enter a positive #: ";
    // std::cin >> number;
    // while (number < 0)
    // {
    //     std::cout << "Enter a positive #: ";
    //     std::cin >> number;
    // }
    // do while

    do
    {
        std::cout << "Enter a positive #: ";
        std::cin >> number;
    } while (number < 0);

    std::cout << "The # is: " << number;
    return 0;
}