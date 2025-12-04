#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    srand(time(0));
    
    int rando = rand() % 101;
    int guess;

    std::cout << "Guess a number from 0-100\n";

    
    do{
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        if(guess > rando){
            std::cout << "Lower\n";
        }

        else if(guess < rando){
            std::cout << "Higher\n";
        }
    }while(rando != guess);

    std::cout << "You won! The number was: " << rando << "\n";
    return 0;
}