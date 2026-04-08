// Input: N = 5
// Output: 0 1 1 2 3 5
// fibonacci number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 0, b = 1, n = 5, c;
    cout << a << " " << b << " ";
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout << c << " ";
    }
    return 0;
}