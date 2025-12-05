#include <iostream>

void happyBday(std::string name, int age){

    std::cout << "Happy birthday " << name << "!\n";
    std::cout << "You are " << age << " years old!\n";

}

int main(){
    int age;
    std::string name;
    std::cout << "Whats your name?: ";
    std::cin >> name;

    std::cout << "Whats your age?: ";
    std::cin >> age;

    happyBday(name, age);


    return 0;
}