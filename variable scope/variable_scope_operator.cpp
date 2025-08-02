#include <iostream>

int myNum = 3;

void printNum();

int main()
{

    int myNum = 1;
    printNum();
    std::cout << ::myNum << '\n';

    return 0;
}
void printNum(){
    int myNum = 2;
    std::cout << ::myNum << '\n';
}

/*
    local variables are declared inside of function
    or any time you see a set of curly braces a
    variable declared inside a set of curly braces
    is hidden to the outside world.A global variable is
    declared outside of all functions and is accessible 
    to all functions within the program.

    We should try and avoid using global variables
    if you can because it pollutes the global namespace
    and these variables are less secure.
*/