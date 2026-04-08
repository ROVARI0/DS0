// Armstrnong number
// Input:N = 153
// Output:True
// Explanation: 1^3+5^3+3^3 = 1 + 125 + 27 = 153

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 153, digits = 0, temp = n, t = temp, sum = 0;
    while (t > 0)
    {
        digits += 1;
        t /= 10;
    }
    while (n > 0)
    {
        int last = n % 10;
        int power = 1;
        for (int i = 0; i < digits; i++)
        {
            power = power * last;
        }
        sum += power;
        n /= 10;
    }

    //     Before loop:
    // power = 1

    // i = 0:
    // power = power * last = 1 * 5 = 5

    // i = 1:
    // power = 5 * 5 = 25

    // i = 2:
    // power = 25 * 5 = 125

    if (sum == temp)
    {
        cout << "Is armstrong number";
    }
    else
    {
        cout << "Not armstrong number";
    }
    return 0;
}
