#include <iostream>
#include <vector>

int main()
{
    std::vector<int> my_vector{ 6, 70, 13, 3};
    std::cout << "Vector size before calling clear(): " << my_vector.size() << std::endl;
    my_vector.clear();
    std::cout << "Vector size after calling clear(): " << my_vector.size() << std::endl;
    return 0;
}