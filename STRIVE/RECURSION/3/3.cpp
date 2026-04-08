// Print N to 1 using Recursion

#include <bits/stdc++.h>
using namespace std;

void fu(int n)
{
    if (n < 1)
        return;

    cout << n << " ";
    fu(n - 1);
}

int main()
{
    int n = 9;
    fu(n);
    return 0;
}
