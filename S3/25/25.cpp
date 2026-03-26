// Find the first non-repeating character in a string.

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

char firstNonRepeatingChar(const string &input)
{
    unordered_map<char, int> freq;
    for (char ch : input)
    {
        freq[ch]++;
    }
    for (char ch : input)
    {
        if (freq[ch] == 1)
        {
            return ch;
        }
    }
    return '\0';
}

int main()
{
    string input = "swiss";
    char result = firstNonRepeatingChar(input);

    if (result != '\0')
        cout << "First non-repeating character: " << result << endl;
    else
        cout << "No non-repeating character found." << endl;
    return 0;
}
