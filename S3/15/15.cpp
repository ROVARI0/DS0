#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 2, 3, 4, 4, 5, 1};

    map<int, int> freq; // key = element, value = count
    vector<int> result;

    for (int num : arr)
    {
        freq[num]++;
    }

    for (auto it : freq)
    {
        result.push_back(it.first);
    }
    
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
