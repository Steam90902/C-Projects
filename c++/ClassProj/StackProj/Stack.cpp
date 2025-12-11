#include <iostream>

int stack[6] = {5, 5, 5, 5, 5};
int pointer = 0;


void push(int value);
void peek();
int pop();

int main(){
    int opt;
    int tempVal;
    std::cout << "404 = leave \n 1 = push \n 2 = pop \n 3 = peek \n";
    while(opt != 404){
        std::cout << "Your option: ";
        std::cin >> opt;
        std::cout << "\n";

        switch (opt) {
            case 1:
                std::cout << "push what: ";
                std::cin >> tempVal;
                push(tempVal);
                break;
            
            case 2:
                std::cout << "Taken out :" << pop() << "\n";
                break;
            
            case 3:
                peek();
                break;
            default:
                std::cout << "Enter a valid command";
        }
        
        std::cout << "\n Pointer is " << pointer << "\n";
    }


    return 0;
}

void push(int value){
    if(pointer >= 0 && pointer < 5){
        stack[pointer] = value;
        pointer += 1;
    }
    else{
        std::cout << "Error";
    }
}

int pop(){
    if(pointer > 0 && pointer <= 5){
        int temp = stack[pointer -1];
        pointer -= 1;
        return temp;
    }
    
    else{
        return 404;
    }
        
    
}

void peek(){
    if(pointer > 0 && pointer <= 5){
        std::cout << stack[pointer -1 ] << " is next in the stack\n";
    }
    else{
        std::cout << "Error";
    }
}
