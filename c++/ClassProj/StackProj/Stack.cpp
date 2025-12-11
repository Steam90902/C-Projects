#include <iostream>

int stack[5] = {};
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
        if(opt == 1){
            std::cout << "push what: ";
            std::cin >> tempVal;
            push(tempVal);
        }
        else if(opt == 2){
            std::cout << "Taken out :" << pop() << "\n";
        }

        else if(opt == 3){
            peek();
        }

        else if(opt == 404){
            break;
        }

        else{
            std::cout << "Enter a valid command";

        }

        std::cout << "\n";
    }


    return 0;
}

void push(int value){
    if(pointer >= 5){
        std::cout << "Stack Overflow\n";
    }
    else{
        stack[pointer] = value;
        pointer += 1;
    }
}

int pop(){
    if(pointer >= 0){
        std::cout << "Stack Underflow\n";
        return 404;
    }
    else{
        int temp = stack[pointer -1];
        pointer -= 1;
        return temp;
    } 
}

void peek(){
    if(pointer >= 0 ){
        std::cout << "Stack Underflow";
    }
    else{
        std::cout << stack[pointer -1 ] << " is next in the stack\n";
    }
   
}
