#include <iostream>

//ini global variabel, hindari penggunaan global variabel
int myNum = 3;

void printNum();

int main(){
    // variabel lokal = dideklarasikan didalam function atau blok {}
    // global variabel = dideklarasikan di luar dan berlaku untuk semua function
    // int myNum = 1;
    int myNum = 5;
    printNum();
    // :: adalah scope resolution operator tuk mengakses global variabel
    std::cout << ::myNum << '\n';

    return 0;
}

void printNum(){
    // int myNum = 2;
    std::cout << myNum << "\n";
}