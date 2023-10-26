#include <iostream>

int main() {
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // name.length = nyari panjang character
    // if(name.length() > 12) {
    //     std::cout << "Your name can't be over 12 characters";
    // } else {
    //     std::cout << "Welcome " << name;
    // }

    // name.empty = cek apakah di variabel tsb kosong ga
    // if(name.empty()) {
    //     std::cout << "You didn't enter your name.";
    // } else {
    //     std::cout << "Hello " << name;
    // }

    // name.clear = ngosongin isi variabel
    // name.clear();

    // append() = menambahkan dengan string lain
    // name.append("@gmail.com");
    // std::cout << "Your username is now " << name;

    // name.at(1) = utk mengetahui urutan karakter
    // std::cout << name.at(1);

    //insert() = insert karakter di posisi yang diinginkan
    // name.insert(0, "@");

    //find() = mencari urutan karakter
    // std::cout << name.find(' ');

    name.erase(0,3);

    std::cout << name;

    return 0;
}