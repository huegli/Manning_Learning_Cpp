#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec = { 1, 2, 3 };
    
    std::cout << "Initial vector: ";
    for (auto i : vec)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    
    std::cout << "After push_back(4), push_back(5), push_back(6): ";
    for (auto i : vec)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;    
}