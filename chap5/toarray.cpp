#include <iostream>
#include <array>

int main()
{
    int cArray[5] = { 1, 2, 3, 4, 5};
    std::array<int, 5> stdArray = std::to_array(cArray);
    
    std::cout << "Elements in stdArray: ";
    for (auto i : stdArray)
    {
         std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
