#include <iostream>
#include <vector>

int main()
{
    std::vector<int> eval{ 90, 82, 70, 50, 64 };
    
    std::cout << "Size before pop_back: " << eval.size() << std::endl;
    eval.pop_back();
    std::cout << "Size after pop_back: " << eval.size() << std::endl;
    
    std::cout << eval[0] << std::endl;
    std::cout << eval[1] << std::endl;
    std::cout << eval[2] << std::endl;
    std::cout << eval[3] << std::endl;
    std::cout << eval[4] << std::endl;
    
    return 0;
}