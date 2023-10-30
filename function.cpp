#include <iostream>

//contoh deklarasi func sebelum main func tapi isi func nya ada setelah main func
void happyBirthday(std::string name, int age);

int main() {
    // function adalah sebuah blok kode yang dapat digunakan kembali

    std::string name = "Bro";
    int age = 21;
    happyBirthday(name, age);

    return 0;
}
// function diletakkan setelah main func tidak akan berjalan kecuali deklarasi func sblm main func
void happyBirthday(std::string name, int age){
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday dear " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "You are " << age << " years old\n";
}