#include <fstream>
#include <iostream>

int main()
{
    int n_TopValue{1000000}, i{0};
    std::cout << "This program will find all prime numbers between 1 and " << n_TopValue << std::endl;
    std::ofstream ofs("results.txt");

    if (!ofs)
    {
        std::cerr << "Error opening output file" << std::endl;
        return 1;
    }
    for (int n_CurNum = 2; n_CurNum <= n_TopValue; ++n_CurNum)
    {
        bool b_isPrime{true};
        for (i = 2; i <= n_CurNum / 2; ++i)
        {
            if (n_CurNum % i == 0)
            {
                b_isPrime = false;
                break;
            }
        }
        if (b_isPrime)
        {
            static bool b_FirstPrint{true};
            if (b_FirstPrint)
            {
                ofs << n_CurNum;
                std::cout << n_CurNum;
                b_FirstPrint = false;
            }
            else
            {
                ofs << ", " << n_CurNum;
                std::cout << ", " << n_CurNum;
            }
        }
    }
    ofs << "." << std::endl;
    ofs.close();
    std::cout << "." << std::endl;
    return 0;
}
