// GCD of two numbers
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10, b = 20;

    int gcd = 1;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    cout << gcd;
    return 0;
}