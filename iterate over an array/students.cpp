#include <iostream>

int main()
{
    std::string students[] = {"Spongbob", "Patrick", "Squidward"};

    for(int i = 0; i < 3; i++){
        std::cout << students[i] << '\n';
    }

    return 0;
}