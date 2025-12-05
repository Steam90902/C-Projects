#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    srand(time(0));


    int botNum = rand() % 4;
    char botChar;
    if(botNum == 1){
        botChar = 'R';
    }
    else if(botNum == 2){
        botChar = 'P';
    }
    else if(botNum == 3){
        botChar = 'S';
    }
    char playerC;
    std::cout << "This is gonna be a game of rock paper scissors\n";

    std::cout << "Rock = R \n Paper = P \n Scissors = S \n";
    std::cout << "Your choice: ";
    std::cin >> playerC;

    if(playerC == 'R' && botChar == 'P'){
        std::cout << "They picked Paper... \n You lose";
    }

    else if(playerC == 'P' && botChar == 'S'){
        std::cout << "They picked Scissors... \n You lose";
    }

    if(playerC == 'S' && botChar == 'R'){
        std::cout << "They picked Rock... \n You lose";
    }

    else if(playerC == 'R' && botChar == 'R'){
        std::cout << "They picked Rock... \n You Tied";
    }

    else if(playerC == 'S' && botChar == 'S'){
        std::cout << "They picked Scissors... \n You Tied";
    }

    else if(playerC == 'P' && botChar == 'P'){
        std::cout << "They picked Paper... \n You Tied";
    }

    else if(playerC == 'R' && botChar == 'S'){
        std::cout << "They picked Scissors... \n You Won!";
    }

    else if(playerC == 'S' && botChar == 'P'){
        std::cout << "They picked Paper... \n You Won!";
    }

    else if(playerC == 'p' && botChar == 'R'){
        std::cout << "They picked Rock... \n You Won!";
    }

    

    return 0;
}