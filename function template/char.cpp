#include <iostream>

char max(char x, char y){
    return (x > y) ? x : y;
}
int main()
{

    std::cout << max('1', '2') << '\n';

    return 0;
}