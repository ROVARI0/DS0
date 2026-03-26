// Check if brackets are balanced in an expression.

#include <bits/stdc++.h>
using namespace std;

bool checkParanthesis(const string &text)
{
    stack<char> s;
    for (char ch : text)
    {
        if (ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']')
        {
            if (s.empty())
                return false;
            char top = s.top();
            s.pop();
            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '['))
            {
                return false; // mismatch
            }
        }
    }
    return s.empty();
}
int main()
{
    string text = "{({()})}";
    bool result = checkParanthesis(text);
    if (result)
    {
        cout << "valid";
    }
    else
    {
        cout << "not valid";
    }
    return 0;
}