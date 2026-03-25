// Find the sum of digits of a number.

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 234;
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    cout<<sum;
    return 0;
}
