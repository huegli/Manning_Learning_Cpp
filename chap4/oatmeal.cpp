#include <iostream>

int main()
{
    const int boiling_temp = 80;
    int oatmeal_temp = 80;
    std::cout << "Preparing oatmal..." << std::endl;
    std::cout << "Stir the oatmeal once before checking temp" << std::endl;
    std::cout << "Current temperature: " << oatmeal_temp << std::endl;
    do
    {
        std::cout << "Stirring oatmeal..." << std::endl;
        oatmeal_temp += 10;
        std::cout << "Current temperature: " << oatmeal_temp << std::endl;
    } while (oatmeal_temp < boiling_temp);
    {
        std::cout << "Oatmeal is ready!" << std::endl;
    }
    return 0;
}
