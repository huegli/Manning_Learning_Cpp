#include <iostream>

int main()
{
    bool Wind, Cold, Running;

    Wind = true;
    Cold = true;

    Running = !(Wind && Cold);

    std::cout << "Today I am " << ((Running) ? "" : " not ") << "going to run" << std::endl;

}
