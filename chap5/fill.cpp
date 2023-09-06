#include <iostream>
#include <array>

int main()
{
    std::array<int, 5> arr{};

    arr.fill(0);

    for(auto i : arr)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
