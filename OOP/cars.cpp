#include <iostream>

class Car {
public:
    std::string make;
    std::string model;
    int year;
    std::string color;

    void accelerate() {
        std::cout << "You step on the gas!\n";
    }

    void brake() {
        std::cout << "You step on the brakes!\n";
    }
};

int main() {
    Car car1;
    Car car2;

    car1.make = "Ferrari";
    car1.model = "296GTB";
    car1.year = 2025;
    car1.color = "red";

    car2.make = "Porsche";
    car2.model = "Carrera";
    car2.year = 2025;
    car2.color = "blue";

    std::cout << "Car 1:\n";
    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << "\n\n";

    std::cout << "Car 2:\n";
    std::cout << car2.make << '\n';
    std::cout << car2.model << '\n';
    std::cout << car2.year << '\n';
    std::cout << car2.color << "\n\n";

    car1.accelerate();
    car1.brake();

    car2.accelerate();
    car2.brake();

    return 0;
}
