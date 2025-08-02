#include <iostream>

int myNum = 3;

void printNum();

int main()
{

    printNum();
    std::cout << myNum;

    return 0;
}
void printNum(){
    std::cout << myNum;
}