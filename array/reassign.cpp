#include <iostream>

int main()
{

    std::string cars[] = {"Ferrari", "Lamborghini", "Mclaren"};

    cars[0] = "Porsche";

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    return 0;
}