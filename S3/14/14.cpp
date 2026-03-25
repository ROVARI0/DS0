// Check if two strings are anagrams.
// An anagram means both strings contain the same characters with the same frequency, just in different order.
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

bool isAnagram(const string &s1, const string &s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }
    unordered_map<char, int> ma, mb;
    for (char c : s1)
    {
        ma[c]++;
    }
    for (char c : s2)
    {
        mb[c]++;
    }
    return ma == mb;
}
int main()
{
    string s1 = "listen";
    string s2 = "silent";

    if (isAnagram(s1, s2))
    {
        cout << "Strings are anagrams" << endl;
    }
    else
    {
        cout << "Strings are not anagrams" << endl;
    }
}
