#include <iostream>

struct Car{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);

int main()
{

    Car car1;
    Car car2;

    car1.model = "296GTB";
    car1.year = 2023;
    car1.color = "red";

    car2.model = "Polo GT";
    car2.year = 2015;
    car2.color = "white";

    std::cout << &car1 << '\n';
    printCar(car1);
    printCar(car2);

    return 0;
    
}
void printCar(Car &car){
    std::cout << &car << '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}

