// Check if the given String is Palindrome or not

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;

    while (start < end)
    {
        if (s[start] != s[end])   // mismatch found
            return false;
        start++;
        end--;
    }
    return true;   // no mismatches
}

int main()
{
    string str="yyuiy";

    if (isPalindrome(str))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}

// Input: "madam"

// Compare m (start) with m (end) → match

// Compare a with a → match

// Compare d with d → match

// All characters matched → Palindrome