// Input: N = 5, array[] = {1,2,3,4,5}
// Output: 2,3,4,5,1

#include <iostream>
#include <vector>

using namespace std;

void Rotate(vector<int> &arr, int len)
{
    int a = arr[0];
    for (int i = 1; i < len; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[len - 1] = a;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    vector<int> array = {1, 2, 3, 4};
    int len = array.size();
    Rotate(array, len);
    return 0;
}