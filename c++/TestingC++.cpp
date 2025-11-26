#include <iostream>
#include <cmath>
//using str_t = std::string;

int main(){

    int sibl;

    std::cout << "How many siblings do you have?: ";
    std::cin >> sibl;

    switch(sibl){
        case 1:
            std::cout << "tHAT ISNT REALLY ALOT";
            break;
        case 2:
            std::cout << "tOO much";
            break;
        
    }
    //std::string name;
    //int height;
    //std::cout << "How tall are you in cm: ";
    //std::cin >> height;

    //std::cout << "Name pleaase: ";
    //std::getline(std::cin >> std::ws, name);

    //std::cout << "Hello " << name << "\n You are " << height << "\n";


    return 0;
}