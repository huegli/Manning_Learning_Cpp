#include <iostream>

int main()
{
    int age{};
    int young_age{};
    std::cout << "Please enter your age:" << std::endl;
    std::cin >> age;
    young_age = age;
    young_age -= 1;
    std::cout << "You are " << age << " years old" << std::endl;
    std::cout << "Next year you will be " << young_age << " years old" << std::endl;
}
