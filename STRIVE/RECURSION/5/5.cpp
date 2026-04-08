// Factorial of a Number : Iterative and Recursive
#include <bits/stdc++.h>
using namespace std;

int fu(int n)
{
    if (n == 1)
        return 1;
    return n * fu(n - 1);
}
int main()
{
    int n = 5;
    cout << fu(n);
    return 0;
}
