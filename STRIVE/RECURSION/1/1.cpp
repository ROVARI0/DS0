// Print Name N times using Recursion

#include <bits/stdc++.h>
using namespace std;

void fu(int n, int cnt, string a)
{
    if (cnt == n)
    {
        return;
    }
    cout << a << " ";
    fu(n, cnt + 1, a);
}

int main()
{
    int n = 3, cnt = 0;
    string a = "name";
    fu(n, cnt, a);
    return 0;
}

