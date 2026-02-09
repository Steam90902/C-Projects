#include <iostream>
#include <fstream>

//using namespace std;

void add(std::string text);
std::string read();

int main(){

    add("Slight");

    std::cout << read() << "Yes\n";


    return 0;
}

void add(std::string text){
    std::ofstream file("Orange.txt", std::ios::app);
    file << text;
    file.close();

    std::cout << "Done!";
}


std::string read(){
    std::ifstream file("Orange.txt");
    std::string s;
    file >> s;
    return s;
}