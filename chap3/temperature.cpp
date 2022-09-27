#include <iostream>

int main()
{
    double Fahrenheit{}, Celsius{};

    std::cout << "Please enter a temperature in Celsius: ";
    std::cin >> Celsius;

    Fahrenheit = Celsius * (9.0 / 5.0) + 32;

    std::cout << "The temperature in Fahrenheit is: " << Fahrenheit << std::endl;
    return 0;
}