// Input : a[] = {1, 2, 3, 2, 1}, b[] = {3, 2, 2, 3, 3, 2}
// Output : {3, 2, 1}
// Explanation: Each element in the output either belongs to array a or array b,
// and we need to print only one occurrence of such elements.

#include <iostream>
#include <map>
#include <vector>
using namespace std;

// freq = {1:2, 2:5, 3:4}

int main()
{
    vector<int> a = {1, 2, 3};
    vector<int> b = {5, 7, 3};

    map<int, int> freq;

    // Insert elements of array a
    for (int num : a)
    {
        freq[num]++; // increment frequency
    }

    // Insert elements of array b
    for (int num : b)
    {
        freq[num]++; // increment frequency
    }

    cout << "Union of arrays: ";
    for (auto &pair : freq)
    {
        cout << pair.first << " ";
    }
    cout << endl;

    return 0;
}
