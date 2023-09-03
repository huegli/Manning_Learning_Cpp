#include <iostream>

int main()
{
    char name[]{ 'P', 'E', 'N', 'E', 'L', 'O', 'P', 'E'};
    for (char letter: name)
    {
         std::cout << letter << std::endl;
    }
    return 0;
}
