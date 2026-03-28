// Design Hashset

// Input: ["MyHashSet", "add", "add", "contains", "contains", "add", "contains", "remove", "contains"]
// [[], [1], [2], [1], [3], [2], [2], [2], [2]]

// Output: [null, null, null, true, false, null, true, null, false]

#include <bits/stdc++.h>
using namespace std;

class MyHashSet
{
private:
    vector<int> data; // underlying storage

public:
    MyHashSet()
    {
        // constructor initializes empty set
    }

    void add(int key)
    {
        // check manually if key already exists
        bool exists = false;
        for (int i = 0; i < data.size(); i++)
        {
            if (data[i] == key)
            {
                exists = true;
                break;
            }
        }
        if (!exists)
        {
            data.push_back(key);
        }
    }

    void remove(int key)
    {
        // manually search and erase
        for (int i = 0; i < data.size(); i++)
        {
            if (data[i] == key)
            {
                // shift elements left
                for (int j = i; j < data.size() - 1; j++)
                {
                    data[j] = data[j + 1];
                }
                data.pop_back();
                break; // remove only one occurrence
            }
        }
    }

    bool contains(int key)
    {
        // manual search
        for (int i = 0; i < data.size(); i++)
        {
            if (data[i] == key)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    MyHashSet set;
    set.add(1);
    set.add(2);
    cout << set.contains(1) << endl; // true
    cout << set.contains(3) << endl; // false
    set.add(2);
    cout << set.contains(2) << endl; // true
    set.remove(2);
    cout << set.contains(2) << endl; // false
    return 0;
}
