#include <iostream>


int Recur(int n);


int main(){

    std::cout << Recur(10) << "\n";


    return 0;
}

int Recur(int n){

    if(n <= 0){
        return 1;
    }

    return n * Recur(n-1);
}