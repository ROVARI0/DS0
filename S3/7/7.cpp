// Check if a string is a palindrome.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string st = "madam";
    bool isPalindrome = true;
    int n = st.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (st[i] != st[n - i - 1])
        {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome)
    {
        cout << st << " is a palindrome." << endl;
    }
    else
    {
        cout << st << " is not a palindrome." << endl;
    }
    return 0;
}
