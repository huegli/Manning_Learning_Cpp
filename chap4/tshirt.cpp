#include <iostream>

int main()
{
    bool bContinue = {true};
    bool bBadChoice = {false};
    char cChoice{'A'};
    int iSum = 0;

    do
    {
        std::cout << "A) White T-shirt (Man)" << std::endl;
        std::cout << "B) White T-shirt (Woman)" << std::endl;
        std::cout << "C) Blue T-shirt (Unisex)" << std::endl;
        std::cout << "D) Red T-shirt (Unisex)" << std::endl;

        do
        {
            std::cout << "Your choice (A-D): ";
            std::cin >> cChoice;
            bBadChoice = false;

            switch (cChoice)
            {
            case 'A':
                iSum += 20;
                break;
            case 'B':
                iSum += 15;
                break;
            case 'C':
                iSum += 25;
                break;
            case 'D':
                iSum += 12;
                break;
            default:
                std::cout << "Wrong selection, please try again" << std::endl;
                bBadChoice = true;
            }

        } while (bBadChoice);

        std::cout << "You are spending $" << iSum << " so far" << std::endl;
        std::cout << "Continue (Y/N)?";
        std::cin >> cChoice;

        if (cChoice == 'n' || cChoice == 'N')
        {
            bContinue = false;
        }
    } while (bContinue);
}
