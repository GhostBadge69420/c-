#include <iostream>

double max(double x, double y){
    return (x > y) ? x : y;
}
int main()
{
    std::cout << max(1.1, 2.1) << '\n';

    return 0;
}