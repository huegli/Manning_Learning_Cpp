#include <iostream>

int main() 
{
    int nums[] = { 5, 10, 15, 20, 15};

    std::cout << "I have " << nums[0] << " fingers on my left hand." << std::endl;
    std::cout << "I have " << nums[1] << " chocolate bars." << std::endl;
    nums[2] = 3;
    std::cout << "I need " << nums[2] << " cups of coffee to function in the morning." << std::endl;
    std::cout << "I can run " << nums[3] << " miles without stoppping" << std::endl;
    std::cout << "My dog is " << nums[4] << " years old." << std::endl;
    
    return 0;
}
