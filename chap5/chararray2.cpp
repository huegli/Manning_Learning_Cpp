#include <iostream>

int main() 
{
    char word[6] = { 'h', 'e', 'l', 'l', 'o', '\0' };

    char first_letter = word[0];
    char last_letter = word[4];

    std::cout << "The first letter of the word is: " << first_letter << std::endl;
    std::cout << "The last letter of the word is: " << last_letter << std::endl;

    return 0;
}
