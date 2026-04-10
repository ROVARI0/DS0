// two sum

#include <bits/stdc++.h>
using namespace std;

// Function to check if any two numbers in 'book' sum to 'target'
string read(int n, vector<int> book, int target)
{
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int a = book[i];
        int more = target - a;
        if (mpp.find(more) != mpp.end())
        {
            return "YES";
        }
        mpp[a] = i;
    }
    return "NO";
}

int main()
{
    // Assume array
    vector<int> book = {2, 7, 11, 15};
    int target = 9;
    int n = book.size();

    string result = read(n, book, target);
    cout << "Result: " << result << endl;

    return 0;
}
