#include <iostream>

int main()
{
    int num1{}, num2{};

    std::cout << "Enter two numbers seperated by space: ";
    std::cin >> num1 >> num2;

    std::cout << num1 << " > " << num2 << " : " << (num1 > num2) << std::endl;
    std::cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << std::endl;
    std::cout << num1 << " < " << num2 << " : " << (num1 < num2) << std::endl;
    std::cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << std::endl;

    std::cout << std::endl;
}
