// Print all Divisors of a given Number
// Input: N = 36
// Output: [1, 2, 3, 4, 6, 9, 12, 18, 36]
// Explanation: The divisors of 36 are 1, 2, 3, 4, 6, 9, 12, 18, 36.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 36;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}