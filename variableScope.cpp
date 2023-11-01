#include <iostream>

void printNum();

int main(){
    // variabel lokal = dideklarasikan didalam function atau blok {}
    // global variabel = dideklarasikan di luar dan berlaku untuk semua function
    int myNum = 1;

    printNum();

    return 0;
}

void printNum(){
    int myNum = 2;
    std::cout << myNum;
}