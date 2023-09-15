#include <cstdio>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> player_score { 30, 22, 3, 15, 64, 2 };
    std::vector<char> first_letter { 'e', 'f', 't', 'd', 'b', 'l' };
    
    player_score[0] = 3;
    
    first_letter[2] = 'p';
    
    std::cout << player_score[0] << std::endl;
    std::cout << first_letter[2] << std::endl;
        
    return 0;
}