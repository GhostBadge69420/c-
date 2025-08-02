#include <iostream>

class Human{
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat(){
            std::cout << "This person is eating\n";
        }
        void drink(){
            std::cout << "This person is drinking\n";
        }
        void sleep(){
            std::cout << "This person is sleeping\n";
        }
};

int main(){

    Human human1;
    Human human2;

    human1.name = "John";
    human1.occupation = "Assassin";
    human1.age = 56;

    human2.name = "Agent 47";
    human2.occupation = "Agent";
    human2.age = 47;

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    std::cout << human2.name << '\n';
    std::cout << human2.occupation << '\n';
    std::cout << human2.age << '\n';

    std::cout << '\n';

    human1.eat();
    human1.drink();
    human1.sleep();

    human2.eat();
    human2.drink();
    human2.sleep();

    return 0;
}