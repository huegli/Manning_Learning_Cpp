#include <iostream>

int main()
{
    int age{};
    int double_age{};
    std::cout << "Please enter your age:" << std::endl;
    std::cin >> age;
    double_age = age;
    double_age *= 2;
    std::cout << "You are " << age << " years old" << std::endl;
    std::cout << "Wow! I am " << double_age << " years old - twice your age!" << std::endl;
}
