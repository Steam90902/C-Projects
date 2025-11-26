#include <iostream>
#include <cmath>
//using str_t = std::string;

int main(){
    double temp;
    char iUnit;
    char cUnit;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    
    std::cout << "K = Kelvin \nC = Celcius \nF = Fahrenheit\n";
    std::cout << "Enter the temp unit: ";
    std::cin >> iUnit;

    std::cout << "And enter what unit you wanna convert to: ";
    std::cin >> cUnit;

    if(iUnit == 'F' && cUnit == 'C' ){
        temp -= 32;
        temp = temp * 5;
        temp = temp / 9; 
        std::cout << temp << "\n";
    }

    else if(iUnit == 'F' && cUnit == 'K' ){
        temp -= 32;
        temp = 5 * temp;
        temp = temp / 9;
        temp += 273.15;
        std::cout << temp << "\n";
    }
    



}