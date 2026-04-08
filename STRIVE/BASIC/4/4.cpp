// Input:N = 4554
// Output:Palindrome Number
// Explanation: The reverse of 4554 is 4554 and therefore it is palindrome number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4553;
    int temp = n, revNum = 0;
    while (n > 0)
    {
        int last = n % 10;
        revNum = revNum * 10 + last;
        n /= 10;
    }
    if (temp == revNum)
    {
        cout << "Number is palindrome";
    }
    else
    {
        cout << "Number is not palindrome";
    }
    return 0;
}