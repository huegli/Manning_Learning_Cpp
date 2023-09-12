#include <iostream>
#include <vector>

int main()
{
    std::vector<int> march_dates{5, 15, 17, 23, 29};
    int date;

    std::cout << "Enter a day in March (i.e. 23): ";
    std::cin >> date;

    switch (date)
    {
    case 5:
        std::cout << "It's Friday! Time to party!" << std::endl;
        break;
    case 15:
        std::cout << "It's the Ides of March. Beware!" << std::endl;
        break;
    case 17:
        std::cout << "It's St. Patrick's Day. Time to wear green." << std::endl;
        break;
    case 23:
        std::cout << "It's National Puppy Day. Go play with a puppy" << std::endl;
        break;
        case 29:
        std::cout << "It's National Mom and Pop Business Owners Day" << std::endl;
        break;
    default:
        std::cout << "Sorry, there is no event scheduled for this Day" << std::endl;
        break;
    }

    return 0;
}
