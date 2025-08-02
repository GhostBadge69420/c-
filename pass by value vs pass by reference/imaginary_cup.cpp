#include <iostream>

int main()
{
    std::string x = "Kool-Aid";
    std::string y = "Water";
    std::string temp;

    temp = x;
    x = y;
    y = temp;

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';

    return 0;
}