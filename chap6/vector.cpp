#include <iostream>
#include <vector>

int main()
{
    std::vector<int> myVector(10);
    std::cout << "The initial capacity of the vector is: " << myVector.capacity() << std::endl;

    // Add more elements to the vector
    for (int i = 0; i < 20; i++)
    {
        myVector.push_back(i);
    }
    std::cout << "The new capacity of the vector is: " << myVector.capacity() << std::endl;
    return 0;
}
