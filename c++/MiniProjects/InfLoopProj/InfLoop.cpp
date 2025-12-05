#include <iostream>

int main(){
    std::string magic;

    do{
        std::cout << "What do you think the magic word is?: ";
        std::cin  >> magic;
        std::cout << "\n";
        if(magic == "Help"){
            break;
        }
    }while(magic != "ONIOROIANOWIDNOAINIO");


    return 0;
}