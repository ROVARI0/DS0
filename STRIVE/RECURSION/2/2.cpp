// Print 1 to N using Recursion

#include <bits/stdc++.h>
using namespace std;

void fu(int n, int cnt)
{
    if (cnt > n)
        return;

    cout << cnt;
    fu(n, cnt + 1);
}

int main()
{
    int n = 5, cnt = 1;
    fu(n, cnt);
    return 0;
}