#include "prime.h"

void isPrime(int num)
{
    if(num == 0 || num == 1)
    {
        prime = false;
        std::cout << MESSAGE_FRONT << num << NOT_PRIME << std::endl;
    }
    else
    {
        for(int i = 2; i <= sqrt(num); ++i)
        {
            if(num % i == 0)
            {
                prime = false;
                std::cout << MESSAGE_FRONT << num << NOT_PRIME << std::endl;
                break;
            }
        }
    }

    if(prime == true)
    {
        std::cout << MESSAGE_FRONT << num << PRIME << std::endl;
    }
}

void primesWriteOut(int num)
{
    int count = 0;

    for(int i = 2; i <= num; i++)
    {
        prime = true;

        for(int j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                prime = false;
                break;
            }
        }
        if(prime == true)
        {
            count++;
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    std::cout << "Összesen " << count << " darab prímszám van 1 és \"" << num  << "\" között" << std::endl;
}
