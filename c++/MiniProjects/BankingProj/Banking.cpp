#include <iostream>

std::string bankName = "Bank of Congo";
int availableMoney = 1000;


void deposit(int money);
void withdraw(int money);
void showBalance();

int main(){

    deposit(200);
    showBalance();
    withdraw(5000);
    showBalance();

    return 0;
}

void deposit(int money){
    std::cout << bankName << ": deposited " << money << "\n";
    availableMoney += money;
}

void showBalance(){
    std::cout << "In " << bankName << " you have £" << availableMoney << "\n";
}

void withdraw(int money){
    std::cout << bankName << ": withdrawn " << money << "\n";
    availableMoney -= money;
}