#include <iostream>

int main()
{
    auto temperature{0};
    auto wind_speed{0};
    auto isWindy{true};
    auto isCold{true};

    std::cout << "What is the temperature? ";
    std::cin >> temperature;
    std::cout << "How strong is the wind outside from 1 to 10? ";
    std::cin >> wind_speed;

    if (wind_speed > 5)
    {
        isWindy = true;
    }
    else
    {
        isWindy = false;
    }
    if (temperature <= 40)
    {
        isCold = true;
    }
    else
    {
        isCold = false;
    }

    if (isWindy && isCold)
    {
        std::cout << "I am not running\n";
    }
    else
    {
        std::cout << "I am going for a run! Yeah!!!";
    }
}
