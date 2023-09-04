#include <iostream>
#include <array>

int main()
{
    std::array<int, 5> arr = {1, 2, 3, 4, 5};

    for (int element : arr)
    {
         std::cout << element << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
