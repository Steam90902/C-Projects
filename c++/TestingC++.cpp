#include <iostream>



int main(){
    float a;
    float u;
    float v;
    float t;
    float s;
    std::string missingTemp;
    std::string variableTemp;
    std::cout << "This code will only work properly if the object experience a force/acceleration.\n";
    
    // Find out what variables are missing

    std::cout << "What variable are you looking for?: ";



    std::cin >> missingTemp;

    


    // Input the variables


    std::cout << "What variables do you have (you need three): ";
    for(int i = 0; i < 3 ; i++){
        std::cout << "Orange";
        char Temp;
        std::cout << "What is the missing variable: ";
        std::cin >> Temp;
        switch (Temp)
        {
        case 'a':
            std::cout << "\nWhat is the Acceleration: ";
            std::cin >> a;
            break;
            
        case 'u':
            std::cout << "\nWhat is the initial Velocity?: ";
            std::cin >> u;
            break;

        case 'v':
            std::cout << "\nWhat is the final Velocity?: ";
            std::cin >> v;
            break;

        case 's':
            std::cout << "\nWhat is the Displacement?: ";
            std::cin >> s;
            break;

        case 't':
            std::cout << "\nWhat is the Time?: ";
            std::cin >> t;
            break;

        default:
            break;
        }
    }
    std::cout << "What is the Acceleration: ";
    std::cin >> a;

    std::cout << "\nWhat is the initial Velocity?: ";
    std::cin >> u;

    std::cout << "\nWhat is the final Velocity?: ";
    std::cin >> v;

    std::cout << "\nWhat is the Time?: ";
    std::cin >> t;

    std::cout << "\nWhat is the Displacement?: ";
    std::cin >> s;

    return 0;
}