#include <iostream>

class Stove{
    private:
        int temperature = 0;
    public:
    
    int getTemperature(){
        return temperature;
    }
};

int main(){

    Stove stove;


    std::cout << "The temperature setting is: " << stove.getTemperature();

    return 0;
}