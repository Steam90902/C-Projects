#include <iostream>

int queue[5] = {};
int fPointer = 0;
int bPointer = 0;

void enqueue(int value);
int dequeue();
int peek();
void showall();


int main(){


    enqueue(5);
    enqueue(3);
    enqueue(2);
    
    std::cout << peek() << "\n \n";
    showall();
    dequeue();

    std::cout << peek() << "\n \n";
    showall();
    


    return 0;
}

void enqueue(int value){
    queue[bPointer] = value;
    bPointer += 1;
}

int dequeue(){
    int temp = queue[fPointer];
    queue[fPointer] = 0;
    fPointer += 1;
    return temp;
}

int peek(){
    return queue[fPointer];
}

void showall(){
    for(int i = 0; i < 5; i++){
        std::cout << i+1 << ". " << queue[i] << "\n";
    }
    std::cout << "\n";
}