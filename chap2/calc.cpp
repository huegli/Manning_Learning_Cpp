#include <iostream>

int main()
{
    int myNum{ 250 };
    int f{myNum};

    std::cout << "the result is: " << std::endl;
    f = f * 2.0;

    std::cout << f << std::endl;
}