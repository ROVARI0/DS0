// Majority Element

// Input: nums = [5,5,1,1,1,5,5]
// Output: 5

// using map
//  #include <bits/stdc++.h>
//  using namespace std;

// int main()
// {
//     vector<int> arr = {5, 5, 1, 1, 1, 5, 5};
//     int a = arr.size();
//     unordered_map<int, int> freq;
//     for (int n : arr)
//     {
//         freq[n]++;
//     }

//     for (auto n : freq)
//     {
//         if (n.second > (a / 2))
//         {
//             cout << n.first << " ";
//         }
//     }

//     return 0;
// }

// Using moores voting algorithm

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {5, 5, 1, 1, 1, 5, 5};
    int a = arr.size();
    int cnt = 0;
    int el;
    for (int i = 0; i < a; i++)
    {
        if (cnt == 0)
        {
            el = arr[i];
            cnt = 1;
        }
        else if (arr[i] == el)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }

    int cnt1 = 0;
    for (int i = 0; i < a; i++)
    {
        if (arr[i] == el)
        {
            cnt1++;
        }
    }

    if (cnt1 > (arr.size() / 2))
    {
        cout << el;
    }
    
    return 0;
}