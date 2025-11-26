#include <iostream>
#include <cmath>

int main(){
    double O;
    double A;
    double H;

    std::cout << "What is the value of O?: ";
    std::cin >> O;

    std::cout << "What is the value of A?: ";
    std::cin >> A;

    H = sqrt(pow(O, 2) + pow(A, 2));

    std::cout << "The Hypotenuse of this shape would be " << H << "\n";

    return 0;
}