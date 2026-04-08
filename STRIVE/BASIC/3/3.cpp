// Input: N = 12345
// Output:54321
// Explanation: The reverse of 12345 is 54321.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 123, revNum = 0;
    while (n > 0)
    {
        int last = n % 10;
        revNum = revNum * 10 + last;
        n /= 10;
    }
    cout << revNum;
    return 0;
}