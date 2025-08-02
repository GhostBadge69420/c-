#include <iostream>

void printNum();

int main()
{
    int myNum = 1;

    printNum();

    return 0;
}
void printNum(){
    int myNum = 2;
    std::cout << myNum;
}