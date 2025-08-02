#include <iostream>

int myNum = 3;

void printNum();

int main()
{

    int myNum = 1;
    printNum();
    std::cout << myNum << '\n';

    return 0;
}
void printNum(){
    int myNum = 2;
    std::cout << myNum << '\n';
}

/*
    A function will use any local variables first
    before resorting to any global variables
*/