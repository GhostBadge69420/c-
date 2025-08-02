#include <iostream>

void happyBirthday(std::string name);

int main()
{

    std::string name = "NEGGAMAN";

    happyBirthday(name);
    happyBirthday(name);
    happyBirthday(name);

    return 0;
}
void happyBirthday(std::string name){
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday dear " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n' <<'\n';
}