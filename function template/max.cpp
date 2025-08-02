#include <iostream>

int max(int x, int y){
    return (x > y) ? x : y;
}
int main()
{
    std::cout << max(1, 2) << '\n';

    return 0;
}