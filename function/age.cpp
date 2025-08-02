#include <iostream>

void happyBirthday(std::string name, int age);

int main()
{

    std::string name = "NEGGAMAN";
    int age = 69;

    happyBirthday(name, age);
    happyBirthday(name, age);
    happyBirthday(name, age);

    return 0;
}
void happyBirthday(std::string name, int age){
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday dear " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "You are " << age << " years old" << '\n' <<'\n';
}