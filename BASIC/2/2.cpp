// count digit

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 2345, cnt = 0;
    while (n > 0)
    {
        cnt += 1;
        n /= 10;
    }
    cout << cnt;
    return 0;
}