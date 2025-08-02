#include <iostream>

int main()
{
    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

    for(std::string student : students){
        std::cout << student << '\n';
\
    }

    return 0;
}