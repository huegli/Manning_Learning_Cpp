#include <iostream>

int main()
{
    int n_CurNum{2}, n_TopValue{1000}, i;
    bool b_isPrime = true;
    std::cout << "This program will find all prime numbers between 1 and 1000." << std::endl;

    for (n_CurNum = 2; n_CurNum <= n_TopValue; ++n_CurNum)
    {
        b_isPrime = true;
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
            if (n_CurNum == 2)
            {
                std::cout << "The prime numbers are: " << n_CurNum;
            }
            else
            {
                std::cout << ", " << n_CurNum;
            }
        }
    }
    std::cout << "." << std::endl;
    return 0;
}
