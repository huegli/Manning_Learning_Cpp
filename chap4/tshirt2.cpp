#include <iostream>

int main()
{
    char selection{};
    char answer{};
    bool correct_selection = false;
    int total_cost = 0;

    do
    {
        correct_selection = true;
        std::cout << "Please select an item from the list below:" << std::endl;
        std::cout << "------------------------------------------" << std::endl;
        std::cout << "A. White T-Shirt (Man)" << std::endl;
        std::cout << "B. White T-Shirt (Woman)" << std::endl;
        std::cout << "C. Blue T-Shirt (Unisex)" << std::endl;
        std::cout << "D. Red T-Shirt (Unisex)" << std::endl;
        std::cin >> selection;

        switch (selection)
        {
        case 'A':
        case 'a':
            std::cout << "You selected White T-Shirt (Man), cost $20" << std::endl;
            total_cost += 20;
            break;
        case 'B':
        case 'b':
            std::cout << "You selected White T-Shirt (Woman), cost $15" << std::endl;
            total_cost += 15;
            break;
        case 'C':
        case 'c':
            std::cout << "You selected Blue T-Shirt (Unisex), cost $25" << std::endl;
            total_cost += 25;
            break;
        case 'D':
        case 'd':
            std::cout << "You selected Red T-Shirt (Unisex), cost $12" << std::endl;
            total_cost += 12;
            break;
        default:
            correct_selection = false;
            std::cout << "Wrong selection, please try again" << std::endl;
            break;
        }

        if (correct_selection)
        {
            std::cout << "Do you want to continue shopping Y/N" << std::endl;
            std::cin >> answer;
        }
    } while (answer == 'y' || answer == 'Y');

    if (total_cost > 0)
    {
        std::cout << "Total cost: $" << total_cost << std::endl;
    }

    std::cout << "Item(s) is/are ready for pick up. Pay at the counter" << std::endl;
    return 0;
}
