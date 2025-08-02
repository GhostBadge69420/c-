#include <iostream>

int main()
{

    std::string name = "Nigga";

    std::string *pName = &name;

    std::cout << pName;


    return 0;
}