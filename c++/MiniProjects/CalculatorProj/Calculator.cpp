#include <iostream>

int main(){
    double x;
    double y;
    char o;
    double res;

    std::cout << "First Number: ";
    std::cin >> x;

    std::cout << "Operation: ";
    std::cin >> o;

    std::cout << "Second Number: ";
    std::cin >> y;

    switch(o){
        case '*' || 'x':
            res = x * y;
            break;

        case '/':
            res = x / y;
            break;

        case '-':
            res = x - y;
            break;
        
        case '+':
            res = x + y;
            break;

        default:
            std::cout << "That wasnt a valid input";


    }
    std::cout << "Results: " << res << "\n";

    return 0;
}