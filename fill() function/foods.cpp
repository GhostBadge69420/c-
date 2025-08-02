#include <iostream>

int main()
{
    std::string foods[10] = {"pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza"};
    for(std::string food : foods){
        std::cout << food << '\n';
    }

    return 0;
}