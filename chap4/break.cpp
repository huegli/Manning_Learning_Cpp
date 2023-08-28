#include <iostream>

int main()
{
    while (true)
    {
        char answer{};
        std::cout << "Do you want to continue looping? Y/N" << std::endl;
        std::cin >> answer;
        if (answer == 'N' || answer == 'n')
            break;
    }
}
