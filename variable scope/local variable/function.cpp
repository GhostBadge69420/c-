#include <iostream>

void printNum(int myNum);

int main()
{

    int myNum = 1;

    printNum(myNum);

    return 0;
}
void printNum(int myNum){
    std::cout << myNum;
}