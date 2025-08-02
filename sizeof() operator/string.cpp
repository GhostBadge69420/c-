#include <iostream>

int main()
{

    std::string students[] = {"Songebob", "Patrick", "Squidward", "Sandy"};
    std::cout << sizeof(students)/sizeof(std::string) << " elements\n";

    return 0;
}