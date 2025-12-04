#include <iostream>




int main(){

    int queue[5] = {};
    int fPointer = -1;
    int bPointer = -1;
    
    queue[0] = 1;

    for(int num: queue){
        std::cout << num << ',';
    }
    


    return 0;
}