// Input: x = 9
// Output: 3
//square root

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 25;
    int low = 0, high = n;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int val = (mid * mid);
        if (val <= n)
        {
            low = mid + 1;
        }

        else
        {
            high = mid - 1;
        }
    }
    cout << high;
    return 0;
}
