#include <iostream>

class Stove{
    private:
        int temperature = 0;
};

int main(){

    Stove stove;

    stove.temperature = 1000000;

    std::cout << "The temperature setting is: " << stove.temperature;

    return 0;
}