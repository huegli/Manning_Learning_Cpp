#include <iostream>
#include <vector>

int main()
{
    std::vector<int> count{ 1, 2, 3, 4, 5, 6};

    std::cout << count.at(0) << std::endl;
    std::cout << count.at(1) << std::endl;
    std::cout << count.at(2) << std::endl;
    std::cout << count.at(3) << std::endl;
    std::cout << count.at(4) << std::endl;
    std::cout << count.at(5) << std::endl;

    return 0;
}
