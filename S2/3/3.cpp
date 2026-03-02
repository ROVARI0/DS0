#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
// Print both duplicate
// int main()
// {
//     vector<int> ar = {1, 4, 4, 5, 6, 7, 7};
//     int length = ar.size();
//     unordered_map<int, int> freq;
//     for (int num : ar)
//     {
//         freq[num]++;
//     }
//     for (auto &pair : freq)
//     {
//         if (pair.second > 1)
//         {
//             cout << pair.first << " ";
//         }
//     }
//     return 0;
// }

// Print first duplicate
int main()
{
    vector<int> ar = {1, 4, 4, 5, 6, 7, 7};
    unordered_map<int, int> freq;
    for (int num : ar)
    {
        freq[num]++;
        if (freq[num] == 2)
        {
            cout << "First duplicate: " << num << endl;
            return 0;
        }
    }
    cout << "No duplicates found" << endl;
    return 0;
}