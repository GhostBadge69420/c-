#include <iostream>
void printInfo(std::string name, int age);
int main()
{
    std::string name = "Bro";
    int age = 21;

    printInfo(name, age);

    return 0;
}
void printInfo(std::string name, int age){
    std::cout << name << '\n';
    std::cout << age << '\n';
}