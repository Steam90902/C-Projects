#include <iostream>
#include <format>

char kineVariables[4];
float kineValues[4] = {0.0};

int main(){


    std::cout << "This code will only work properly if the object experience a force/acceleration.\n";
    
    // Find out what variables are missing

    std::cout << "What variable are you looking for?: ";
    std::cin >> kineVariables[0];

    // Input the variables

    std::cout << "Here, youll have to input the variables you have (you need three)\n";
    for(int i = 1; i < 4 ; i++){
        //std::cout << "Orange";
        char Temp;
        std::cout << "What is variable no " << i << ": ";
        std::cin >> Temp;
        std::cout << "\n";
        switch (Temp)
        {
        case 'a':
            kineVariables[i] = 'a';
            std::cout << "\nWhat is the Acceleration: ";
            std::cin >> kineValues[i];
            break;
            
        case 'u':
            kineVariables[i] = 'u';
            std::cout << "\nWhat is the initial Velocity?: ";
            std::cin >> kineValues[i];
            break;

        case 'v':
            kineVariables[i] = 'v';
            std::cout << "\nWhat is the final Velocity?: ";
            std::cin >> kineValues[i];
            break;

        case 's':
            kineVariables[i] = 's';
            std::cout << "\nWhat is the Displacement?: ";
            std::cin >> kineValues[i];
            break;

        case 't':
            kineVariables[i] = 't';
            std::cout << "\nWhat is the Time?: ";
            std::cin >> kineValues[i];
            break;

        default:
            break;
        }
        std::cout << "\n";
    }
    std::cout << "Youll get the missing variable soon :D\n";

    for(int i = 1; i < 4; i++){
        std::cout << kineVariables[i] << " with " <<  kineValues[i] << "\n";
    }


    return 0;
}