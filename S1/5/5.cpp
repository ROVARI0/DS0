// remove duplicate
// Input: arr[1,1,2,2,2,3,3]
// Output: arr[1,2,3,_,_,_,_]

#include <iostream>
#include <vector>

using namespace std;
int removeDuplicate(vector<int> &array, int len)
{
    int j = 0;
    for (int i = 1; i < len; i++)
    {
        if (array[i] != array[j])
        {
            j++;
            array[j] = array[i];
        }
    }
    return j + 1;
}
int main()
{
    vector<int> array = {1, 1, 2, 2, 3, 3};
    int len = array.size();
    int n = removeDuplicate(array, len);
    for (int k = 0; k < n; k++)
    {
        cout << array[k] << " ";
    }
    return 0;
}