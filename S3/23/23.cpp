// Count vowels and consonants in a string.

#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

pair<int, int> countVandC(string &text)
{
    string vowels = "aeiouAEIOU";
    int Vowels = 0, Consonants = 0;
    for (char ch : text)
    {
        if (isalpha(ch))
        {

            if (vowels.find(ch) != string::npos)
            {
                Vowels++;
            }
            else
            {
                Consonants++;
            }
        }
    }
    return {Vowels, Consonants};
}
int main()
{
    string text = "Sample Text";
    auto [vowels, consonants] = countVandC(text);
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    return 0;
}

// dont count duplicate vowels  

// #include <iostream>
// #include <string>
// #include <cctype>
// #include <set>   // for unique storage
// using namespace std;

// pair<int, int> countVandC(const string &text)
// {
//     string vowels = "aeiouAEIOU";
//     set<char> uniqueVowels;   // store unique vowels
//     set<char> uniqueConsonants; // store unique consonants

//     for (char ch : text)
//     {
//         if (isalpha(ch)) // only letters
//         {
//             if (vowels.find(ch) != string::npos)
//             {
//                 uniqueVowels.insert(tolower(ch)); // store lowercase to avoid duplicates
//             }
//             else
//             {
//                 uniqueConsonants.insert(tolower(ch));
//             }
//         }
//     }
//     return { (int)uniqueVowels.size(), (int)uniqueConsonants.size() };
// }

// int main()
// {
//     string text = "Sample Text";
//     auto [vowels, consonants] = countVandC(text);

//     cout << "Unique Vowels: " << vowels << endl;
//     cout << "Unique Consonants: " << consonants << endl;

//     return 0;
// }
