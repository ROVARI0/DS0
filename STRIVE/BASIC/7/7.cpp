// prime number
#include <iostream>
using namespace std;

int main()
{
    int n = 9;

    bool isPrime = true;

    if (n <= 1)
    {
        isPrime = false; // 0 and 1 are not prime
    }
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
    {
        cout << "true"; // prime
    }
    else
    {
        cout << "false"; // not prime
    }

    return 0;
}
