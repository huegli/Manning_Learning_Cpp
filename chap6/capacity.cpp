#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;
    
    std::cout << "Initial capacity: " << v.capacity() << std::endl;
    
    for (int i = 0; i < 100; ++i)
    {
        v.push_back(i);
        std::cout << "Size: " << v.size() << " Capacity: " << v.capacity() << std::endl;
    }
    
    if (v.capacity() > 20)
    {
        std::cout << "Capacity is greater than 20!" << std::endl;
    }
    else
    {
        std::cout << "Capacity is less or equal to 20." << std::endl;
    }
    
    return 0;
}