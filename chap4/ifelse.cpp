#include <iostream>

int main()
{
    auto isWindy{false};
    auto isCold{true};

    if (isWindy && isCold)
    {
        std::cout << "I am not running" << std::endl;
    }
    else
    {
        std::cout << "I am running" << std::endl;
    }
}
