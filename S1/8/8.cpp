// Input: 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
// Output: 1 ,2 ,3 ,4 ,1 ,0 ,0 ,0
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {1, 0, 2, 3, 0, 4, 0, 1};
    int len = arr.size();
    int p = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == 0)
        {
            p = i;
            break;
        }
    }
    for (int i = p + 1; i < len; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[p]);
            p++;
        }
    }
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}