// Valid Anagram
// Input: s = "racecar", t = "carrace"

// Output: true

#include <bits/stdc++.h>
using namespace std;

bool checkAnagram(const string &t, const string &a)
{
    if (t.length() != a.length())
    {
        return false;
    }
    unordered_map<char, int> ma, mb;
    for (char c : t)
    {
        ma[c]++;
    }
    for (char c : a)
    {
        mb[c]++;
    }
    return ma == mb;
}

int main()
{
    string text_one = "sample", text_a = "plezms";
    bool result = checkAnagram(text_one, text_a);
    if (result)
    {
        cout << "Is valid anagram";
    }
    else
    {
        cout << "Not valid anagram";
    }
    return 0;
}