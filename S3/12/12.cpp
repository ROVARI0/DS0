// Count the frequency of elements in an array.

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 2, 3, 4, 4, 4, 5};
    unordered_map<int, int> freq;
     for(int num:arr){
        freq[num]++;
     }
      for (auto it : freq) {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}