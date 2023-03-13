#include <ios>
#include <iostream>

int main()
{
    bool not_run{ false };
    double temperature{};
    int wind_speed{};

    const int wind_speed_for_run{ 25 };
    const double temperature_for_run{ 45 };
    std::cout << std::boolalpha;

    std::cout << "Enter the current temperature :";
    std::cin >> temperature;
    std::cout << "Enter windspeed: ";
    std::cin >> wind_speed;

    std::cout << "Below are the results using || and && logical operators." << std::endl;
    std::cout << "========================================================" << std::endl;

    not_run = (temperature < temperature_for_run || wind_speed > wind_speed_for_run);
    std::cout << "Using || (OR) to decide if you go for a run today: " << not_run << std::endl;

    not_run = (temperature < temperature_for_run && wind_speed > wind_speed_for_run);
    std::cout << "Using && (AND) to decide if you go for a run today: " << not_run << std::endl;
   
    std::cout << std::endl;
}
