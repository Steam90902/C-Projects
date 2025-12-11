#include <iostream>

int inpArr();

int main(){
    int size;
    std::cout << "Enter the size of the array: \n";
    std::cin >> size;

    std::cout << "\n";

    std::cout << "Enter your " << size << " numbers \n";
    int numbers[] = {};
    int temp = 0;
    //while(temp >=)
    for(int i = 0; i < size; i++){
        std::cout << i << ": ";
        std::cin >> numbers[i];
        std::cout << "\n";
    }

    std::cout << "What number should we find?: ";
    std::cin >> temp;
    int i = 0;
    while(numbers[i] > temp){
        std::cout << "Wrong";
        i++;
    }
    std::cout << "The number " << temp << "was found in the index" << i;
    return 0;
}